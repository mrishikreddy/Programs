from abc import ABC,abstractmethod
class computer(ABC):
    @abstractmethod
    def process(self):
        pass
com=computer()
com.process