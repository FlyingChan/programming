struct card build_card(char *rank, char *suit)
{
struct card c;
strcpy(c.rank, rank);
strcpy(c.suit, suit);
return c;
}
To call build_card:
struct card card1 = build_card("Ace", "Spade");