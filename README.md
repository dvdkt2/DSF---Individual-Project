# Fast Finance Analyzer

This project explores whether machine learning can effectively predict short-term price movement in financial markets, using both traditional stocks and cryptocurrencies. It combines a multithreaded C++ data fetcher for real-time financial data collection with a Python-based analysis pipeline for feature engineering, visualization, and predictive modeling.

---

## Objectives

- Predict short-term price movement using machine learning
- Identify which technical indicators are most correlated with price spikes
- Compare the behavior of stocks and cryptocurrencies under similar conditions
- Evaluate the limitations of basic ML models in volatile financial environments

---

## Technologies Used

- **C++**: Multithreaded data fetcher using `cURL`
- **Python (Jupyter Notebook)**: Data processing and ML modeling  
  - Libraries: `pandas`, `numpy`, `matplotlib`, `seaborn`, `sklearn`
- **APIs Used**:
  - [CoinGecko](https://www.coingecko.com/en/api) – for hourly crypto prices
  - [Alpha Vantage](https://www.alphavantage.co/) – for daily stock prices

---

## Key Insights

- Rolling average and volatility were the most useful technical indicators
- Short-term price direction is difficult to classify with basic features
- Cryptocurrencies are more volatile and harder to predict than stocks
