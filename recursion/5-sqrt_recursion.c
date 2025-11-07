#include "main.h"

/**
 * _sqrt_helper - aide récursive pour trouver la racine carrée naturelle
 * @n: entier dont on cherche la racine carrée
 * @i: entier courant testé comme racine possible
 *
 * Description: Essaie récursivement des entiers croissants à partir de i.
 * Si i * i == n retourne i. Si i * i > n retourne -1 (pas de
 * racine carrée naturelle).
 * Return: racine carrée naturelle de n, ou -1 si elle n'existe pas.
 */
static int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - renvoie la racine carrée naturelle d'un entier
 * @n: entier dont on veut la racine carrée naturelle
 *
 * Description: Si n n'a pas de racine carrée naturelle, la fonction
 * retourne -1. Utilise la fonction d'aide récursive _sqrt_helper
 * en commençant la recherche à 0.
 * Return: racine carrée naturelle de n, ou -1 si aucune.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
