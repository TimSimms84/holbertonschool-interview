import unittest
makeChange = __import__('0-making_change').makeChange


class TestMakeChange(unittest.TestCase):

    def test_makeChange(self):
        coins = [1, 5, 10, 25]
        total = 43
        expected_output = 6
        self.assertEqual(makeChange(coins, total), expected_output)

    def test_makeChange2(self):
        coins = [1256, 54, 48, 16, 102]
        total = 1453
        expected_output = -1
        self.assertEqual(makeChange(coins, total), expected_output)

if __name__ == '__main__':
    unittest.main()
