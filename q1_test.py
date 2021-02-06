import unittest
import q1


class TestQ1(unittest.TestCase):
    def test_q1(self):
        primes = q1.p
        self.assertEqual(len(primes), 1229)
        self.assertEqual(primes[0], 2)
        self.assertEqual(primes[1], 3)
        self.assertEqual(primes[1], 3)
        self.assertEqual(primes[-1], 9973)
