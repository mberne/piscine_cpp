#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T *array, unsigned int size, void (*fct)(T &))
{
	unsigned int	i  = 0;
	while (i < size)
	{
		fct(array[i]);
		i++;
	}
}

#endif
