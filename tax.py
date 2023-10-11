#!/usr/bin/env python3
# Created by: Remy Skelton
# Created on: Oct 11, 2023
# This program asks the user for the subtotal of their
# item. It then calculates and displays the tax and
# the total cost of the item
import constants


def main():
    # get the item price(subtotal) from user
    print("This program will calculate the tax and total")
    print("cost with your given subtotal")
    subtotal = float(input("Please enter the item price (subtotal): "))

    tax = constants.HST * subtotal
    total = subtotal + tax

    # display the variables to user
    print("")
    print("The subtotal cost is = ${:,.2f}".format(subtotal))
    print("The tax cost is = ${:,.2f}".format(tax))
    print("The total cost is = ${:,.2f}".format(total))


if __name__ == "__main__":
    main()
