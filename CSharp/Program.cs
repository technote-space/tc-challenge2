﻿using System;
using System.Linq;

namespace CSharp
{
	class Program
	{
		static void Main() => Enumerable.Range(1, 150).ToList().ForEach(i => Console.WriteLine(i.ToString() + (0 == i % 3 || 3 == i % 10 ? "!" : "")));
	}
}
