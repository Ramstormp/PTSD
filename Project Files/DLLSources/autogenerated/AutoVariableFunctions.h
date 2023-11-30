#ifndef ENUM_SPECIALIZED_FUNCTIONS_H
#define ENUM_SPECIALIZED_FUNCTIONS_H
#include "../CvEnumsFunctions.h"

static inline AchieveTypes operator+(const AchieveTypes& A, const AchieveTypes& B)
{
	return static_cast<AchieveTypes>((int)A + (int)B);
};
static inline AchieveTypes operator-(const AchieveTypes& A, const AchieveTypes& B)
{
	return static_cast<AchieveTypes>((int)A - (int)B);
};
static inline AchieveTypes& operator++(AchieveTypes& c)
{
	c = static_cast<AchieveTypes>(c + 1);
	return c;
};
static inline AchieveTypes operator++(AchieveTypes& c, int)
{
	AchieveTypes cache = c;
	c = static_cast<AchieveTypes>(c + 1);
	return cache;
};
static inline AchieveTypes& operator--(AchieveTypes& c)
{
	c = static_cast<AchieveTypes>(c - 1);
	return c;
};
static inline AchieveTypes operator--(AchieveTypes& c, int)
{
	AchieveTypes cache = c;
	c = static_cast<AchieveTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (AchieveTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, AchieveTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (AchieveTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, AchieveTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (AchieveTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, AchieveTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (AchieveTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, AchieveTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (AchieveTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, AchieveTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (AchieveTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, AchieveTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<AchieveTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_ACHIEVE;
	static const AchieveTypes DEFAULT = static_cast<AchieveTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_ACHIEVE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_ACHIEVE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const AchieveTypes FIRST = static_cast<AchieveTypes>(0);
	static const AchieveTypes LAST = static_cast<AchieveTypes>((int)NUM_ACHIEVE_TYPES - 1);
	static const AchieveTypes NUM_ELEMENTS = static_cast<AchieveTypes>((int)LAST - (int)FIRST + 1);
	static const AchieveTypes LENGTH = COMPILE_TIME_NUM_ACHIEVE_TYPES;
	static AchieveTypes first() { return static_cast<AchieveTypes>(0);}
	static AchieveTypes last() { return NUM_ACHIEVE_TYPES - static_cast<AchieveTypes>(1);}
	static AchieveTypes numElements() { return last() - first() + static_cast<AchieveTypes>(1);}
	static AchieveTypes start() { return static_cast<AchieveTypes>(0);}
	static AchieveTypes end() { return NUM_ACHIEVE_TYPES;}
	static AchieveTypes length() { return end() - start();}
	static bool isInRange(AchieveTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<AchieveTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(AchieveTypes eIndex) {}
	template<>	static bool _isInRange<0>(AchieveTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(AchieveTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(AchieveTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<AchieveTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	AchieveTypes get(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 0));
	}
	AchieveTypes get0(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 0));
	}
	AchieveTypes getAchieve(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(AchieveTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, AchieveTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	AchieveTypes get1(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 1));
	}
	AchieveTypes getAchieve(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(AchieveTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, AchieveTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	AchieveTypes get2(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 2));
	}
	AchieveTypes getAchieve(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(AchieveTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, AchieveTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	AchieveTypes get3(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 3));
	}
	AchieveTypes getAchieve(int iIndex) const
	{
		return static_cast<AchieveTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(AchieveTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline AreaAITypes operator+(const AreaAITypes& A, const AreaAITypes& B)
{
	return static_cast<AreaAITypes>((int)A + (int)B);
};
static inline AreaAITypes operator-(const AreaAITypes& A, const AreaAITypes& B)
{
	return static_cast<AreaAITypes>((int)A - (int)B);
};
static inline AreaAITypes& operator++(AreaAITypes& c)
{
	c = static_cast<AreaAITypes>(c + 1);
	return c;
};
static inline AreaAITypes operator++(AreaAITypes& c, int)
{
	AreaAITypes cache = c;
	c = static_cast<AreaAITypes>(c + 1);
	return cache;
};
static inline AreaAITypes& operator--(AreaAITypes& c)
{
	c = static_cast<AreaAITypes>(c - 1);
	return c;
};
static inline AreaAITypes operator--(AreaAITypes& c, int)
{
	AreaAITypes cache = c;
	c = static_cast<AreaAITypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (AreaAITypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, AreaAITypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (AreaAITypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, AreaAITypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (AreaAITypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, AreaAITypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (AreaAITypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, AreaAITypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (AreaAITypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, AreaAITypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (AreaAITypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, AreaAITypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<AreaAITypes>
{
	static const JITarrayTypes JIT = NO_JIT_ARRAY_TYPE;
	static const AreaAITypes DEFAULT = static_cast<AreaAITypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_AREAAI_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_AREAAI_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const AreaAITypes FIRST = static_cast<AreaAITypes>(0);
	static const AreaAITypes LAST = static_cast<AreaAITypes>((int)NUM_AREAAI_TYPES - 1);
	static const AreaAITypes NUM_ELEMENTS = static_cast<AreaAITypes>((int)LAST - (int)FIRST + 1);
	static const AreaAITypes LENGTH = COMPILE_TIME_NUM_AREAAI_TYPES;
	static AreaAITypes first() { return static_cast<AreaAITypes>(0);}
	static AreaAITypes last() { return NUM_AREAAI_TYPES - static_cast<AreaAITypes>(1);}
	static AreaAITypes numElements() { return last() - first() + static_cast<AreaAITypes>(1);}
	static AreaAITypes start() { return static_cast<AreaAITypes>(0);}
	static AreaAITypes end() { return NUM_AREAAI_TYPES;}
	static AreaAITypes length() { return end() - start();}
	static bool isInRange(AreaAITypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<AreaAITypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(AreaAITypes eIndex) {}
	template<>	static bool _isInRange<0>(AreaAITypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(AreaAITypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(AreaAITypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};

static inline ArtStyleTypes operator+(const ArtStyleTypes& A, const ArtStyleTypes& B)
{
	return static_cast<ArtStyleTypes>((int)A + (int)B);
};
static inline ArtStyleTypes operator-(const ArtStyleTypes& A, const ArtStyleTypes& B)
{
	return static_cast<ArtStyleTypes>((int)A - (int)B);
};
static inline ArtStyleTypes& operator++(ArtStyleTypes& c)
{
	c = static_cast<ArtStyleTypes>(c + 1);
	return c;
};
static inline ArtStyleTypes operator++(ArtStyleTypes& c, int)
{
	ArtStyleTypes cache = c;
	c = static_cast<ArtStyleTypes>(c + 1);
	return cache;
};
static inline ArtStyleTypes& operator--(ArtStyleTypes& c)
{
	c = static_cast<ArtStyleTypes>(c - 1);
	return c;
};
static inline ArtStyleTypes operator--(ArtStyleTypes& c, int)
{
	ArtStyleTypes cache = c;
	c = static_cast<ArtStyleTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (ArtStyleTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, ArtStyleTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (ArtStyleTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, ArtStyleTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (ArtStyleTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, ArtStyleTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (ArtStyleTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, ArtStyleTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (ArtStyleTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, ArtStyleTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (ArtStyleTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, ArtStyleTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<ArtStyleTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_ARTSTYLE;
	static const ArtStyleTypes DEFAULT = static_cast<ArtStyleTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_ARTSTYLE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_ARTSTYLE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const ArtStyleTypes FIRST = static_cast<ArtStyleTypes>(0);
	static const ArtStyleTypes LAST = static_cast<ArtStyleTypes>((int)NUM_ARTSTYLE_TYPES - 1);
	static const ArtStyleTypes NUM_ELEMENTS = static_cast<ArtStyleTypes>((int)LAST - (int)FIRST + 1);
	static const ArtStyleTypes LENGTH = COMPILE_TIME_NUM_ARTSTYLE_TYPES;
	static ArtStyleTypes first() { return static_cast<ArtStyleTypes>(0);}
	static ArtStyleTypes last() { return NUM_ARTSTYLE_TYPES - static_cast<ArtStyleTypes>(1);}
	static ArtStyleTypes numElements() { return last() - first() + static_cast<ArtStyleTypes>(1);}
	static ArtStyleTypes start() { return static_cast<ArtStyleTypes>(0);}
	static ArtStyleTypes end() { return NUM_ARTSTYLE_TYPES;}
	static ArtStyleTypes length() { return end() - start();}
	static bool isInRange(ArtStyleTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<ArtStyleTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(ArtStyleTypes eIndex) {}
	template<>	static bool _isInRange<0>(ArtStyleTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(ArtStyleTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(ArtStyleTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<ArtStyleTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	ArtStyleTypes get(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 0));
	}
	ArtStyleTypes get0(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 0));
	}
	ArtStyleTypes getArtStyle(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(ArtStyleTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, ArtStyleTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	ArtStyleTypes get1(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 1));
	}
	ArtStyleTypes getArtStyle(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(ArtStyleTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, ArtStyleTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	ArtStyleTypes get2(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 2));
	}
	ArtStyleTypes getArtStyle(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(ArtStyleTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, ArtStyleTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	ArtStyleTypes get3(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 3));
	}
	ArtStyleTypes getArtStyle(int iIndex) const
	{
		return static_cast<ArtStyleTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(ArtStyleTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline BonusTypes operator+(const BonusTypes& A, const BonusTypes& B)
{
	return static_cast<BonusTypes>((int)A + (int)B);
};
static inline BonusTypes operator-(const BonusTypes& A, const BonusTypes& B)
{
	return static_cast<BonusTypes>((int)A - (int)B);
};
static inline BonusTypes& operator++(BonusTypes& c)
{
	c = static_cast<BonusTypes>(c + 1);
	return c;
};
static inline BonusTypes operator++(BonusTypes& c, int)
{
	BonusTypes cache = c;
	c = static_cast<BonusTypes>(c + 1);
	return cache;
};
static inline BonusTypes& operator--(BonusTypes& c)
{
	c = static_cast<BonusTypes>(c - 1);
	return c;
};
static inline BonusTypes operator--(BonusTypes& c, int)
{
	BonusTypes cache = c;
	c = static_cast<BonusTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (BonusTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, BonusTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (BonusTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, BonusTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (BonusTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, BonusTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (BonusTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, BonusTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (BonusTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, BonusTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (BonusTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, BonusTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<BonusTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_BONUS;
	static const BonusTypes DEFAULT = static_cast<BonusTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_BONUS_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_BONUS_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const BonusTypes FIRST = static_cast<BonusTypes>(0);
	static const BonusTypes LAST = static_cast<BonusTypes>((int)NUM_BONUS_TYPES - 1);
	static const BonusTypes NUM_ELEMENTS = static_cast<BonusTypes>((int)LAST - (int)FIRST + 1);
	static const BonusTypes LENGTH = COMPILE_TIME_NUM_BONUS_TYPES;
	static BonusTypes first() { return static_cast<BonusTypes>(0);}
	static BonusTypes last() { return NUM_BONUS_TYPES - static_cast<BonusTypes>(1);}
	static BonusTypes numElements() { return last() - first() + static_cast<BonusTypes>(1);}
	static BonusTypes start() { return static_cast<BonusTypes>(0);}
	static BonusTypes end() { return NUM_BONUS_TYPES;}
	static BonusTypes length() { return end() - start();}
	static bool isInRange(BonusTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<BonusTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(BonusTypes eIndex) {}
	template<>	static bool _isInRange<0>(BonusTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(BonusTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(BonusTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<BonusTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	BonusTypes get(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 0));
	}
	BonusTypes get0(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 0));
	}
	BonusTypes getBonus(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(BonusTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, BonusTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	BonusTypes get1(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 1));
	}
	BonusTypes getBonus(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(BonusTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, BonusTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	BonusTypes get2(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 2));
	}
	BonusTypes getBonus(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(BonusTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, BonusTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	BonusTypes get3(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 3));
	}
	BonusTypes getBonus(int iIndex) const
	{
		return static_cast<BonusTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(BonusTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline BuildTypes operator+(const BuildTypes& A, const BuildTypes& B)
{
	return static_cast<BuildTypes>((int)A + (int)B);
};
static inline BuildTypes operator-(const BuildTypes& A, const BuildTypes& B)
{
	return static_cast<BuildTypes>((int)A - (int)B);
};
static inline BuildTypes& operator++(BuildTypes& c)
{
	c = static_cast<BuildTypes>(c + 1);
	return c;
};
static inline BuildTypes operator++(BuildTypes& c, int)
{
	BuildTypes cache = c;
	c = static_cast<BuildTypes>(c + 1);
	return cache;
};
static inline BuildTypes& operator--(BuildTypes& c)
{
	c = static_cast<BuildTypes>(c - 1);
	return c;
};
static inline BuildTypes operator--(BuildTypes& c, int)
{
	BuildTypes cache = c;
	c = static_cast<BuildTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (BuildTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, BuildTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (BuildTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, BuildTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (BuildTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, BuildTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (BuildTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, BuildTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (BuildTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, BuildTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (BuildTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, BuildTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<BuildTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_BUILD;
	static const BuildTypes DEFAULT = static_cast<BuildTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_BUILD_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_BUILD_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const BuildTypes FIRST = static_cast<BuildTypes>(0);
	static const BuildTypes LAST = static_cast<BuildTypes>((int)NUM_BUILD_TYPES - 1);
	static const BuildTypes NUM_ELEMENTS = static_cast<BuildTypes>((int)LAST - (int)FIRST + 1);
	static const BuildTypes LENGTH = COMPILE_TIME_NUM_BUILD_TYPES;
	static BuildTypes first() { return static_cast<BuildTypes>(0);}
	static BuildTypes last() { return NUM_BUILD_TYPES - static_cast<BuildTypes>(1);}
	static BuildTypes numElements() { return last() - first() + static_cast<BuildTypes>(1);}
	static BuildTypes start() { return static_cast<BuildTypes>(0);}
	static BuildTypes end() { return NUM_BUILD_TYPES;}
	static BuildTypes length() { return end() - start();}
	static bool isInRange(BuildTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<BuildTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(BuildTypes eIndex) {}
	template<>	static bool _isInRange<0>(BuildTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(BuildTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(BuildTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<BuildTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	BuildTypes get(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 0));
	}
	BuildTypes get0(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 0));
	}
	BuildTypes getBuild(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(BuildTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, BuildTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	BuildTypes get1(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 1));
	}
	BuildTypes getBuild(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(BuildTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, BuildTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	BuildTypes get2(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 2));
	}
	BuildTypes getBuild(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(BuildTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, BuildTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	BuildTypes get3(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 3));
	}
	BuildTypes getBuild(int iIndex) const
	{
		return static_cast<BuildTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(BuildTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline BuildingTypes operator+(const BuildingTypes& A, const BuildingTypes& B)
{
	return static_cast<BuildingTypes>((int)A + (int)B);
};
static inline BuildingTypes operator-(const BuildingTypes& A, const BuildingTypes& B)
{
	return static_cast<BuildingTypes>((int)A - (int)B);
};
static inline BuildingTypes& operator++(BuildingTypes& c)
{
	c = static_cast<BuildingTypes>(c + 1);
	return c;
};
static inline BuildingTypes operator++(BuildingTypes& c, int)
{
	BuildingTypes cache = c;
	c = static_cast<BuildingTypes>(c + 1);
	return cache;
};
static inline BuildingTypes& operator--(BuildingTypes& c)
{
	c = static_cast<BuildingTypes>(c - 1);
	return c;
};
static inline BuildingTypes operator--(BuildingTypes& c, int)
{
	BuildingTypes cache = c;
	c = static_cast<BuildingTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (BuildingTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, BuildingTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (BuildingTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, BuildingTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (BuildingTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, BuildingTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (BuildingTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, BuildingTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (BuildingTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, BuildingTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (BuildingTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, BuildingTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<BuildingTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_BUILDING;
	static const BuildingTypes DEFAULT = static_cast<BuildingTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_BUILDING_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_BUILDING_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const BuildingTypes FIRST = static_cast<BuildingTypes>(0);
	static const BuildingTypes LAST = static_cast<BuildingTypes>((int)NUM_BUILDING_TYPES - 1);
	static const BuildingTypes NUM_ELEMENTS = static_cast<BuildingTypes>((int)LAST - (int)FIRST + 1);
	static const BuildingTypes LENGTH = COMPILE_TIME_NUM_BUILDING_TYPES;
	static BuildingTypes first() { return static_cast<BuildingTypes>(0);}
	static BuildingTypes last() { return NUM_BUILDING_TYPES - static_cast<BuildingTypes>(1);}
	static BuildingTypes numElements() { return last() - first() + static_cast<BuildingTypes>(1);}
	static BuildingTypes start() { return static_cast<BuildingTypes>(0);}
	static BuildingTypes end() { return NUM_BUILDING_TYPES;}
	static BuildingTypes length() { return end() - start();}
	static bool isInRange(BuildingTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<BuildingTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(BuildingTypes eIndex) {}
	template<>	static bool _isInRange<0>(BuildingTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(BuildingTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(BuildingTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<BuildingTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	BuildingTypes get(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 0));
	}
	BuildingTypes get0(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 0));
	}
	BuildingTypes getBuilding(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(BuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, BuildingTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	BuildingTypes get1(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 1));
	}
	BuildingTypes getBuilding(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(BuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, BuildingTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	BuildingTypes get2(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 2));
	}
	BuildingTypes getBuilding(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(BuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, BuildingTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	BuildingTypes get3(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 3));
	}
	BuildingTypes getBuilding(int iIndex) const
	{
		return static_cast<BuildingTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(BuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline BuildingClassTypes operator+(const BuildingClassTypes& A, const BuildingClassTypes& B)
{
	return static_cast<BuildingClassTypes>((int)A + (int)B);
};
static inline BuildingClassTypes operator-(const BuildingClassTypes& A, const BuildingClassTypes& B)
{
	return static_cast<BuildingClassTypes>((int)A - (int)B);
};
static inline BuildingClassTypes& operator++(BuildingClassTypes& c)
{
	c = static_cast<BuildingClassTypes>(c + 1);
	return c;
};
static inline BuildingClassTypes operator++(BuildingClassTypes& c, int)
{
	BuildingClassTypes cache = c;
	c = static_cast<BuildingClassTypes>(c + 1);
	return cache;
};
static inline BuildingClassTypes& operator--(BuildingClassTypes& c)
{
	c = static_cast<BuildingClassTypes>(c - 1);
	return c;
};
static inline BuildingClassTypes operator--(BuildingClassTypes& c, int)
{
	BuildingClassTypes cache = c;
	c = static_cast<BuildingClassTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (BuildingClassTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, BuildingClassTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (BuildingClassTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, BuildingClassTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (BuildingClassTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, BuildingClassTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (BuildingClassTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, BuildingClassTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (BuildingClassTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, BuildingClassTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (BuildingClassTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, BuildingClassTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<BuildingClassTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_BUILDINGCLASS;
	static const BuildingClassTypes DEFAULT = static_cast<BuildingClassTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_BUILDINGCLASS_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_BUILDINGCLASS_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const BuildingClassTypes FIRST = static_cast<BuildingClassTypes>(0);
	static const BuildingClassTypes LAST = static_cast<BuildingClassTypes>((int)NUM_BUILDINGCLASS_TYPES - 1);
	static const BuildingClassTypes NUM_ELEMENTS = static_cast<BuildingClassTypes>((int)LAST - (int)FIRST + 1);
	static const BuildingClassTypes LENGTH = COMPILE_TIME_NUM_BUILDINGCLASS_TYPES;
	static BuildingClassTypes first() { return static_cast<BuildingClassTypes>(0);}
	static BuildingClassTypes last() { return NUM_BUILDINGCLASS_TYPES - static_cast<BuildingClassTypes>(1);}
	static BuildingClassTypes numElements() { return last() - first() + static_cast<BuildingClassTypes>(1);}
	static BuildingClassTypes start() { return static_cast<BuildingClassTypes>(0);}
	static BuildingClassTypes end() { return NUM_BUILDINGCLASS_TYPES;}
	static BuildingClassTypes length() { return end() - start();}
	static bool isInRange(BuildingClassTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<BuildingClassTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(BuildingClassTypes eIndex) {}
	template<>	static bool _isInRange<0>(BuildingClassTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(BuildingClassTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(BuildingClassTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<BuildingClassTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	BuildingClassTypes get(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 0));
	}
	BuildingClassTypes get0(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 0));
	}
	BuildingClassTypes getBuildingClass(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(BuildingClassTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, BuildingClassTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	BuildingClassTypes get1(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 1));
	}
	BuildingClassTypes getBuildingClass(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(BuildingClassTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, BuildingClassTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	BuildingClassTypes get2(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 2));
	}
	BuildingClassTypes getBuildingClass(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(BuildingClassTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, BuildingClassTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	BuildingClassTypes get3(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 3));
	}
	BuildingClassTypes getBuildingClass(int iIndex) const
	{
		return static_cast<BuildingClassTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(BuildingClassTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline CityPlotTypes operator+(const CityPlotTypes& A, const CityPlotTypes& B)
{
	return static_cast<CityPlotTypes>((int)A + (int)B);
};
static inline CityPlotTypes operator-(const CityPlotTypes& A, const CityPlotTypes& B)
{
	return static_cast<CityPlotTypes>((int)A - (int)B);
};
static inline CityPlotTypes& operator++(CityPlotTypes& c)
{
	c = static_cast<CityPlotTypes>(c + 1);
	return c;
};
static inline CityPlotTypes operator++(CityPlotTypes& c, int)
{
	CityPlotTypes cache = c;
	c = static_cast<CityPlotTypes>(c + 1);
	return cache;
};
static inline CityPlotTypes& operator--(CityPlotTypes& c)
{
	c = static_cast<CityPlotTypes>(c - 1);
	return c;
};
static inline CityPlotTypes operator--(CityPlotTypes& c, int)
{
	CityPlotTypes cache = c;
	c = static_cast<CityPlotTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (CityPlotTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, CityPlotTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (CityPlotTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, CityPlotTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (CityPlotTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, CityPlotTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (CityPlotTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, CityPlotTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (CityPlotTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, CityPlotTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (CityPlotTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, CityPlotTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<CityPlotTypes>
{
	static const JITarrayTypes JIT = NO_JIT_ARRAY_TYPE;
	static const CityPlotTypes DEFAULT = static_cast<CityPlotTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)NUM_CITY_PLOTS_2_PLOTS < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)MAX_SHORT != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const CityPlotTypes FIRST = static_cast<CityPlotTypes>(0);
	static const CityPlotTypes LAST = static_cast<CityPlotTypes>((int)NUM_CITY_PLOTS - 1);
	static const CityPlotTypes NUM_ELEMENTS = static_cast<CityPlotTypes>((int)LAST - (int)FIRST + 1);
	static const CityPlotTypes LENGTH = NUM_CITY_PLOTS_2_PLOTS;
	static CityPlotTypes first() { return static_cast<CityPlotTypes>(0);}
	static CityPlotTypes last() { return NUM_CITY_PLOTS - static_cast<CityPlotTypes>(1);}
	static CityPlotTypes numElements() { return last() - first() + static_cast<CityPlotTypes>(1);}
	static CityPlotTypes start() { return static_cast<CityPlotTypes>(0);}
	static CityPlotTypes end() { return NUM_CITY_PLOTS;}
	static CityPlotTypes length() { return end() - start();}
	static bool isInRange(CityPlotTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<CityPlotTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(CityPlotTypes eIndex) {}
	template<>	static bool _isInRange<0>(CityPlotTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(CityPlotTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(CityPlotTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};

static inline CivCategoryTypes operator+(const CivCategoryTypes& A, const CivCategoryTypes& B)
{
	return static_cast<CivCategoryTypes>((int)A + (int)B);
};
static inline CivCategoryTypes operator-(const CivCategoryTypes& A, const CivCategoryTypes& B)
{
	return static_cast<CivCategoryTypes>((int)A - (int)B);
};
static inline CivCategoryTypes& operator++(CivCategoryTypes& c)
{
	c = static_cast<CivCategoryTypes>(c + 1);
	return c;
};
static inline CivCategoryTypes operator++(CivCategoryTypes& c, int)
{
	CivCategoryTypes cache = c;
	c = static_cast<CivCategoryTypes>(c + 1);
	return cache;
};
static inline CivCategoryTypes& operator--(CivCategoryTypes& c)
{
	c = static_cast<CivCategoryTypes>(c - 1);
	return c;
};
static inline CivCategoryTypes operator--(CivCategoryTypes& c, int)
{
	CivCategoryTypes cache = c;
	c = static_cast<CivCategoryTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (CivCategoryTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, CivCategoryTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (CivCategoryTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, CivCategoryTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (CivCategoryTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, CivCategoryTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (CivCategoryTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, CivCategoryTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (CivCategoryTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, CivCategoryTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (CivCategoryTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, CivCategoryTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<CivCategoryTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CIV_CATEGORY;
	static const CivCategoryTypes DEFAULT = static_cast<CivCategoryTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CIV_CATEGORY_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CIV_CATEGORY_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const CivCategoryTypes FIRST = static_cast<CivCategoryTypes>(0);
	static const CivCategoryTypes LAST = static_cast<CivCategoryTypes>((int)NUM_CIV_CATEGORY_TYPES - 1);
	static const CivCategoryTypes NUM_ELEMENTS = static_cast<CivCategoryTypes>((int)LAST - (int)FIRST + 1);
	static const CivCategoryTypes LENGTH = COMPILE_TIME_NUM_CIV_CATEGORY_TYPES;
	static CivCategoryTypes first() { return static_cast<CivCategoryTypes>(0);}
	static CivCategoryTypes last() { return NUM_CIV_CATEGORY_TYPES - static_cast<CivCategoryTypes>(1);}
	static CivCategoryTypes numElements() { return last() - first() + static_cast<CivCategoryTypes>(1);}
	static CivCategoryTypes start() { return static_cast<CivCategoryTypes>(0);}
	static CivCategoryTypes end() { return NUM_CIV_CATEGORY_TYPES;}
	static CivCategoryTypes length() { return end() - start();}
	static bool isInRange(CivCategoryTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<CivCategoryTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(CivCategoryTypes eIndex) {}
	template<>	static bool _isInRange<0>(CivCategoryTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(CivCategoryTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(CivCategoryTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<CivCategoryTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	CivCategoryTypes get(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 0));
	}
	CivCategoryTypes get0(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 0));
	}
	CivCategoryTypes getCivCategory(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(CivCategoryTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, CivCategoryTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	CivCategoryTypes get1(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 1));
	}
	CivCategoryTypes getCivCategory(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(CivCategoryTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, CivCategoryTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	CivCategoryTypes get2(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 2));
	}
	CivCategoryTypes getCivCategory(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(CivCategoryTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, CivCategoryTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	CivCategoryTypes get3(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 3));
	}
	CivCategoryTypes getCivCategory(int iIndex) const
	{
		return static_cast<CivCategoryTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(CivCategoryTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline CivEffectTypes operator+(const CivEffectTypes& A, const CivEffectTypes& B)
{
	return static_cast<CivEffectTypes>((int)A + (int)B);
};
static inline CivEffectTypes operator-(const CivEffectTypes& A, const CivEffectTypes& B)
{
	return static_cast<CivEffectTypes>((int)A - (int)B);
};
static inline CivEffectTypes& operator++(CivEffectTypes& c)
{
	c = static_cast<CivEffectTypes>(c + 1);
	return c;
};
static inline CivEffectTypes operator++(CivEffectTypes& c, int)
{
	CivEffectTypes cache = c;
	c = static_cast<CivEffectTypes>(c + 1);
	return cache;
};
static inline CivEffectTypes& operator--(CivEffectTypes& c)
{
	c = static_cast<CivEffectTypes>(c - 1);
	return c;
};
static inline CivEffectTypes operator--(CivEffectTypes& c, int)
{
	CivEffectTypes cache = c;
	c = static_cast<CivEffectTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (CivEffectTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, CivEffectTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (CivEffectTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, CivEffectTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (CivEffectTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, CivEffectTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (CivEffectTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, CivEffectTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (CivEffectTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, CivEffectTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (CivEffectTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, CivEffectTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<CivEffectTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CIV_EFFECT;
	static const CivEffectTypes DEFAULT = static_cast<CivEffectTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CIV_EFFECT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CIV_EFFECT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const CivEffectTypes FIRST = static_cast<CivEffectTypes>(0);
	static const CivEffectTypes LAST = static_cast<CivEffectTypes>((int)NUM_CIV_EFFECT_TYPES - 1);
	static const CivEffectTypes NUM_ELEMENTS = static_cast<CivEffectTypes>((int)LAST - (int)FIRST + 1);
	static const CivEffectTypes LENGTH = COMPILE_TIME_NUM_CIV_EFFECT_TYPES;
	static CivEffectTypes first() { return static_cast<CivEffectTypes>(0);}
	static CivEffectTypes last() { return NUM_CIV_EFFECT_TYPES - static_cast<CivEffectTypes>(1);}
	static CivEffectTypes numElements() { return last() - first() + static_cast<CivEffectTypes>(1);}
	static CivEffectTypes start() { return static_cast<CivEffectTypes>(0);}
	static CivEffectTypes end() { return NUM_CIV_EFFECT_TYPES;}
	static CivEffectTypes length() { return end() - start();}
	static bool isInRange(CivEffectTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<CivEffectTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(CivEffectTypes eIndex) {}
	template<>	static bool _isInRange<0>(CivEffectTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(CivEffectTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(CivEffectTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<CivEffectTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	CivEffectTypes get(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 0));
	}
	CivEffectTypes get0(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 0));
	}
	CivEffectTypes getCivEffect(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(CivEffectTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, CivEffectTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	CivEffectTypes get1(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 1));
	}
	CivEffectTypes getCivEffect(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(CivEffectTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, CivEffectTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	CivEffectTypes get2(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 2));
	}
	CivEffectTypes getCivEffect(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(CivEffectTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, CivEffectTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	CivEffectTypes get3(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 3));
	}
	CivEffectTypes getCivEffect(int iIndex) const
	{
		return static_cast<CivEffectTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(CivEffectTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline CivicTypes operator+(const CivicTypes& A, const CivicTypes& B)
{
	return static_cast<CivicTypes>((int)A + (int)B);
};
static inline CivicTypes operator-(const CivicTypes& A, const CivicTypes& B)
{
	return static_cast<CivicTypes>((int)A - (int)B);
};
static inline CivicTypes& operator++(CivicTypes& c)
{
	c = static_cast<CivicTypes>(c + 1);
	return c;
};
static inline CivicTypes operator++(CivicTypes& c, int)
{
	CivicTypes cache = c;
	c = static_cast<CivicTypes>(c + 1);
	return cache;
};
static inline CivicTypes& operator--(CivicTypes& c)
{
	c = static_cast<CivicTypes>(c - 1);
	return c;
};
static inline CivicTypes operator--(CivicTypes& c, int)
{
	CivicTypes cache = c;
	c = static_cast<CivicTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (CivicTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, CivicTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (CivicTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, CivicTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (CivicTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, CivicTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (CivicTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, CivicTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (CivicTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, CivicTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (CivicTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, CivicTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<CivicTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CIVIC;
	static const CivicTypes DEFAULT = static_cast<CivicTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CIVIC_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CIVIC_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const CivicTypes FIRST = static_cast<CivicTypes>(0);
	static const CivicTypes LAST = static_cast<CivicTypes>((int)NUM_CIVIC_TYPES - 1);
	static const CivicTypes NUM_ELEMENTS = static_cast<CivicTypes>((int)LAST - (int)FIRST + 1);
	static const CivicTypes LENGTH = COMPILE_TIME_NUM_CIVIC_TYPES;
	static CivicTypes first() { return static_cast<CivicTypes>(0);}
	static CivicTypes last() { return NUM_CIVIC_TYPES - static_cast<CivicTypes>(1);}
	static CivicTypes numElements() { return last() - first() + static_cast<CivicTypes>(1);}
	static CivicTypes start() { return static_cast<CivicTypes>(0);}
	static CivicTypes end() { return NUM_CIVIC_TYPES;}
	static CivicTypes length() { return end() - start();}
	static bool isInRange(CivicTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<CivicTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(CivicTypes eIndex) {}
	template<>	static bool _isInRange<0>(CivicTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(CivicTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(CivicTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<CivicTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	CivicTypes get(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 0));
	}
	CivicTypes get0(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 0));
	}
	CivicTypes getCivic(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(CivicTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, CivicTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	CivicTypes get1(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 1));
	}
	CivicTypes getCivic(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(CivicTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, CivicTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	CivicTypes get2(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 2));
	}
	CivicTypes getCivic(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(CivicTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, CivicTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	CivicTypes get3(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 3));
	}
	CivicTypes getCivic(int iIndex) const
	{
		return static_cast<CivicTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(CivicTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline CivicOptionTypes operator+(const CivicOptionTypes& A, const CivicOptionTypes& B)
{
	return static_cast<CivicOptionTypes>((int)A + (int)B);
};
static inline CivicOptionTypes operator-(const CivicOptionTypes& A, const CivicOptionTypes& B)
{
	return static_cast<CivicOptionTypes>((int)A - (int)B);
};
static inline CivicOptionTypes& operator++(CivicOptionTypes& c)
{
	c = static_cast<CivicOptionTypes>(c + 1);
	return c;
};
static inline CivicOptionTypes operator++(CivicOptionTypes& c, int)
{
	CivicOptionTypes cache = c;
	c = static_cast<CivicOptionTypes>(c + 1);
	return cache;
};
static inline CivicOptionTypes& operator--(CivicOptionTypes& c)
{
	c = static_cast<CivicOptionTypes>(c - 1);
	return c;
};
static inline CivicOptionTypes operator--(CivicOptionTypes& c, int)
{
	CivicOptionTypes cache = c;
	c = static_cast<CivicOptionTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (CivicOptionTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, CivicOptionTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (CivicOptionTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, CivicOptionTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (CivicOptionTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, CivicOptionTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (CivicOptionTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, CivicOptionTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (CivicOptionTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, CivicOptionTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (CivicOptionTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, CivicOptionTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<CivicOptionTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CIVICOPTION;
	static const CivicOptionTypes DEFAULT = static_cast<CivicOptionTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CIVICOPTION_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CIVICOPTION_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const CivicOptionTypes FIRST = static_cast<CivicOptionTypes>(0);
	static const CivicOptionTypes LAST = static_cast<CivicOptionTypes>((int)NUM_CIVICOPTION_TYPES - 1);
	static const CivicOptionTypes NUM_ELEMENTS = static_cast<CivicOptionTypes>((int)LAST - (int)FIRST + 1);
	static const CivicOptionTypes LENGTH = COMPILE_TIME_NUM_CIVICOPTION_TYPES;
	static CivicOptionTypes first() { return static_cast<CivicOptionTypes>(0);}
	static CivicOptionTypes last() { return NUM_CIVICOPTION_TYPES - static_cast<CivicOptionTypes>(1);}
	static CivicOptionTypes numElements() { return last() - first() + static_cast<CivicOptionTypes>(1);}
	static CivicOptionTypes start() { return static_cast<CivicOptionTypes>(0);}
	static CivicOptionTypes end() { return NUM_CIVICOPTION_TYPES;}
	static CivicOptionTypes length() { return end() - start();}
	static bool isInRange(CivicOptionTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<CivicOptionTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(CivicOptionTypes eIndex) {}
	template<>	static bool _isInRange<0>(CivicOptionTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(CivicOptionTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(CivicOptionTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<CivicOptionTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	CivicOptionTypes get(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 0));
	}
	CivicOptionTypes get0(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 0));
	}
	CivicOptionTypes getCivicOption(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(CivicOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, CivicOptionTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	CivicOptionTypes get1(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 1));
	}
	CivicOptionTypes getCivicOption(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(CivicOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, CivicOptionTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	CivicOptionTypes get2(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 2));
	}
	CivicOptionTypes getCivicOption(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(CivicOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, CivicOptionTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	CivicOptionTypes get3(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 3));
	}
	CivicOptionTypes getCivicOption(int iIndex) const
	{
		return static_cast<CivicOptionTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(CivicOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline CivilizationTypes operator+(const CivilizationTypes& A, const CivilizationTypes& B)
{
	return static_cast<CivilizationTypes>((int)A + (int)B);
};
static inline CivilizationTypes operator-(const CivilizationTypes& A, const CivilizationTypes& B)
{
	return static_cast<CivilizationTypes>((int)A - (int)B);
};
static inline CivilizationTypes& operator++(CivilizationTypes& c)
{
	c = static_cast<CivilizationTypes>(c + 1);
	return c;
};
static inline CivilizationTypes operator++(CivilizationTypes& c, int)
{
	CivilizationTypes cache = c;
	c = static_cast<CivilizationTypes>(c + 1);
	return cache;
};
static inline CivilizationTypes& operator--(CivilizationTypes& c)
{
	c = static_cast<CivilizationTypes>(c - 1);
	return c;
};
static inline CivilizationTypes operator--(CivilizationTypes& c, int)
{
	CivilizationTypes cache = c;
	c = static_cast<CivilizationTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (CivilizationTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, CivilizationTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (CivilizationTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, CivilizationTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (CivilizationTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, CivilizationTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (CivilizationTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, CivilizationTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (CivilizationTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, CivilizationTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (CivilizationTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, CivilizationTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<CivilizationTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CIVILIZATION;
	static const CivilizationTypes DEFAULT = static_cast<CivilizationTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CIVILIZATION_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CIVILIZATION_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const CivilizationTypes FIRST = static_cast<CivilizationTypes>(0);
	static const CivilizationTypes LAST = static_cast<CivilizationTypes>((int)NUM_CIVILIZATION_TYPES - 1);
	static const CivilizationTypes NUM_ELEMENTS = static_cast<CivilizationTypes>((int)LAST - (int)FIRST + 1);
	static const CivilizationTypes LENGTH = COMPILE_TIME_NUM_CIVILIZATION_TYPES;
	static CivilizationTypes first() { return static_cast<CivilizationTypes>(0);}
	static CivilizationTypes last() { return NUM_CIVILIZATION_TYPES - static_cast<CivilizationTypes>(1);}
	static CivilizationTypes numElements() { return last() - first() + static_cast<CivilizationTypes>(1);}
	static CivilizationTypes start() { return static_cast<CivilizationTypes>(0);}
	static CivilizationTypes end() { return NUM_CIVILIZATION_TYPES;}
	static CivilizationTypes length() { return end() - start();}
	static bool isInRange(CivilizationTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<CivilizationTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(CivilizationTypes eIndex) {}
	template<>	static bool _isInRange<0>(CivilizationTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(CivilizationTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(CivilizationTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<CivilizationTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	CivilizationTypes get(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 0));
	}
	CivilizationTypes get0(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 0));
	}
	CivilizationTypes getCivilization(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(CivilizationTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, CivilizationTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	CivilizationTypes get1(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 1));
	}
	CivilizationTypes getCivilization(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(CivilizationTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, CivilizationTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	CivilizationTypes get2(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 2));
	}
	CivilizationTypes getCivilization(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(CivilizationTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, CivilizationTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	CivilizationTypes get3(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 3));
	}
	CivilizationTypes getCivilization(int iIndex) const
	{
		return static_cast<CivilizationTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(CivilizationTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline ClimateTypes operator+(const ClimateTypes& A, const ClimateTypes& B)
{
	return static_cast<ClimateTypes>((int)A + (int)B);
};
static inline ClimateTypes operator-(const ClimateTypes& A, const ClimateTypes& B)
{
	return static_cast<ClimateTypes>((int)A - (int)B);
};
static inline ClimateTypes& operator++(ClimateTypes& c)
{
	c = static_cast<ClimateTypes>(c + 1);
	return c;
};
static inline ClimateTypes operator++(ClimateTypes& c, int)
{
	ClimateTypes cache = c;
	c = static_cast<ClimateTypes>(c + 1);
	return cache;
};
static inline ClimateTypes& operator--(ClimateTypes& c)
{
	c = static_cast<ClimateTypes>(c - 1);
	return c;
};
static inline ClimateTypes operator--(ClimateTypes& c, int)
{
	ClimateTypes cache = c;
	c = static_cast<ClimateTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (ClimateTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, ClimateTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (ClimateTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, ClimateTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (ClimateTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, ClimateTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (ClimateTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, ClimateTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (ClimateTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, ClimateTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (ClimateTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, ClimateTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<ClimateTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CLIMATE;
	static const ClimateTypes DEFAULT = static_cast<ClimateTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CLIMATE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CLIMATE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const ClimateTypes FIRST = static_cast<ClimateTypes>(0);
	static const ClimateTypes LAST = static_cast<ClimateTypes>((int)NUM_CLIMATE_TYPES - 1);
	static const ClimateTypes NUM_ELEMENTS = static_cast<ClimateTypes>((int)LAST - (int)FIRST + 1);
	static const ClimateTypes LENGTH = COMPILE_TIME_NUM_CLIMATE_TYPES;
	static ClimateTypes first() { return static_cast<ClimateTypes>(0);}
	static ClimateTypes last() { return NUM_CLIMATE_TYPES - static_cast<ClimateTypes>(1);}
	static ClimateTypes numElements() { return last() - first() + static_cast<ClimateTypes>(1);}
	static ClimateTypes start() { return static_cast<ClimateTypes>(0);}
	static ClimateTypes end() { return NUM_CLIMATE_TYPES;}
	static ClimateTypes length() { return end() - start();}
	static bool isInRange(ClimateTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<ClimateTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(ClimateTypes eIndex) {}
	template<>	static bool _isInRange<0>(ClimateTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(ClimateTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(ClimateTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<ClimateTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	ClimateTypes get(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 0));
	}
	ClimateTypes get0(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 0));
	}
	ClimateTypes getClimate(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(ClimateTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, ClimateTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	ClimateTypes get1(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 1));
	}
	ClimateTypes getClimate(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(ClimateTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, ClimateTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	ClimateTypes get2(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 2));
	}
	ClimateTypes getClimate(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(ClimateTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, ClimateTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	ClimateTypes get3(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 3));
	}
	ClimateTypes getClimate(int iIndex) const
	{
		return static_cast<ClimateTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(ClimateTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline ContactTypes operator+(const ContactTypes& A, const ContactTypes& B)
{
	return static_cast<ContactTypes>((int)A + (int)B);
};
static inline ContactTypes operator-(const ContactTypes& A, const ContactTypes& B)
{
	return static_cast<ContactTypes>((int)A - (int)B);
};
static inline ContactTypes& operator++(ContactTypes& c)
{
	c = static_cast<ContactTypes>(c + 1);
	return c;
};
static inline ContactTypes operator++(ContactTypes& c, int)
{
	ContactTypes cache = c;
	c = static_cast<ContactTypes>(c + 1);
	return cache;
};
static inline ContactTypes& operator--(ContactTypes& c)
{
	c = static_cast<ContactTypes>(c - 1);
	return c;
};
static inline ContactTypes operator--(ContactTypes& c, int)
{
	ContactTypes cache = c;
	c = static_cast<ContactTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (ContactTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, ContactTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (ContactTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, ContactTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (ContactTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, ContactTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (ContactTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, ContactTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (ContactTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, ContactTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (ContactTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, ContactTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<ContactTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CONTACT;
	static const ContactTypes DEFAULT = static_cast<ContactTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CONTACT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CONTACT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const ContactTypes FIRST = static_cast<ContactTypes>(0);
	static const ContactTypes LAST = static_cast<ContactTypes>((int)NUM_CONTACT_TYPES - 1);
	static const ContactTypes NUM_ELEMENTS = static_cast<ContactTypes>((int)LAST - (int)FIRST + 1);
	static const ContactTypes LENGTH = COMPILE_TIME_NUM_CONTACT_TYPES;
	static ContactTypes first() { return static_cast<ContactTypes>(0);}
	static ContactTypes last() { return NUM_CONTACT_TYPES - static_cast<ContactTypes>(1);}
	static ContactTypes numElements() { return last() - first() + static_cast<ContactTypes>(1);}
	static ContactTypes start() { return static_cast<ContactTypes>(0);}
	static ContactTypes end() { return NUM_CONTACT_TYPES;}
	static ContactTypes length() { return end() - start();}
	static bool isInRange(ContactTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<ContactTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(ContactTypes eIndex) {}
	template<>	static bool _isInRange<0>(ContactTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(ContactTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(ContactTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<ContactTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	ContactTypes get(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 0));
	}
	ContactTypes get0(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 0));
	}
	ContactTypes getContact(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(ContactTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, ContactTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	ContactTypes get1(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 1));
	}
	ContactTypes getContact(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(ContactTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, ContactTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	ContactTypes get2(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 2));
	}
	ContactTypes getContact(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(ContactTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, ContactTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	ContactTypes get3(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 3));
	}
	ContactTypes getContact(int iIndex) const
	{
		return static_cast<ContactTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(ContactTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline CultureLevelTypes operator+(const CultureLevelTypes& A, const CultureLevelTypes& B)
{
	return static_cast<CultureLevelTypes>((int)A + (int)B);
};
static inline CultureLevelTypes operator-(const CultureLevelTypes& A, const CultureLevelTypes& B)
{
	return static_cast<CultureLevelTypes>((int)A - (int)B);
};
static inline CultureLevelTypes& operator++(CultureLevelTypes& c)
{
	c = static_cast<CultureLevelTypes>(c + 1);
	return c;
};
static inline CultureLevelTypes operator++(CultureLevelTypes& c, int)
{
	CultureLevelTypes cache = c;
	c = static_cast<CultureLevelTypes>(c + 1);
	return cache;
};
static inline CultureLevelTypes& operator--(CultureLevelTypes& c)
{
	c = static_cast<CultureLevelTypes>(c - 1);
	return c;
};
static inline CultureLevelTypes operator--(CultureLevelTypes& c, int)
{
	CultureLevelTypes cache = c;
	c = static_cast<CultureLevelTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (CultureLevelTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, CultureLevelTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (CultureLevelTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, CultureLevelTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (CultureLevelTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, CultureLevelTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (CultureLevelTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, CultureLevelTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (CultureLevelTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, CultureLevelTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (CultureLevelTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, CultureLevelTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<CultureLevelTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_CULTURE;
	static const CultureLevelTypes DEFAULT = static_cast<CultureLevelTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_CULTURELEVEL_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_CULTURELEVEL_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const CultureLevelTypes FIRST = static_cast<CultureLevelTypes>(0);
	static const CultureLevelTypes LAST = static_cast<CultureLevelTypes>((int)NUM_CULTURELEVEL_TYPES - 1);
	static const CultureLevelTypes NUM_ELEMENTS = static_cast<CultureLevelTypes>((int)LAST - (int)FIRST + 1);
	static const CultureLevelTypes LENGTH = COMPILE_TIME_NUM_CULTURELEVEL_TYPES;
	static CultureLevelTypes first() { return static_cast<CultureLevelTypes>(0);}
	static CultureLevelTypes last() { return NUM_CULTURELEVEL_TYPES - static_cast<CultureLevelTypes>(1);}
	static CultureLevelTypes numElements() { return last() - first() + static_cast<CultureLevelTypes>(1);}
	static CultureLevelTypes start() { return static_cast<CultureLevelTypes>(0);}
	static CultureLevelTypes end() { return NUM_CULTURELEVEL_TYPES;}
	static CultureLevelTypes length() { return end() - start();}
	static bool isInRange(CultureLevelTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<CultureLevelTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(CultureLevelTypes eIndex) {}
	template<>	static bool _isInRange<0>(CultureLevelTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(CultureLevelTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(CultureLevelTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<CultureLevelTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	CultureLevelTypes get(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 0));
	}
	CultureLevelTypes get0(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 0));
	}
	CultureLevelTypes getCulture(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(CultureLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, CultureLevelTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	CultureLevelTypes get1(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 1));
	}
	CultureLevelTypes getCulture(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(CultureLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, CultureLevelTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	CultureLevelTypes get2(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 2));
	}
	CultureLevelTypes getCulture(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(CultureLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, CultureLevelTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	CultureLevelTypes get3(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 3));
	}
	CultureLevelTypes getCulture(int iIndex) const
	{
		return static_cast<CultureLevelTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(CultureLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline DiplomacyTypes operator+(const DiplomacyTypes& A, const DiplomacyTypes& B)
{
	return static_cast<DiplomacyTypes>((int)A + (int)B);
};
static inline DiplomacyTypes operator-(const DiplomacyTypes& A, const DiplomacyTypes& B)
{
	return static_cast<DiplomacyTypes>((int)A - (int)B);
};
static inline DiplomacyTypes& operator++(DiplomacyTypes& c)
{
	c = static_cast<DiplomacyTypes>(c + 1);
	return c;
};
static inline DiplomacyTypes operator++(DiplomacyTypes& c, int)
{
	DiplomacyTypes cache = c;
	c = static_cast<DiplomacyTypes>(c + 1);
	return cache;
};
static inline DiplomacyTypes& operator--(DiplomacyTypes& c)
{
	c = static_cast<DiplomacyTypes>(c - 1);
	return c;
};
static inline DiplomacyTypes operator--(DiplomacyTypes& c, int)
{
	DiplomacyTypes cache = c;
	c = static_cast<DiplomacyTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (DiplomacyTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<DiplomacyTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, DiplomacyTypes b)
{
	const bool bTypeCheck = boost::is_same<T, DiplomacyTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (DiplomacyTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<DiplomacyTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, DiplomacyTypes b)
{
	const bool bTypeCheck = boost::is_same<T, DiplomacyTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (DiplomacyTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<DiplomacyTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, DiplomacyTypes b)
{
	const bool bTypeCheck = boost::is_same<T, DiplomacyTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (DiplomacyTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<DiplomacyTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, DiplomacyTypes b)
{
	const bool bTypeCheck = boost::is_same<T, DiplomacyTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (DiplomacyTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<DiplomacyTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, DiplomacyTypes b)
{
	const bool bTypeCheck = boost::is_same<T, DiplomacyTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (DiplomacyTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<DiplomacyTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, DiplomacyTypes b)
{
	const bool bTypeCheck = boost::is_same<T, DiplomacyTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <= (int)b;
};
template <> struct VARINFO<DiplomacyTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_DIPLOMACY;
	static const DiplomacyTypes DEFAULT = static_cast<DiplomacyTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_DIPLOMACY_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_DIPLOMACY_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const DiplomacyTypes FIRST = static_cast<DiplomacyTypes>(0);
	static const DiplomacyTypes LAST = static_cast<DiplomacyTypes>((int)NUM_DIPLOMACY_TYPES - 1);
	static const DiplomacyTypes NUM_ELEMENTS = static_cast<DiplomacyTypes>((int)LAST - (int)FIRST + 1);
	static const DiplomacyTypes LENGTH = COMPILE_TIME_NUM_DIPLOMACY_TYPES;
	static DiplomacyTypes first() { return static_cast<DiplomacyTypes>(0);}
	static DiplomacyTypes last() { return NUM_DIPLOMACY_TYPES - static_cast<DiplomacyTypes>(1);}
	static DiplomacyTypes numElements() { return last() - first() + static_cast<DiplomacyTypes>(1);}
	static DiplomacyTypes start() { return static_cast<DiplomacyTypes>(0);}
	static DiplomacyTypes end() { return NUM_DIPLOMACY_TYPES;}
	static DiplomacyTypes length() { return end() - start();}
	static bool isInRange(DiplomacyTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<DiplomacyTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(DiplomacyTypes eIndex) {}
	template<>	static bool _isInRange<0>(DiplomacyTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(DiplomacyTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(DiplomacyTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<DiplomacyTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	DiplomacyTypes get(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 0));
	}
	DiplomacyTypes get0(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 0));
	}
	DiplomacyTypes getDiplomacy(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(DiplomacyTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, DiplomacyTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	DiplomacyTypes get1(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 1));
	}
	DiplomacyTypes getDiplomacy(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(DiplomacyTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, DiplomacyTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	DiplomacyTypes get2(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 2));
	}
	DiplomacyTypes getDiplomacy(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(DiplomacyTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, DiplomacyTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	DiplomacyTypes get3(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 3));
	}
	DiplomacyTypes getDiplomacy(int iIndex) const
	{
		return static_cast<DiplomacyTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(DiplomacyTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline DomainTypes operator+(const DomainTypes& A, const DomainTypes& B)
{
	return static_cast<DomainTypes>((int)A + (int)B);
};
static inline DomainTypes operator-(const DomainTypes& A, const DomainTypes& B)
{
	return static_cast<DomainTypes>((int)A - (int)B);
};
static inline DomainTypes& operator++(DomainTypes& c)
{
	c = static_cast<DomainTypes>(c + 1);
	return c;
};
static inline DomainTypes operator++(DomainTypes& c, int)
{
	DomainTypes cache = c;
	c = static_cast<DomainTypes>(c + 1);
	return cache;
};
static inline DomainTypes& operator--(DomainTypes& c)
{
	c = static_cast<DomainTypes>(c - 1);
	return c;
};
static inline DomainTypes operator--(DomainTypes& c, int)
{
	DomainTypes cache = c;
	c = static_cast<DomainTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (DomainTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, DomainTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (DomainTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, DomainTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (DomainTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, DomainTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (DomainTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, DomainTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (DomainTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, DomainTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (DomainTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, DomainTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<DomainTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_DOMAIN;
	static const DomainTypes DEFAULT = static_cast<DomainTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_DOMAIN_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_DOMAIN_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const DomainTypes FIRST = static_cast<DomainTypes>(0);
	static const DomainTypes LAST = static_cast<DomainTypes>((int)NUM_DOMAIN_TYPES - 1);
	static const DomainTypes NUM_ELEMENTS = static_cast<DomainTypes>((int)LAST - (int)FIRST + 1);
	static const DomainTypes LENGTH = COMPILE_TIME_NUM_DOMAIN_TYPES;
	static DomainTypes first() { return static_cast<DomainTypes>(0);}
	static DomainTypes last() { return NUM_DOMAIN_TYPES - static_cast<DomainTypes>(1);}
	static DomainTypes numElements() { return last() - first() + static_cast<DomainTypes>(1);}
	static DomainTypes start() { return static_cast<DomainTypes>(0);}
	static DomainTypes end() { return NUM_DOMAIN_TYPES;}
	static DomainTypes length() { return end() - start();}
	static bool isInRange(DomainTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<DomainTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(DomainTypes eIndex) {}
	template<>	static bool _isInRange<0>(DomainTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(DomainTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(DomainTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<DomainTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	DomainTypes get(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 0));
	}
	DomainTypes get0(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 0));
	}
	DomainTypes getDomain(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(DomainTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, DomainTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	DomainTypes get1(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 1));
	}
	DomainTypes getDomain(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(DomainTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, DomainTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	DomainTypes get2(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 2));
	}
	DomainTypes getDomain(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(DomainTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, DomainTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	DomainTypes get3(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 3));
	}
	DomainTypes getDomain(int iIndex) const
	{
		return static_cast<DomainTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(DomainTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline EmotionTypes operator+(const EmotionTypes& A, const EmotionTypes& B)
{
	return static_cast<EmotionTypes>((int)A + (int)B);
};
static inline EmotionTypes operator-(const EmotionTypes& A, const EmotionTypes& B)
{
	return static_cast<EmotionTypes>((int)A - (int)B);
};
static inline EmotionTypes& operator++(EmotionTypes& c)
{
	c = static_cast<EmotionTypes>(c + 1);
	return c;
};
static inline EmotionTypes operator++(EmotionTypes& c, int)
{
	EmotionTypes cache = c;
	c = static_cast<EmotionTypes>(c + 1);
	return cache;
};
static inline EmotionTypes& operator--(EmotionTypes& c)
{
	c = static_cast<EmotionTypes>(c - 1);
	return c;
};
static inline EmotionTypes operator--(EmotionTypes& c, int)
{
	EmotionTypes cache = c;
	c = static_cast<EmotionTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (EmotionTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, EmotionTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (EmotionTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, EmotionTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (EmotionTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, EmotionTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (EmotionTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, EmotionTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (EmotionTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, EmotionTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (EmotionTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, EmotionTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<EmotionTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_EMOTION;
	static const EmotionTypes DEFAULT = static_cast<EmotionTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_EMOTION_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_EMOTION_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const EmotionTypes FIRST = static_cast<EmotionTypes>(0);
	static const EmotionTypes LAST = static_cast<EmotionTypes>((int)NUM_EMOTION_TYPES - 1);
	static const EmotionTypes NUM_ELEMENTS = static_cast<EmotionTypes>((int)LAST - (int)FIRST + 1);
	static const EmotionTypes LENGTH = COMPILE_TIME_NUM_EMOTION_TYPES;
	static EmotionTypes first() { return static_cast<EmotionTypes>(0);}
	static EmotionTypes last() { return NUM_EMOTION_TYPES - static_cast<EmotionTypes>(1);}
	static EmotionTypes numElements() { return last() - first() + static_cast<EmotionTypes>(1);}
	static EmotionTypes start() { return static_cast<EmotionTypes>(0);}
	static EmotionTypes end() { return NUM_EMOTION_TYPES;}
	static EmotionTypes length() { return end() - start();}
	static bool isInRange(EmotionTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<EmotionTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(EmotionTypes eIndex) {}
	template<>	static bool _isInRange<0>(EmotionTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(EmotionTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(EmotionTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<EmotionTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	EmotionTypes get(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 0));
	}
	EmotionTypes get0(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 0));
	}
	EmotionTypes getEmotion(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(EmotionTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, EmotionTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	EmotionTypes get1(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 1));
	}
	EmotionTypes getEmotion(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(EmotionTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, EmotionTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	EmotionTypes get2(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 2));
	}
	EmotionTypes getEmotion(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(EmotionTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, EmotionTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	EmotionTypes get3(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 3));
	}
	EmotionTypes getEmotion(int iIndex) const
	{
		return static_cast<EmotionTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(EmotionTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline EmphasizeTypes operator+(const EmphasizeTypes& A, const EmphasizeTypes& B)
{
	return static_cast<EmphasizeTypes>((int)A + (int)B);
};
static inline EmphasizeTypes operator-(const EmphasizeTypes& A, const EmphasizeTypes& B)
{
	return static_cast<EmphasizeTypes>((int)A - (int)B);
};
static inline EmphasizeTypes& operator++(EmphasizeTypes& c)
{
	c = static_cast<EmphasizeTypes>(c + 1);
	return c;
};
static inline EmphasizeTypes operator++(EmphasizeTypes& c, int)
{
	EmphasizeTypes cache = c;
	c = static_cast<EmphasizeTypes>(c + 1);
	return cache;
};
static inline EmphasizeTypes& operator--(EmphasizeTypes& c)
{
	c = static_cast<EmphasizeTypes>(c - 1);
	return c;
};
static inline EmphasizeTypes operator--(EmphasizeTypes& c, int)
{
	EmphasizeTypes cache = c;
	c = static_cast<EmphasizeTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (EmphasizeTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, EmphasizeTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (EmphasizeTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, EmphasizeTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (EmphasizeTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, EmphasizeTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (EmphasizeTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, EmphasizeTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (EmphasizeTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, EmphasizeTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (EmphasizeTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, EmphasizeTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<EmphasizeTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_EMPHASIZE;
	static const EmphasizeTypes DEFAULT = static_cast<EmphasizeTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_EMPHASIZE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_EMPHASIZE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const EmphasizeTypes FIRST = static_cast<EmphasizeTypes>(0);
	static const EmphasizeTypes LAST = static_cast<EmphasizeTypes>((int)NUM_EMPHASIZE_TYPES - 1);
	static const EmphasizeTypes NUM_ELEMENTS = static_cast<EmphasizeTypes>((int)LAST - (int)FIRST + 1);
	static const EmphasizeTypes LENGTH = COMPILE_TIME_NUM_EMPHASIZE_TYPES;
	static EmphasizeTypes first() { return static_cast<EmphasizeTypes>(0);}
	static EmphasizeTypes last() { return NUM_EMPHASIZE_TYPES - static_cast<EmphasizeTypes>(1);}
	static EmphasizeTypes numElements() { return last() - first() + static_cast<EmphasizeTypes>(1);}
	static EmphasizeTypes start() { return static_cast<EmphasizeTypes>(0);}
	static EmphasizeTypes end() { return NUM_EMPHASIZE_TYPES;}
	static EmphasizeTypes length() { return end() - start();}
	static bool isInRange(EmphasizeTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<EmphasizeTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(EmphasizeTypes eIndex) {}
	template<>	static bool _isInRange<0>(EmphasizeTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(EmphasizeTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(EmphasizeTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<EmphasizeTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	EmphasizeTypes get(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 0));
	}
	EmphasizeTypes get0(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 0));
	}
	EmphasizeTypes getEmphasize(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(EmphasizeTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, EmphasizeTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	EmphasizeTypes get1(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 1));
	}
	EmphasizeTypes getEmphasize(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(EmphasizeTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, EmphasizeTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	EmphasizeTypes get2(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 2));
	}
	EmphasizeTypes getEmphasize(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(EmphasizeTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, EmphasizeTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	EmphasizeTypes get3(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 3));
	}
	EmphasizeTypes getEmphasize(int iIndex) const
	{
		return static_cast<EmphasizeTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(EmphasizeTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline EraTypes operator+(const EraTypes& A, const EraTypes& B)
{
	return static_cast<EraTypes>((int)A + (int)B);
};
static inline EraTypes operator-(const EraTypes& A, const EraTypes& B)
{
	return static_cast<EraTypes>((int)A - (int)B);
};
static inline EraTypes& operator++(EraTypes& c)
{
	c = static_cast<EraTypes>(c + 1);
	return c;
};
static inline EraTypes operator++(EraTypes& c, int)
{
	EraTypes cache = c;
	c = static_cast<EraTypes>(c + 1);
	return cache;
};
static inline EraTypes& operator--(EraTypes& c)
{
	c = static_cast<EraTypes>(c - 1);
	return c;
};
static inline EraTypes operator--(EraTypes& c, int)
{
	EraTypes cache = c;
	c = static_cast<EraTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (EraTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, EraTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (EraTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, EraTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (EraTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, EraTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (EraTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, EraTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (EraTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, EraTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (EraTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, EraTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<EraTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_ERA;
	static const EraTypes DEFAULT = static_cast<EraTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_ERA_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_ERA_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const EraTypes FIRST = static_cast<EraTypes>(0);
	static const EraTypes LAST = static_cast<EraTypes>((int)NUM_ERA_TYPES - 1);
	static const EraTypes NUM_ELEMENTS = static_cast<EraTypes>((int)LAST - (int)FIRST + 1);
	static const EraTypes LENGTH = COMPILE_TIME_NUM_ERA_TYPES;
	static EraTypes first() { return static_cast<EraTypes>(0);}
	static EraTypes last() { return NUM_ERA_TYPES - static_cast<EraTypes>(1);}
	static EraTypes numElements() { return last() - first() + static_cast<EraTypes>(1);}
	static EraTypes start() { return static_cast<EraTypes>(0);}
	static EraTypes end() { return NUM_ERA_TYPES;}
	static EraTypes length() { return end() - start();}
	static bool isInRange(EraTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<EraTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(EraTypes eIndex) {}
	template<>	static bool _isInRange<0>(EraTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(EraTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(EraTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<EraTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	EraTypes get(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 0));
	}
	EraTypes get0(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 0));
	}
	EraTypes getEra(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(EraTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, EraTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	EraTypes get1(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 1));
	}
	EraTypes getEra(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(EraTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, EraTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	EraTypes get2(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 2));
	}
	EraTypes getEra(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(EraTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, EraTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	EraTypes get3(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 3));
	}
	EraTypes getEra(int iIndex) const
	{
		return static_cast<EraTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(EraTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline EuropeTypes operator+(const EuropeTypes& A, const EuropeTypes& B)
{
	return static_cast<EuropeTypes>((int)A + (int)B);
};
static inline EuropeTypes operator-(const EuropeTypes& A, const EuropeTypes& B)
{
	return static_cast<EuropeTypes>((int)A - (int)B);
};
static inline EuropeTypes& operator++(EuropeTypes& c)
{
	c = static_cast<EuropeTypes>(c + 1);
	return c;
};
static inline EuropeTypes operator++(EuropeTypes& c, int)
{
	EuropeTypes cache = c;
	c = static_cast<EuropeTypes>(c + 1);
	return cache;
};
static inline EuropeTypes& operator--(EuropeTypes& c)
{
	c = static_cast<EuropeTypes>(c - 1);
	return c;
};
static inline EuropeTypes operator--(EuropeTypes& c, int)
{
	EuropeTypes cache = c;
	c = static_cast<EuropeTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (EuropeTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, EuropeTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (EuropeTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, EuropeTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (EuropeTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, EuropeTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (EuropeTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, EuropeTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (EuropeTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, EuropeTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (EuropeTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, EuropeTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<EuropeTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_EUROPE;
	static const EuropeTypes DEFAULT = static_cast<EuropeTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_EUROPE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_EUROPE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const EuropeTypes FIRST = static_cast<EuropeTypes>(0);
	static const EuropeTypes LAST = static_cast<EuropeTypes>((int)NUM_EUROPE_TYPES - 1);
	static const EuropeTypes NUM_ELEMENTS = static_cast<EuropeTypes>((int)LAST - (int)FIRST + 1);
	static const EuropeTypes LENGTH = COMPILE_TIME_NUM_EUROPE_TYPES;
	static EuropeTypes first() { return static_cast<EuropeTypes>(0);}
	static EuropeTypes last() { return NUM_EUROPE_TYPES - static_cast<EuropeTypes>(1);}
	static EuropeTypes numElements() { return last() - first() + static_cast<EuropeTypes>(1);}
	static EuropeTypes start() { return static_cast<EuropeTypes>(0);}
	static EuropeTypes end() { return NUM_EUROPE_TYPES;}
	static EuropeTypes length() { return end() - start();}
	static bool isInRange(EuropeTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<EuropeTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(EuropeTypes eIndex) {}
	template<>	static bool _isInRange<0>(EuropeTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(EuropeTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(EuropeTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<EuropeTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	EuropeTypes get(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 0));
	}
	EuropeTypes get0(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 0));
	}
	EuropeTypes getEurope(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(EuropeTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, EuropeTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	EuropeTypes get1(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 1));
	}
	EuropeTypes getEurope(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(EuropeTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, EuropeTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	EuropeTypes get2(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 2));
	}
	EuropeTypes getEurope(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(EuropeTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, EuropeTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	EuropeTypes get3(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 3));
	}
	EuropeTypes getEurope(int iIndex) const
	{
		return static_cast<EuropeTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(EuropeTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline EventTypes operator+(const EventTypes& A, const EventTypes& B)
{
	return static_cast<EventTypes>((int)A + (int)B);
};
static inline EventTypes operator-(const EventTypes& A, const EventTypes& B)
{
	return static_cast<EventTypes>((int)A - (int)B);
};
static inline EventTypes& operator++(EventTypes& c)
{
	c = static_cast<EventTypes>(c + 1);
	return c;
};
static inline EventTypes operator++(EventTypes& c, int)
{
	EventTypes cache = c;
	c = static_cast<EventTypes>(c + 1);
	return cache;
};
static inline EventTypes& operator--(EventTypes& c)
{
	c = static_cast<EventTypes>(c - 1);
	return c;
};
static inline EventTypes operator--(EventTypes& c, int)
{
	EventTypes cache = c;
	c = static_cast<EventTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (EventTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, EventTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (EventTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, EventTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (EventTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, EventTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (EventTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, EventTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (EventTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, EventTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (EventTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, EventTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<EventTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_EVENT;
	static const EventTypes DEFAULT = static_cast<EventTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_EVENT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_EVENT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const EventTypes FIRST = static_cast<EventTypes>(0);
	static const EventTypes LAST = static_cast<EventTypes>((int)NUM_EVENT_TYPES - 1);
	static const EventTypes NUM_ELEMENTS = static_cast<EventTypes>((int)LAST - (int)FIRST + 1);
	static const EventTypes LENGTH = COMPILE_TIME_NUM_EVENT_TYPES;
	static EventTypes first() { return static_cast<EventTypes>(0);}
	static EventTypes last() { return NUM_EVENT_TYPES - static_cast<EventTypes>(1);}
	static EventTypes numElements() { return last() - first() + static_cast<EventTypes>(1);}
	static EventTypes start() { return static_cast<EventTypes>(0);}
	static EventTypes end() { return NUM_EVENT_TYPES;}
	static EventTypes length() { return end() - start();}
	static bool isInRange(EventTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<EventTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(EventTypes eIndex) {}
	template<>	static bool _isInRange<0>(EventTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(EventTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(EventTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<EventTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	EventTypes get(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 0));
	}
	EventTypes get0(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 0));
	}
	EventTypes getEvent(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(EventTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, EventTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	EventTypes get1(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 1));
	}
	EventTypes getEvent(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(EventTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, EventTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	EventTypes get2(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 2));
	}
	EventTypes getEvent(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(EventTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, EventTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	EventTypes get3(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 3));
	}
	EventTypes getEvent(int iIndex) const
	{
		return static_cast<EventTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(EventTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline EventTriggerTypes operator+(const EventTriggerTypes& A, const EventTriggerTypes& B)
{
	return static_cast<EventTriggerTypes>((int)A + (int)B);
};
static inline EventTriggerTypes operator-(const EventTriggerTypes& A, const EventTriggerTypes& B)
{
	return static_cast<EventTriggerTypes>((int)A - (int)B);
};
static inline EventTriggerTypes& operator++(EventTriggerTypes& c)
{
	c = static_cast<EventTriggerTypes>(c + 1);
	return c;
};
static inline EventTriggerTypes operator++(EventTriggerTypes& c, int)
{
	EventTriggerTypes cache = c;
	c = static_cast<EventTriggerTypes>(c + 1);
	return cache;
};
static inline EventTriggerTypes& operator--(EventTriggerTypes& c)
{
	c = static_cast<EventTriggerTypes>(c - 1);
	return c;
};
static inline EventTriggerTypes operator--(EventTriggerTypes& c, int)
{
	EventTriggerTypes cache = c;
	c = static_cast<EventTriggerTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (EventTriggerTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, EventTriggerTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (EventTriggerTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, EventTriggerTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (EventTriggerTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, EventTriggerTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (EventTriggerTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, EventTriggerTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (EventTriggerTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, EventTriggerTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (EventTriggerTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, EventTriggerTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<EventTriggerTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_EVENT_TRIGGER;
	static const EventTriggerTypes DEFAULT = static_cast<EventTriggerTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_EVENTTRIGGER_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_EVENTTRIGGER_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const EventTriggerTypes FIRST = static_cast<EventTriggerTypes>(0);
	static const EventTriggerTypes LAST = static_cast<EventTriggerTypes>((int)NUM_EVENTTRIGGER_TYPES - 1);
	static const EventTriggerTypes NUM_ELEMENTS = static_cast<EventTriggerTypes>((int)LAST - (int)FIRST + 1);
	static const EventTriggerTypes LENGTH = COMPILE_TIME_NUM_EVENTTRIGGER_TYPES;
	static EventTriggerTypes first() { return static_cast<EventTriggerTypes>(0);}
	static EventTriggerTypes last() { return NUM_EVENTTRIGGER_TYPES - static_cast<EventTriggerTypes>(1);}
	static EventTriggerTypes numElements() { return last() - first() + static_cast<EventTriggerTypes>(1);}
	static EventTriggerTypes start() { return static_cast<EventTriggerTypes>(0);}
	static EventTriggerTypes end() { return NUM_EVENTTRIGGER_TYPES;}
	static EventTriggerTypes length() { return end() - start();}
	static bool isInRange(EventTriggerTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<EventTriggerTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(EventTriggerTypes eIndex) {}
	template<>	static bool _isInRange<0>(EventTriggerTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(EventTriggerTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(EventTriggerTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<EventTriggerTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	EventTriggerTypes get(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 0));
	}
	EventTriggerTypes get0(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 0));
	}
	EventTriggerTypes getEventTrigger(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(EventTriggerTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, EventTriggerTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	EventTriggerTypes get1(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 1));
	}
	EventTriggerTypes getEventTrigger(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(EventTriggerTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, EventTriggerTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	EventTriggerTypes get2(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 2));
	}
	EventTriggerTypes getEventTrigger(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(EventTriggerTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, EventTriggerTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	EventTriggerTypes get3(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 3));
	}
	EventTriggerTypes getEventTrigger(int iIndex) const
	{
		return static_cast<EventTriggerTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(EventTriggerTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline FatherTypes operator+(const FatherTypes& A, const FatherTypes& B)
{
	return static_cast<FatherTypes>((int)A + (int)B);
};
static inline FatherTypes operator-(const FatherTypes& A, const FatherTypes& B)
{
	return static_cast<FatherTypes>((int)A - (int)B);
};
static inline FatherTypes& operator++(FatherTypes& c)
{
	c = static_cast<FatherTypes>(c + 1);
	return c;
};
static inline FatherTypes operator++(FatherTypes& c, int)
{
	FatherTypes cache = c;
	c = static_cast<FatherTypes>(c + 1);
	return cache;
};
static inline FatherTypes& operator--(FatherTypes& c)
{
	c = static_cast<FatherTypes>(c - 1);
	return c;
};
static inline FatherTypes operator--(FatherTypes& c, int)
{
	FatherTypes cache = c;
	c = static_cast<FatherTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (FatherTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, FatherTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (FatherTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, FatherTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (FatherTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, FatherTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (FatherTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, FatherTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (FatherTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, FatherTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (FatherTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, FatherTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<FatherTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_FATHER;
	static const FatherTypes DEFAULT = static_cast<FatherTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_FATHER_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_FATHER_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const FatherTypes FIRST = static_cast<FatherTypes>(0);
	static const FatherTypes LAST = static_cast<FatherTypes>((int)NUM_FATHER_TYPES - 1);
	static const FatherTypes NUM_ELEMENTS = static_cast<FatherTypes>((int)LAST - (int)FIRST + 1);
	static const FatherTypes LENGTH = COMPILE_TIME_NUM_FATHER_TYPES;
	static FatherTypes first() { return static_cast<FatherTypes>(0);}
	static FatherTypes last() { return NUM_FATHER_TYPES - static_cast<FatherTypes>(1);}
	static FatherTypes numElements() { return last() - first() + static_cast<FatherTypes>(1);}
	static FatherTypes start() { return static_cast<FatherTypes>(0);}
	static FatherTypes end() { return NUM_FATHER_TYPES;}
	static FatherTypes length() { return end() - start();}
	static bool isInRange(FatherTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<FatherTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(FatherTypes eIndex) {}
	template<>	static bool _isInRange<0>(FatherTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(FatherTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(FatherTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<FatherTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	FatherTypes get(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 0));
	}
	FatherTypes get0(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 0));
	}
	FatherTypes getFather(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(FatherTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, FatherTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	FatherTypes get1(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 1));
	}
	FatherTypes getFather(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(FatherTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, FatherTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	FatherTypes get2(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 2));
	}
	FatherTypes getFather(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(FatherTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, FatherTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	FatherTypes get3(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 3));
	}
	FatherTypes getFather(int iIndex) const
	{
		return static_cast<FatherTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(FatherTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline FatherPointTypes operator+(const FatherPointTypes& A, const FatherPointTypes& B)
{
	return static_cast<FatherPointTypes>((int)A + (int)B);
};
static inline FatherPointTypes operator-(const FatherPointTypes& A, const FatherPointTypes& B)
{
	return static_cast<FatherPointTypes>((int)A - (int)B);
};
static inline FatherPointTypes& operator++(FatherPointTypes& c)
{
	c = static_cast<FatherPointTypes>(c + 1);
	return c;
};
static inline FatherPointTypes operator++(FatherPointTypes& c, int)
{
	FatherPointTypes cache = c;
	c = static_cast<FatherPointTypes>(c + 1);
	return cache;
};
static inline FatherPointTypes& operator--(FatherPointTypes& c)
{
	c = static_cast<FatherPointTypes>(c - 1);
	return c;
};
static inline FatherPointTypes operator--(FatherPointTypes& c, int)
{
	FatherPointTypes cache = c;
	c = static_cast<FatherPointTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (FatherPointTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, FatherPointTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (FatherPointTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, FatherPointTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (FatherPointTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, FatherPointTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (FatherPointTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, FatherPointTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (FatherPointTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, FatherPointTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (FatherPointTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, FatherPointTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<FatherPointTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_FATHER_POINT;
	static const FatherPointTypes DEFAULT = static_cast<FatherPointTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_FATHER_POINT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_FATHER_POINT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const FatherPointTypes FIRST = static_cast<FatherPointTypes>(0);
	static const FatherPointTypes LAST = static_cast<FatherPointTypes>((int)NUM_FATHER_POINT_TYPES - 1);
	static const FatherPointTypes NUM_ELEMENTS = static_cast<FatherPointTypes>((int)LAST - (int)FIRST + 1);
	static const FatherPointTypes LENGTH = COMPILE_TIME_NUM_FATHER_POINT_TYPES;
	static FatherPointTypes first() { return static_cast<FatherPointTypes>(0);}
	static FatherPointTypes last() { return NUM_FATHER_POINT_TYPES - static_cast<FatherPointTypes>(1);}
	static FatherPointTypes numElements() { return last() - first() + static_cast<FatherPointTypes>(1);}
	static FatherPointTypes start() { return static_cast<FatherPointTypes>(0);}
	static FatherPointTypes end() { return NUM_FATHER_POINT_TYPES;}
	static FatherPointTypes length() { return end() - start();}
	static bool isInRange(FatherPointTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<FatherPointTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(FatherPointTypes eIndex) {}
	template<>	static bool _isInRange<0>(FatherPointTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(FatherPointTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(FatherPointTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<FatherPointTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	FatherPointTypes get(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 0));
	}
	FatherPointTypes get0(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 0));
	}
	FatherPointTypes getFatherPoint(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(FatherPointTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, FatherPointTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	FatherPointTypes get1(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 1));
	}
	FatherPointTypes getFatherPoint(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(FatherPointTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, FatherPointTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	FatherPointTypes get2(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 2));
	}
	FatherPointTypes getFatherPoint(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(FatherPointTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, FatherPointTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	FatherPointTypes get3(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 3));
	}
	FatherPointTypes getFatherPoint(int iIndex) const
	{
		return static_cast<FatherPointTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(FatherPointTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline FeatTypes operator+(const FeatTypes& A, const FeatTypes& B)
{
	return static_cast<FeatTypes>((int)A + (int)B);
};
static inline FeatTypes operator-(const FeatTypes& A, const FeatTypes& B)
{
	return static_cast<FeatTypes>((int)A - (int)B);
};
static inline FeatTypes& operator++(FeatTypes& c)
{
	c = static_cast<FeatTypes>(c + 1);
	return c;
};
static inline FeatTypes operator++(FeatTypes& c, int)
{
	FeatTypes cache = c;
	c = static_cast<FeatTypes>(c + 1);
	return cache;
};
static inline FeatTypes& operator--(FeatTypes& c)
{
	c = static_cast<FeatTypes>(c - 1);
	return c;
};
static inline FeatTypes operator--(FeatTypes& c, int)
{
	FeatTypes cache = c;
	c = static_cast<FeatTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (FeatTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, FeatTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (FeatTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, FeatTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (FeatTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, FeatTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (FeatTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, FeatTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (FeatTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, FeatTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (FeatTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, FeatTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<FeatTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_FEAT;
	static const FeatTypes DEFAULT = static_cast<FeatTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_FEAT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_FEAT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const FeatTypes FIRST = static_cast<FeatTypes>(0);
	static const FeatTypes LAST = static_cast<FeatTypes>((int)NUM_FEAT_TYPES - 1);
	static const FeatTypes NUM_ELEMENTS = static_cast<FeatTypes>((int)LAST - (int)FIRST + 1);
	static const FeatTypes LENGTH = COMPILE_TIME_NUM_FEAT_TYPES;
	static FeatTypes first() { return static_cast<FeatTypes>(0);}
	static FeatTypes last() { return NUM_FEAT_TYPES - static_cast<FeatTypes>(1);}
	static FeatTypes numElements() { return last() - first() + static_cast<FeatTypes>(1);}
	static FeatTypes start() { return static_cast<FeatTypes>(0);}
	static FeatTypes end() { return NUM_FEAT_TYPES;}
	static FeatTypes length() { return end() - start();}
	static bool isInRange(FeatTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<FeatTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(FeatTypes eIndex) {}
	template<>	static bool _isInRange<0>(FeatTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(FeatTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(FeatTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<FeatTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	FeatTypes get(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 0));
	}
	FeatTypes get0(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 0));
	}
	FeatTypes getFeat(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(FeatTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, FeatTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	FeatTypes get1(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 1));
	}
	FeatTypes getFeat(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(FeatTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, FeatTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	FeatTypes get2(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 2));
	}
	FeatTypes getFeat(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(FeatTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, FeatTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	FeatTypes get3(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 3));
	}
	FeatTypes getFeat(int iIndex) const
	{
		return static_cast<FeatTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(FeatTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline FeatureTypes operator+(const FeatureTypes& A, const FeatureTypes& B)
{
	return static_cast<FeatureTypes>((int)A + (int)B);
};
static inline FeatureTypes operator-(const FeatureTypes& A, const FeatureTypes& B)
{
	return static_cast<FeatureTypes>((int)A - (int)B);
};
static inline FeatureTypes& operator++(FeatureTypes& c)
{
	c = static_cast<FeatureTypes>(c + 1);
	return c;
};
static inline FeatureTypes operator++(FeatureTypes& c, int)
{
	FeatureTypes cache = c;
	c = static_cast<FeatureTypes>(c + 1);
	return cache;
};
static inline FeatureTypes& operator--(FeatureTypes& c)
{
	c = static_cast<FeatureTypes>(c - 1);
	return c;
};
static inline FeatureTypes operator--(FeatureTypes& c, int)
{
	FeatureTypes cache = c;
	c = static_cast<FeatureTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (FeatureTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, FeatureTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (FeatureTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, FeatureTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (FeatureTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, FeatureTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (FeatureTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, FeatureTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (FeatureTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, FeatureTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (FeatureTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, FeatureTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<FeatureTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_FEATURE;
	static const FeatureTypes DEFAULT = static_cast<FeatureTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_FEATURE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_FEATURE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const FeatureTypes FIRST = static_cast<FeatureTypes>(0);
	static const FeatureTypes LAST = static_cast<FeatureTypes>((int)NUM_FEATURE_TYPES - 1);
	static const FeatureTypes NUM_ELEMENTS = static_cast<FeatureTypes>((int)LAST - (int)FIRST + 1);
	static const FeatureTypes LENGTH = COMPILE_TIME_NUM_FEATURE_TYPES;
	static FeatureTypes first() { return static_cast<FeatureTypes>(0);}
	static FeatureTypes last() { return NUM_FEATURE_TYPES - static_cast<FeatureTypes>(1);}
	static FeatureTypes numElements() { return last() - first() + static_cast<FeatureTypes>(1);}
	static FeatureTypes start() { return static_cast<FeatureTypes>(0);}
	static FeatureTypes end() { return NUM_FEATURE_TYPES;}
	static FeatureTypes length() { return end() - start();}
	static bool isInRange(FeatureTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<FeatureTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(FeatureTypes eIndex) {}
	template<>	static bool _isInRange<0>(FeatureTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(FeatureTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(FeatureTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<FeatureTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	FeatureTypes get(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 0));
	}
	FeatureTypes get0(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 0));
	}
	FeatureTypes getFeature(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(FeatureTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, FeatureTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	FeatureTypes get1(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 1));
	}
	FeatureTypes getFeature(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(FeatureTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, FeatureTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	FeatureTypes get2(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 2));
	}
	FeatureTypes getFeature(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(FeatureTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, FeatureTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	FeatureTypes get3(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 3));
	}
	FeatureTypes getFeature(int iIndex) const
	{
		return static_cast<FeatureTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(FeatureTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline GameOptionTypes operator+(const GameOptionTypes& A, const GameOptionTypes& B)
{
	return static_cast<GameOptionTypes>((int)A + (int)B);
};
static inline GameOptionTypes operator-(const GameOptionTypes& A, const GameOptionTypes& B)
{
	return static_cast<GameOptionTypes>((int)A - (int)B);
};
static inline GameOptionTypes& operator++(GameOptionTypes& c)
{
	c = static_cast<GameOptionTypes>(c + 1);
	return c;
};
static inline GameOptionTypes operator++(GameOptionTypes& c, int)
{
	GameOptionTypes cache = c;
	c = static_cast<GameOptionTypes>(c + 1);
	return cache;
};
static inline GameOptionTypes& operator--(GameOptionTypes& c)
{
	c = static_cast<GameOptionTypes>(c - 1);
	return c;
};
static inline GameOptionTypes operator--(GameOptionTypes& c, int)
{
	GameOptionTypes cache = c;
	c = static_cast<GameOptionTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (GameOptionTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, GameOptionTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (GameOptionTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, GameOptionTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (GameOptionTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, GameOptionTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (GameOptionTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, GameOptionTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (GameOptionTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, GameOptionTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (GameOptionTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, GameOptionTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<GameOptionTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_GAME_OPTION;
	static const GameOptionTypes DEFAULT = static_cast<GameOptionTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_GAMEOPTION_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_GAMEOPTION_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const GameOptionTypes FIRST = static_cast<GameOptionTypes>(0);
	static const GameOptionTypes LAST = static_cast<GameOptionTypes>((int)NUM_GAMEOPTION_TYPES - 1);
	static const GameOptionTypes NUM_ELEMENTS = static_cast<GameOptionTypes>((int)LAST - (int)FIRST + 1);
	static const GameOptionTypes LENGTH = COMPILE_TIME_NUM_GAMEOPTION_TYPES;
	static GameOptionTypes first() { return static_cast<GameOptionTypes>(0);}
	static GameOptionTypes last() { return NUM_GAMEOPTION_TYPES - static_cast<GameOptionTypes>(1);}
	static GameOptionTypes numElements() { return last() - first() + static_cast<GameOptionTypes>(1);}
	static GameOptionTypes start() { return static_cast<GameOptionTypes>(0);}
	static GameOptionTypes end() { return NUM_GAMEOPTION_TYPES;}
	static GameOptionTypes length() { return end() - start();}
	static bool isInRange(GameOptionTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<GameOptionTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(GameOptionTypes eIndex) {}
	template<>	static bool _isInRange<0>(GameOptionTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(GameOptionTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(GameOptionTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<GameOptionTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	GameOptionTypes get(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 0));
	}
	GameOptionTypes get0(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 0));
	}
	GameOptionTypes getGameOption(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(GameOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, GameOptionTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	GameOptionTypes get1(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 1));
	}
	GameOptionTypes getGameOption(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(GameOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, GameOptionTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	GameOptionTypes get2(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 2));
	}
	GameOptionTypes getGameOption(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(GameOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, GameOptionTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	GameOptionTypes get3(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 3));
	}
	GameOptionTypes getGameOption(int iIndex) const
	{
		return static_cast<GameOptionTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(GameOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline GameSpeedTypes operator+(const GameSpeedTypes& A, const GameSpeedTypes& B)
{
	return static_cast<GameSpeedTypes>((int)A + (int)B);
};
static inline GameSpeedTypes operator-(const GameSpeedTypes& A, const GameSpeedTypes& B)
{
	return static_cast<GameSpeedTypes>((int)A - (int)B);
};
static inline GameSpeedTypes& operator++(GameSpeedTypes& c)
{
	c = static_cast<GameSpeedTypes>(c + 1);
	return c;
};
static inline GameSpeedTypes operator++(GameSpeedTypes& c, int)
{
	GameSpeedTypes cache = c;
	c = static_cast<GameSpeedTypes>(c + 1);
	return cache;
};
static inline GameSpeedTypes& operator--(GameSpeedTypes& c)
{
	c = static_cast<GameSpeedTypes>(c - 1);
	return c;
};
static inline GameSpeedTypes operator--(GameSpeedTypes& c, int)
{
	GameSpeedTypes cache = c;
	c = static_cast<GameSpeedTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (GameSpeedTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, GameSpeedTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (GameSpeedTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, GameSpeedTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (GameSpeedTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, GameSpeedTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (GameSpeedTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, GameSpeedTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (GameSpeedTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, GameSpeedTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (GameSpeedTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, GameSpeedTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<GameSpeedTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_GAME_SPEED;
	static const GameSpeedTypes DEFAULT = static_cast<GameSpeedTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_GAMESPEED_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_GAMESPEED_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const GameSpeedTypes FIRST = static_cast<GameSpeedTypes>(0);
	static const GameSpeedTypes LAST = static_cast<GameSpeedTypes>((int)NUM_GAMESPEED_TYPES - 1);
	static const GameSpeedTypes NUM_ELEMENTS = static_cast<GameSpeedTypes>((int)LAST - (int)FIRST + 1);
	static const GameSpeedTypes LENGTH = COMPILE_TIME_NUM_GAMESPEED_TYPES;
	static GameSpeedTypes first() { return static_cast<GameSpeedTypes>(0);}
	static GameSpeedTypes last() { return NUM_GAMESPEED_TYPES - static_cast<GameSpeedTypes>(1);}
	static GameSpeedTypes numElements() { return last() - first() + static_cast<GameSpeedTypes>(1);}
	static GameSpeedTypes start() { return static_cast<GameSpeedTypes>(0);}
	static GameSpeedTypes end() { return NUM_GAMESPEED_TYPES;}
	static GameSpeedTypes length() { return end() - start();}
	static bool isInRange(GameSpeedTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<GameSpeedTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(GameSpeedTypes eIndex) {}
	template<>	static bool _isInRange<0>(GameSpeedTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(GameSpeedTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(GameSpeedTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<GameSpeedTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	GameSpeedTypes get(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 0));
	}
	GameSpeedTypes get0(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 0));
	}
	GameSpeedTypes getGameSpeed(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(GameSpeedTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, GameSpeedTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	GameSpeedTypes get1(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 1));
	}
	GameSpeedTypes getGameSpeed(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(GameSpeedTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, GameSpeedTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	GameSpeedTypes get2(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 2));
	}
	GameSpeedTypes getGameSpeed(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(GameSpeedTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, GameSpeedTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	GameSpeedTypes get3(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 3));
	}
	GameSpeedTypes getGameSpeed(int iIndex) const
	{
		return static_cast<GameSpeedTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(GameSpeedTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline GoodyTypes operator+(const GoodyTypes& A, const GoodyTypes& B)
{
	return static_cast<GoodyTypes>((int)A + (int)B);
};
static inline GoodyTypes operator-(const GoodyTypes& A, const GoodyTypes& B)
{
	return static_cast<GoodyTypes>((int)A - (int)B);
};
static inline GoodyTypes& operator++(GoodyTypes& c)
{
	c = static_cast<GoodyTypes>(c + 1);
	return c;
};
static inline GoodyTypes operator++(GoodyTypes& c, int)
{
	GoodyTypes cache = c;
	c = static_cast<GoodyTypes>(c + 1);
	return cache;
};
static inline GoodyTypes& operator--(GoodyTypes& c)
{
	c = static_cast<GoodyTypes>(c - 1);
	return c;
};
static inline GoodyTypes operator--(GoodyTypes& c, int)
{
	GoodyTypes cache = c;
	c = static_cast<GoodyTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (GoodyTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, GoodyTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (GoodyTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, GoodyTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (GoodyTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, GoodyTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (GoodyTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, GoodyTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (GoodyTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, GoodyTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (GoodyTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, GoodyTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<GoodyTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_GOODY;
	static const GoodyTypes DEFAULT = static_cast<GoodyTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_GOODY_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_GOODY_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const GoodyTypes FIRST = static_cast<GoodyTypes>(0);
	static const GoodyTypes LAST = static_cast<GoodyTypes>((int)NUM_GOODY_TYPES - 1);
	static const GoodyTypes NUM_ELEMENTS = static_cast<GoodyTypes>((int)LAST - (int)FIRST + 1);
	static const GoodyTypes LENGTH = COMPILE_TIME_NUM_GOODY_TYPES;
	static GoodyTypes first() { return static_cast<GoodyTypes>(0);}
	static GoodyTypes last() { return NUM_GOODY_TYPES - static_cast<GoodyTypes>(1);}
	static GoodyTypes numElements() { return last() - first() + static_cast<GoodyTypes>(1);}
	static GoodyTypes start() { return static_cast<GoodyTypes>(0);}
	static GoodyTypes end() { return NUM_GOODY_TYPES;}
	static GoodyTypes length() { return end() - start();}
	static bool isInRange(GoodyTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<GoodyTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(GoodyTypes eIndex) {}
	template<>	static bool _isInRange<0>(GoodyTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(GoodyTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(GoodyTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<GoodyTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	GoodyTypes get(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 0));
	}
	GoodyTypes get0(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 0));
	}
	GoodyTypes getGoody(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(GoodyTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, GoodyTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	GoodyTypes get1(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 1));
	}
	GoodyTypes getGoody(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(GoodyTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, GoodyTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	GoodyTypes get2(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 2));
	}
	GoodyTypes getGoody(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(GoodyTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, GoodyTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	GoodyTypes get3(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 3));
	}
	GoodyTypes getGoody(int iIndex) const
	{
		return static_cast<GoodyTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(GoodyTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline HandicapTypes operator+(const HandicapTypes& A, const HandicapTypes& B)
{
	return static_cast<HandicapTypes>((int)A + (int)B);
};
static inline HandicapTypes operator-(const HandicapTypes& A, const HandicapTypes& B)
{
	return static_cast<HandicapTypes>((int)A - (int)B);
};
static inline HandicapTypes& operator++(HandicapTypes& c)
{
	c = static_cast<HandicapTypes>(c + 1);
	return c;
};
static inline HandicapTypes operator++(HandicapTypes& c, int)
{
	HandicapTypes cache = c;
	c = static_cast<HandicapTypes>(c + 1);
	return cache;
};
static inline HandicapTypes& operator--(HandicapTypes& c)
{
	c = static_cast<HandicapTypes>(c - 1);
	return c;
};
static inline HandicapTypes operator--(HandicapTypes& c, int)
{
	HandicapTypes cache = c;
	c = static_cast<HandicapTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (HandicapTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, HandicapTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (HandicapTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, HandicapTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (HandicapTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, HandicapTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (HandicapTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, HandicapTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (HandicapTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, HandicapTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (HandicapTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, HandicapTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<HandicapTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_HANDICAP;
	static const HandicapTypes DEFAULT = static_cast<HandicapTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_HANDICAP_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_HANDICAP_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const HandicapTypes FIRST = static_cast<HandicapTypes>(0);
	static const HandicapTypes LAST = static_cast<HandicapTypes>((int)NUM_HANDICAP_TYPES - 1);
	static const HandicapTypes NUM_ELEMENTS = static_cast<HandicapTypes>((int)LAST - (int)FIRST + 1);
	static const HandicapTypes LENGTH = COMPILE_TIME_NUM_HANDICAP_TYPES;
	static HandicapTypes first() { return static_cast<HandicapTypes>(0);}
	static HandicapTypes last() { return NUM_HANDICAP_TYPES - static_cast<HandicapTypes>(1);}
	static HandicapTypes numElements() { return last() - first() + static_cast<HandicapTypes>(1);}
	static HandicapTypes start() { return static_cast<HandicapTypes>(0);}
	static HandicapTypes end() { return NUM_HANDICAP_TYPES;}
	static HandicapTypes length() { return end() - start();}
	static bool isInRange(HandicapTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<HandicapTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(HandicapTypes eIndex) {}
	template<>	static bool _isInRange<0>(HandicapTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(HandicapTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(HandicapTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<HandicapTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	HandicapTypes get(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 0));
	}
	HandicapTypes get0(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 0));
	}
	HandicapTypes getHandicap(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(HandicapTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, HandicapTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	HandicapTypes get1(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 1));
	}
	HandicapTypes getHandicap(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(HandicapTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, HandicapTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	HandicapTypes get2(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 2));
	}
	HandicapTypes getHandicap(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(HandicapTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, HandicapTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	HandicapTypes get3(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 3));
	}
	HandicapTypes getHandicap(int iIndex) const
	{
		return static_cast<HandicapTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(HandicapTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline HurryTypes operator+(const HurryTypes& A, const HurryTypes& B)
{
	return static_cast<HurryTypes>((int)A + (int)B);
};
static inline HurryTypes operator-(const HurryTypes& A, const HurryTypes& B)
{
	return static_cast<HurryTypes>((int)A - (int)B);
};
static inline HurryTypes& operator++(HurryTypes& c)
{
	c = static_cast<HurryTypes>(c + 1);
	return c;
};
static inline HurryTypes operator++(HurryTypes& c, int)
{
	HurryTypes cache = c;
	c = static_cast<HurryTypes>(c + 1);
	return cache;
};
static inline HurryTypes& operator--(HurryTypes& c)
{
	c = static_cast<HurryTypes>(c - 1);
	return c;
};
static inline HurryTypes operator--(HurryTypes& c, int)
{
	HurryTypes cache = c;
	c = static_cast<HurryTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (HurryTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, HurryTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (HurryTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, HurryTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (HurryTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, HurryTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (HurryTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, HurryTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (HurryTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, HurryTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (HurryTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, HurryTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<HurryTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_HURRY;
	static const HurryTypes DEFAULT = static_cast<HurryTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_HURRY_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_HURRY_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const HurryTypes FIRST = static_cast<HurryTypes>(0);
	static const HurryTypes LAST = static_cast<HurryTypes>((int)NUM_HURRY_TYPES - 1);
	static const HurryTypes NUM_ELEMENTS = static_cast<HurryTypes>((int)LAST - (int)FIRST + 1);
	static const HurryTypes LENGTH = COMPILE_TIME_NUM_HURRY_TYPES;
	static HurryTypes first() { return static_cast<HurryTypes>(0);}
	static HurryTypes last() { return NUM_HURRY_TYPES - static_cast<HurryTypes>(1);}
	static HurryTypes numElements() { return last() - first() + static_cast<HurryTypes>(1);}
	static HurryTypes start() { return static_cast<HurryTypes>(0);}
	static HurryTypes end() { return NUM_HURRY_TYPES;}
	static HurryTypes length() { return end() - start();}
	static bool isInRange(HurryTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<HurryTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(HurryTypes eIndex) {}
	template<>	static bool _isInRange<0>(HurryTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(HurryTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(HurryTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<HurryTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	HurryTypes get(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 0));
	}
	HurryTypes get0(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 0));
	}
	HurryTypes getHurry(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(HurryTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, HurryTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	HurryTypes get1(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 1));
	}
	HurryTypes getHurry(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(HurryTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, HurryTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	HurryTypes get2(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 2));
	}
	HurryTypes getHurry(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(HurryTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, HurryTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	HurryTypes get3(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 3));
	}
	HurryTypes getHurry(int iIndex) const
	{
		return static_cast<HurryTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(HurryTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline ImprovementTypes operator+(const ImprovementTypes& A, const ImprovementTypes& B)
{
	return static_cast<ImprovementTypes>((int)A + (int)B);
};
static inline ImprovementTypes operator-(const ImprovementTypes& A, const ImprovementTypes& B)
{
	return static_cast<ImprovementTypes>((int)A - (int)B);
};
static inline ImprovementTypes& operator++(ImprovementTypes& c)
{
	c = static_cast<ImprovementTypes>(c + 1);
	return c;
};
static inline ImprovementTypes operator++(ImprovementTypes& c, int)
{
	ImprovementTypes cache = c;
	c = static_cast<ImprovementTypes>(c + 1);
	return cache;
};
static inline ImprovementTypes& operator--(ImprovementTypes& c)
{
	c = static_cast<ImprovementTypes>(c - 1);
	return c;
};
static inline ImprovementTypes operator--(ImprovementTypes& c, int)
{
	ImprovementTypes cache = c;
	c = static_cast<ImprovementTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (ImprovementTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, ImprovementTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (ImprovementTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, ImprovementTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (ImprovementTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, ImprovementTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (ImprovementTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, ImprovementTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (ImprovementTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, ImprovementTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (ImprovementTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, ImprovementTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<ImprovementTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_IMPROVEMENT;
	static const ImprovementTypes DEFAULT = static_cast<ImprovementTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_IMPROVEMENT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_IMPROVEMENT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const ImprovementTypes FIRST = static_cast<ImprovementTypes>(0);
	static const ImprovementTypes LAST = static_cast<ImprovementTypes>((int)NUM_IMPROVEMENT_TYPES - 1);
	static const ImprovementTypes NUM_ELEMENTS = static_cast<ImprovementTypes>((int)LAST - (int)FIRST + 1);
	static const ImprovementTypes LENGTH = COMPILE_TIME_NUM_IMPROVEMENT_TYPES;
	static ImprovementTypes first() { return static_cast<ImprovementTypes>(0);}
	static ImprovementTypes last() { return NUM_IMPROVEMENT_TYPES - static_cast<ImprovementTypes>(1);}
	static ImprovementTypes numElements() { return last() - first() + static_cast<ImprovementTypes>(1);}
	static ImprovementTypes start() { return static_cast<ImprovementTypes>(0);}
	static ImprovementTypes end() { return NUM_IMPROVEMENT_TYPES;}
	static ImprovementTypes length() { return end() - start();}
	static bool isInRange(ImprovementTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<ImprovementTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(ImprovementTypes eIndex) {}
	template<>	static bool _isInRange<0>(ImprovementTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(ImprovementTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(ImprovementTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<ImprovementTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	ImprovementTypes get(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 0));
	}
	ImprovementTypes get0(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 0));
	}
	ImprovementTypes getImprovement(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(ImprovementTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, ImprovementTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	ImprovementTypes get1(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 1));
	}
	ImprovementTypes getImprovement(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(ImprovementTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, ImprovementTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	ImprovementTypes get2(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 2));
	}
	ImprovementTypes getImprovement(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(ImprovementTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, ImprovementTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	ImprovementTypes get3(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 3));
	}
	ImprovementTypes getImprovement(int iIndex) const
	{
		return static_cast<ImprovementTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(ImprovementTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline InvisibleTypes operator+(const InvisibleTypes& A, const InvisibleTypes& B)
{
	return static_cast<InvisibleTypes>((int)A + (int)B);
};
static inline InvisibleTypes operator-(const InvisibleTypes& A, const InvisibleTypes& B)
{
	return static_cast<InvisibleTypes>((int)A - (int)B);
};
static inline InvisibleTypes& operator++(InvisibleTypes& c)
{
	c = static_cast<InvisibleTypes>(c + 1);
	return c;
};
static inline InvisibleTypes operator++(InvisibleTypes& c, int)
{
	InvisibleTypes cache = c;
	c = static_cast<InvisibleTypes>(c + 1);
	return cache;
};
static inline InvisibleTypes& operator--(InvisibleTypes& c)
{
	c = static_cast<InvisibleTypes>(c - 1);
	return c;
};
static inline InvisibleTypes operator--(InvisibleTypes& c, int)
{
	InvisibleTypes cache = c;
	c = static_cast<InvisibleTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (InvisibleTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, InvisibleTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (InvisibleTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, InvisibleTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (InvisibleTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, InvisibleTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (InvisibleTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, InvisibleTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (InvisibleTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, InvisibleTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (InvisibleTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, InvisibleTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<InvisibleTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_INVISIBLE;
	static const InvisibleTypes DEFAULT = static_cast<InvisibleTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_INVISIBLE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_INVISIBLE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const InvisibleTypes FIRST = static_cast<InvisibleTypes>(0);
	static const InvisibleTypes LAST = static_cast<InvisibleTypes>((int)NUM_INVISIBLE_TYPES - 1);
	static const InvisibleTypes NUM_ELEMENTS = static_cast<InvisibleTypes>((int)LAST - (int)FIRST + 1);
	static const InvisibleTypes LENGTH = COMPILE_TIME_NUM_INVISIBLE_TYPES;
	static InvisibleTypes first() { return static_cast<InvisibleTypes>(0);}
	static InvisibleTypes last() { return NUM_INVISIBLE_TYPES - static_cast<InvisibleTypes>(1);}
	static InvisibleTypes numElements() { return last() - first() + static_cast<InvisibleTypes>(1);}
	static InvisibleTypes start() { return static_cast<InvisibleTypes>(0);}
	static InvisibleTypes end() { return NUM_INVISIBLE_TYPES;}
	static InvisibleTypes length() { return end() - start();}
	static bool isInRange(InvisibleTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<InvisibleTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(InvisibleTypes eIndex) {}
	template<>	static bool _isInRange<0>(InvisibleTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(InvisibleTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(InvisibleTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<InvisibleTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	InvisibleTypes get(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 0));
	}
	InvisibleTypes get0(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 0));
	}
	InvisibleTypes getInvisible(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(InvisibleTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, InvisibleTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	InvisibleTypes get1(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 1));
	}
	InvisibleTypes getInvisible(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(InvisibleTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, InvisibleTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	InvisibleTypes get2(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 2));
	}
	InvisibleTypes getInvisible(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(InvisibleTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, InvisibleTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	InvisibleTypes get3(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 3));
	}
	InvisibleTypes getInvisible(int iIndex) const
	{
		return static_cast<InvisibleTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(InvisibleTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline LeaderHeadTypes operator+(const LeaderHeadTypes& A, const LeaderHeadTypes& B)
{
	return static_cast<LeaderHeadTypes>((int)A + (int)B);
};
static inline LeaderHeadTypes operator-(const LeaderHeadTypes& A, const LeaderHeadTypes& B)
{
	return static_cast<LeaderHeadTypes>((int)A - (int)B);
};
static inline LeaderHeadTypes& operator++(LeaderHeadTypes& c)
{
	c = static_cast<LeaderHeadTypes>(c + 1);
	return c;
};
static inline LeaderHeadTypes operator++(LeaderHeadTypes& c, int)
{
	LeaderHeadTypes cache = c;
	c = static_cast<LeaderHeadTypes>(c + 1);
	return cache;
};
static inline LeaderHeadTypes& operator--(LeaderHeadTypes& c)
{
	c = static_cast<LeaderHeadTypes>(c - 1);
	return c;
};
static inline LeaderHeadTypes operator--(LeaderHeadTypes& c, int)
{
	LeaderHeadTypes cache = c;
	c = static_cast<LeaderHeadTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (LeaderHeadTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, LeaderHeadTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (LeaderHeadTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, LeaderHeadTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (LeaderHeadTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, LeaderHeadTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (LeaderHeadTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, LeaderHeadTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (LeaderHeadTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, LeaderHeadTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (LeaderHeadTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, LeaderHeadTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<LeaderHeadTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_LEADER;
	static const LeaderHeadTypes DEFAULT = static_cast<LeaderHeadTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_LEADER_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_LEADER_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const LeaderHeadTypes FIRST = static_cast<LeaderHeadTypes>(0);
	static const LeaderHeadTypes LAST = static_cast<LeaderHeadTypes>((int)NUM_LEADER_TYPES - 1);
	static const LeaderHeadTypes NUM_ELEMENTS = static_cast<LeaderHeadTypes>((int)LAST - (int)FIRST + 1);
	static const LeaderHeadTypes LENGTH = COMPILE_TIME_NUM_LEADER_TYPES;
	static LeaderHeadTypes first() { return static_cast<LeaderHeadTypes>(0);}
	static LeaderHeadTypes last() { return NUM_LEADER_TYPES - static_cast<LeaderHeadTypes>(1);}
	static LeaderHeadTypes numElements() { return last() - first() + static_cast<LeaderHeadTypes>(1);}
	static LeaderHeadTypes start() { return static_cast<LeaderHeadTypes>(0);}
	static LeaderHeadTypes end() { return NUM_LEADER_TYPES;}
	static LeaderHeadTypes length() { return end() - start();}
	static bool isInRange(LeaderHeadTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<LeaderHeadTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(LeaderHeadTypes eIndex) {}
	template<>	static bool _isInRange<0>(LeaderHeadTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(LeaderHeadTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(LeaderHeadTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<LeaderHeadTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	LeaderHeadTypes get(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 0));
	}
	LeaderHeadTypes get0(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 0));
	}
	LeaderHeadTypes getLeaderHead(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(LeaderHeadTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, LeaderHeadTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	LeaderHeadTypes get1(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 1));
	}
	LeaderHeadTypes getLeaderHead(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(LeaderHeadTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, LeaderHeadTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	LeaderHeadTypes get2(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 2));
	}
	LeaderHeadTypes getLeaderHead(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(LeaderHeadTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, LeaderHeadTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	LeaderHeadTypes get3(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 3));
	}
	LeaderHeadTypes getLeaderHead(int iIndex) const
	{
		return static_cast<LeaderHeadTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(LeaderHeadTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline MemoryTypes operator+(const MemoryTypes& A, const MemoryTypes& B)
{
	return static_cast<MemoryTypes>((int)A + (int)B);
};
static inline MemoryTypes operator-(const MemoryTypes& A, const MemoryTypes& B)
{
	return static_cast<MemoryTypes>((int)A - (int)B);
};
static inline MemoryTypes& operator++(MemoryTypes& c)
{
	c = static_cast<MemoryTypes>(c + 1);
	return c;
};
static inline MemoryTypes operator++(MemoryTypes& c, int)
{
	MemoryTypes cache = c;
	c = static_cast<MemoryTypes>(c + 1);
	return cache;
};
static inline MemoryTypes& operator--(MemoryTypes& c)
{
	c = static_cast<MemoryTypes>(c - 1);
	return c;
};
static inline MemoryTypes operator--(MemoryTypes& c, int)
{
	MemoryTypes cache = c;
	c = static_cast<MemoryTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (MemoryTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, MemoryTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (MemoryTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, MemoryTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (MemoryTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, MemoryTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (MemoryTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, MemoryTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (MemoryTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, MemoryTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (MemoryTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, MemoryTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<MemoryTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_MEMORY;
	static const MemoryTypes DEFAULT = static_cast<MemoryTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_MEMORY_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_MEMORY_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const MemoryTypes FIRST = static_cast<MemoryTypes>(0);
	static const MemoryTypes LAST = static_cast<MemoryTypes>((int)NUM_MEMORY_TYPES - 1);
	static const MemoryTypes NUM_ELEMENTS = static_cast<MemoryTypes>((int)LAST - (int)FIRST + 1);
	static const MemoryTypes LENGTH = COMPILE_TIME_NUM_MEMORY_TYPES;
	static MemoryTypes first() { return static_cast<MemoryTypes>(0);}
	static MemoryTypes last() { return NUM_MEMORY_TYPES - static_cast<MemoryTypes>(1);}
	static MemoryTypes numElements() { return last() - first() + static_cast<MemoryTypes>(1);}
	static MemoryTypes start() { return static_cast<MemoryTypes>(0);}
	static MemoryTypes end() { return NUM_MEMORY_TYPES;}
	static MemoryTypes length() { return end() - start();}
	static bool isInRange(MemoryTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<MemoryTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(MemoryTypes eIndex) {}
	template<>	static bool _isInRange<0>(MemoryTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(MemoryTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(MemoryTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<MemoryTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	MemoryTypes get(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 0));
	}
	MemoryTypes get0(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 0));
	}
	MemoryTypes getMemory(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(MemoryTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, MemoryTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	MemoryTypes get1(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 1));
	}
	MemoryTypes getMemory(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(MemoryTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, MemoryTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	MemoryTypes get2(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 2));
	}
	MemoryTypes getMemory(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(MemoryTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, MemoryTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	MemoryTypes get3(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 3));
	}
	MemoryTypes getMemory(int iIndex) const
	{
		return static_cast<MemoryTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(MemoryTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline PlayerTypes operator+(const PlayerTypes& A, const PlayerTypes& B)
{
	return static_cast<PlayerTypes>((int)A + (int)B);
};
static inline PlayerTypes operator-(const PlayerTypes& A, const PlayerTypes& B)
{
	return static_cast<PlayerTypes>((int)A - (int)B);
};
static inline PlayerTypes& operator++(PlayerTypes& c)
{
	c = static_cast<PlayerTypes>(c + 1);
	return c;
};
static inline PlayerTypes operator++(PlayerTypes& c, int)
{
	PlayerTypes cache = c;
	c = static_cast<PlayerTypes>(c + 1);
	return cache;
};
static inline PlayerTypes& operator--(PlayerTypes& c)
{
	c = static_cast<PlayerTypes>(c - 1);
	return c;
};
static inline PlayerTypes operator--(PlayerTypes& c, int)
{
	PlayerTypes cache = c;
	c = static_cast<PlayerTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (PlayerTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, PlayerTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (PlayerTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, PlayerTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (PlayerTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, PlayerTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (PlayerTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, PlayerTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (PlayerTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, PlayerTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (PlayerTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, PlayerTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<PlayerTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_PLAYER;
	static const PlayerTypes DEFAULT = static_cast<PlayerTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_PLAYER_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_PLAYER_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const PlayerTypes FIRST = static_cast<PlayerTypes>(0);
	static const PlayerTypes LAST = static_cast<PlayerTypes>((int)NUM_PLAYER_TYPES - 1);
	static const PlayerTypes NUM_ELEMENTS = static_cast<PlayerTypes>((int)LAST - (int)FIRST + 1);
	static const PlayerTypes LENGTH = COMPILE_TIME_NUM_PLAYER_TYPES;
	static PlayerTypes first() { return static_cast<PlayerTypes>(0);}
	static PlayerTypes last() { return NUM_PLAYER_TYPES - static_cast<PlayerTypes>(1);}
	static PlayerTypes numElements() { return last() - first() + static_cast<PlayerTypes>(1);}
	static PlayerTypes start() { return static_cast<PlayerTypes>(0);}
	static PlayerTypes end() { return NUM_PLAYER_TYPES;}
	static PlayerTypes length() { return end() - start();}
	static bool isInRange(PlayerTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<PlayerTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(PlayerTypes eIndex) {}
	template<>	static bool _isInRange<0>(PlayerTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(PlayerTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(PlayerTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<PlayerTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	PlayerTypes get(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 0));
	}
	PlayerTypes get0(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 0));
	}
	PlayerTypes getPlayer(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(PlayerTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, PlayerTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	PlayerTypes get1(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 1));
	}
	PlayerTypes getPlayer(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(PlayerTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, PlayerTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	PlayerTypes get2(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 2));
	}
	PlayerTypes getPlayer(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(PlayerTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, PlayerTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	PlayerTypes get3(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 3));
	}
	PlayerTypes getPlayer(int iIndex) const
	{
		return static_cast<PlayerTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(PlayerTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline PlayerColorTypes operator+(const PlayerColorTypes& A, const PlayerColorTypes& B)
{
	return static_cast<PlayerColorTypes>((int)A + (int)B);
};
static inline PlayerColorTypes operator-(const PlayerColorTypes& A, const PlayerColorTypes& B)
{
	return static_cast<PlayerColorTypes>((int)A - (int)B);
};
static inline PlayerColorTypes& operator++(PlayerColorTypes& c)
{
	c = static_cast<PlayerColorTypes>(c + 1);
	return c;
};
static inline PlayerColorTypes operator++(PlayerColorTypes& c, int)
{
	PlayerColorTypes cache = c;
	c = static_cast<PlayerColorTypes>(c + 1);
	return cache;
};
static inline PlayerColorTypes& operator--(PlayerColorTypes& c)
{
	c = static_cast<PlayerColorTypes>(c - 1);
	return c;
};
static inline PlayerColorTypes operator--(PlayerColorTypes& c, int)
{
	PlayerColorTypes cache = c;
	c = static_cast<PlayerColorTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (PlayerColorTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, PlayerColorTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (PlayerColorTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, PlayerColorTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (PlayerColorTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, PlayerColorTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (PlayerColorTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, PlayerColorTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (PlayerColorTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, PlayerColorTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (PlayerColorTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, PlayerColorTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<PlayerColorTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_PLAYER_COLOR;
	static const PlayerColorTypes DEFAULT = static_cast<PlayerColorTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_PLAYERCOLOR_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_PLAYERCOLOR_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const PlayerColorTypes FIRST = static_cast<PlayerColorTypes>(0);
	static const PlayerColorTypes LAST = static_cast<PlayerColorTypes>((int)NUM_PLAYERCOLOR_TYPES - 1);
	static const PlayerColorTypes NUM_ELEMENTS = static_cast<PlayerColorTypes>((int)LAST - (int)FIRST + 1);
	static const PlayerColorTypes LENGTH = COMPILE_TIME_NUM_PLAYERCOLOR_TYPES;
	static PlayerColorTypes first() { return static_cast<PlayerColorTypes>(0);}
	static PlayerColorTypes last() { return NUM_PLAYERCOLOR_TYPES - static_cast<PlayerColorTypes>(1);}
	static PlayerColorTypes numElements() { return last() - first() + static_cast<PlayerColorTypes>(1);}
	static PlayerColorTypes start() { return static_cast<PlayerColorTypes>(0);}
	static PlayerColorTypes end() { return NUM_PLAYERCOLOR_TYPES;}
	static PlayerColorTypes length() { return end() - start();}
	static bool isInRange(PlayerColorTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<PlayerColorTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(PlayerColorTypes eIndex) {}
	template<>	static bool _isInRange<0>(PlayerColorTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(PlayerColorTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(PlayerColorTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<PlayerColorTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	PlayerColorTypes get(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 0));
	}
	PlayerColorTypes get0(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 0));
	}
	PlayerColorTypes getPlayerColor(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(PlayerColorTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, PlayerColorTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	PlayerColorTypes get1(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 1));
	}
	PlayerColorTypes getPlayerColor(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(PlayerColorTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, PlayerColorTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	PlayerColorTypes get2(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 2));
	}
	PlayerColorTypes getPlayerColor(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(PlayerColorTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, PlayerColorTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	PlayerColorTypes get3(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 3));
	}
	PlayerColorTypes getPlayerColor(int iIndex) const
	{
		return static_cast<PlayerColorTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(PlayerColorTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline PlayerOptionTypes operator+(const PlayerOptionTypes& A, const PlayerOptionTypes& B)
{
	return static_cast<PlayerOptionTypes>((int)A + (int)B);
};
static inline PlayerOptionTypes operator-(const PlayerOptionTypes& A, const PlayerOptionTypes& B)
{
	return static_cast<PlayerOptionTypes>((int)A - (int)B);
};
static inline PlayerOptionTypes& operator++(PlayerOptionTypes& c)
{
	c = static_cast<PlayerOptionTypes>(c + 1);
	return c;
};
static inline PlayerOptionTypes operator++(PlayerOptionTypes& c, int)
{
	PlayerOptionTypes cache = c;
	c = static_cast<PlayerOptionTypes>(c + 1);
	return cache;
};
static inline PlayerOptionTypes& operator--(PlayerOptionTypes& c)
{
	c = static_cast<PlayerOptionTypes>(c - 1);
	return c;
};
static inline PlayerOptionTypes operator--(PlayerOptionTypes& c, int)
{
	PlayerOptionTypes cache = c;
	c = static_cast<PlayerOptionTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (PlayerOptionTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, PlayerOptionTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (PlayerOptionTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, PlayerOptionTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (PlayerOptionTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, PlayerOptionTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (PlayerOptionTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, PlayerOptionTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (PlayerOptionTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, PlayerOptionTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (PlayerOptionTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, PlayerOptionTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<PlayerOptionTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_PLAYER_OPTION;
	static const PlayerOptionTypes DEFAULT = static_cast<PlayerOptionTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_PLAYEROPTION_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_PLAYEROPTION_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const PlayerOptionTypes FIRST = static_cast<PlayerOptionTypes>(0);
	static const PlayerOptionTypes LAST = static_cast<PlayerOptionTypes>((int)NUM_PLAYEROPTION_TYPES - 1);
	static const PlayerOptionTypes NUM_ELEMENTS = static_cast<PlayerOptionTypes>((int)LAST - (int)FIRST + 1);
	static const PlayerOptionTypes LENGTH = COMPILE_TIME_NUM_PLAYEROPTION_TYPES;
	static PlayerOptionTypes first() { return static_cast<PlayerOptionTypes>(0);}
	static PlayerOptionTypes last() { return NUM_PLAYEROPTION_TYPES - static_cast<PlayerOptionTypes>(1);}
	static PlayerOptionTypes numElements() { return last() - first() + static_cast<PlayerOptionTypes>(1);}
	static PlayerOptionTypes start() { return static_cast<PlayerOptionTypes>(0);}
	static PlayerOptionTypes end() { return NUM_PLAYEROPTION_TYPES;}
	static PlayerOptionTypes length() { return end() - start();}
	static bool isInRange(PlayerOptionTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<PlayerOptionTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(PlayerOptionTypes eIndex) {}
	template<>	static bool _isInRange<0>(PlayerOptionTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(PlayerOptionTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(PlayerOptionTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<PlayerOptionTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	PlayerOptionTypes get(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 0));
	}
	PlayerOptionTypes get0(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 0));
	}
	PlayerOptionTypes getPlayerOption(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(PlayerOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, PlayerOptionTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	PlayerOptionTypes get1(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 1));
	}
	PlayerOptionTypes getPlayerOption(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(PlayerOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, PlayerOptionTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	PlayerOptionTypes get2(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 2));
	}
	PlayerOptionTypes getPlayerOption(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(PlayerOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, PlayerOptionTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	PlayerOptionTypes get3(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 3));
	}
	PlayerOptionTypes getPlayerOption(int iIndex) const
	{
		return static_cast<PlayerOptionTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(PlayerOptionTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline PlotTypes operator+(const PlotTypes& A, const PlotTypes& B)
{
	return static_cast<PlotTypes>((int)A + (int)B);
};
static inline PlotTypes operator-(const PlotTypes& A, const PlotTypes& B)
{
	return static_cast<PlotTypes>((int)A - (int)B);
};
static inline PlotTypes& operator++(PlotTypes& c)
{
	c = static_cast<PlotTypes>(c + 1);
	return c;
};
static inline PlotTypes operator++(PlotTypes& c, int)
{
	PlotTypes cache = c;
	c = static_cast<PlotTypes>(c + 1);
	return cache;
};
static inline PlotTypes& operator--(PlotTypes& c)
{
	c = static_cast<PlotTypes>(c - 1);
	return c;
};
static inline PlotTypes operator--(PlotTypes& c, int)
{
	PlotTypes cache = c;
	c = static_cast<PlotTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (PlotTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, PlotTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (PlotTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, PlotTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (PlotTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, PlotTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (PlotTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, PlotTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (PlotTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, PlotTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (PlotTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, PlotTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<PlotTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_PLOT_TYPE;
	static const PlotTypes DEFAULT = static_cast<PlotTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_PLOT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_PLOT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const PlotTypes FIRST = static_cast<PlotTypes>(0);
	static const PlotTypes LAST = static_cast<PlotTypes>((int)NUM_PLOT_TYPES - 1);
	static const PlotTypes NUM_ELEMENTS = static_cast<PlotTypes>((int)LAST - (int)FIRST + 1);
	static const PlotTypes LENGTH = COMPILE_TIME_NUM_PLOT_TYPES;
	static PlotTypes first() { return static_cast<PlotTypes>(0);}
	static PlotTypes last() { return NUM_PLOT_TYPES - static_cast<PlotTypes>(1);}
	static PlotTypes numElements() { return last() - first() + static_cast<PlotTypes>(1);}
	static PlotTypes start() { return static_cast<PlotTypes>(0);}
	static PlotTypes end() { return NUM_PLOT_TYPES;}
	static PlotTypes length() { return end() - start();}
	static bool isInRange(PlotTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<PlotTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(PlotTypes eIndex) {}
	template<>	static bool _isInRange<0>(PlotTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(PlotTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(PlotTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<PlotTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	PlotTypes get(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 0));
	}
	PlotTypes get0(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 0));
	}
	PlotTypes getPlotType(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(PlotTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, PlotTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	PlotTypes get1(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 1));
	}
	PlotTypes getPlotType(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(PlotTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, PlotTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	PlotTypes get2(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 2));
	}
	PlotTypes getPlotType(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(PlotTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, PlotTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	PlotTypes get3(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 3));
	}
	PlotTypes getPlotType(int iIndex) const
	{
		return static_cast<PlotTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(PlotTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline ProfessionTypes operator+(const ProfessionTypes& A, const ProfessionTypes& B)
{
	return static_cast<ProfessionTypes>((int)A + (int)B);
};
static inline ProfessionTypes operator-(const ProfessionTypes& A, const ProfessionTypes& B)
{
	return static_cast<ProfessionTypes>((int)A - (int)B);
};
static inline ProfessionTypes& operator++(ProfessionTypes& c)
{
	c = static_cast<ProfessionTypes>(c + 1);
	return c;
};
static inline ProfessionTypes operator++(ProfessionTypes& c, int)
{
	ProfessionTypes cache = c;
	c = static_cast<ProfessionTypes>(c + 1);
	return cache;
};
static inline ProfessionTypes& operator--(ProfessionTypes& c)
{
	c = static_cast<ProfessionTypes>(c - 1);
	return c;
};
static inline ProfessionTypes operator--(ProfessionTypes& c, int)
{
	ProfessionTypes cache = c;
	c = static_cast<ProfessionTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (ProfessionTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, ProfessionTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (ProfessionTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, ProfessionTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (ProfessionTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, ProfessionTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (ProfessionTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, ProfessionTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (ProfessionTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, ProfessionTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (ProfessionTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, ProfessionTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<ProfessionTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_PROFESSION;
	static const ProfessionTypes DEFAULT = static_cast<ProfessionTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_PROFESSION_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_PROFESSION_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const ProfessionTypes FIRST = static_cast<ProfessionTypes>(0);
	static const ProfessionTypes LAST = static_cast<ProfessionTypes>((int)NUM_PROFESSION_TYPES - 1);
	static const ProfessionTypes NUM_ELEMENTS = static_cast<ProfessionTypes>((int)LAST - (int)FIRST + 1);
	static const ProfessionTypes LENGTH = COMPILE_TIME_NUM_PROFESSION_TYPES;
	static ProfessionTypes first() { return static_cast<ProfessionTypes>(0);}
	static ProfessionTypes last() { return NUM_PROFESSION_TYPES - static_cast<ProfessionTypes>(1);}
	static ProfessionTypes numElements() { return last() - first() + static_cast<ProfessionTypes>(1);}
	static ProfessionTypes start() { return static_cast<ProfessionTypes>(0);}
	static ProfessionTypes end() { return NUM_PROFESSION_TYPES;}
	static ProfessionTypes length() { return end() - start();}
	static bool isInRange(ProfessionTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<ProfessionTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(ProfessionTypes eIndex) {}
	template<>	static bool _isInRange<0>(ProfessionTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(ProfessionTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(ProfessionTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<ProfessionTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	ProfessionTypes get(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 0));
	}
	ProfessionTypes get0(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 0));
	}
	ProfessionTypes getProfession(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(ProfessionTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, ProfessionTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	ProfessionTypes get1(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 1));
	}
	ProfessionTypes getProfession(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(ProfessionTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, ProfessionTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	ProfessionTypes get2(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 2));
	}
	ProfessionTypes getProfession(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(ProfessionTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, ProfessionTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	ProfessionTypes get3(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 3));
	}
	ProfessionTypes getProfession(int iIndex) const
	{
		return static_cast<ProfessionTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(ProfessionTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline PromotionTypes operator+(const PromotionTypes& A, const PromotionTypes& B)
{
	return static_cast<PromotionTypes>((int)A + (int)B);
};
static inline PromotionTypes operator-(const PromotionTypes& A, const PromotionTypes& B)
{
	return static_cast<PromotionTypes>((int)A - (int)B);
};
static inline PromotionTypes& operator++(PromotionTypes& c)
{
	c = static_cast<PromotionTypes>(c + 1);
	return c;
};
static inline PromotionTypes operator++(PromotionTypes& c, int)
{
	PromotionTypes cache = c;
	c = static_cast<PromotionTypes>(c + 1);
	return cache;
};
static inline PromotionTypes& operator--(PromotionTypes& c)
{
	c = static_cast<PromotionTypes>(c - 1);
	return c;
};
static inline PromotionTypes operator--(PromotionTypes& c, int)
{
	PromotionTypes cache = c;
	c = static_cast<PromotionTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (PromotionTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, PromotionTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (PromotionTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, PromotionTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (PromotionTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, PromotionTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (PromotionTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, PromotionTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (PromotionTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, PromotionTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (PromotionTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, PromotionTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<PromotionTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_PROMOTION;
	static const PromotionTypes DEFAULT = static_cast<PromotionTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_PROMOTION_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_PROMOTION_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const PromotionTypes FIRST = static_cast<PromotionTypes>(0);
	static const PromotionTypes LAST = static_cast<PromotionTypes>((int)NUM_PROMOTION_TYPES - 1);
	static const PromotionTypes NUM_ELEMENTS = static_cast<PromotionTypes>((int)LAST - (int)FIRST + 1);
	static const PromotionTypes LENGTH = COMPILE_TIME_NUM_PROMOTION_TYPES;
	static PromotionTypes first() { return static_cast<PromotionTypes>(0);}
	static PromotionTypes last() { return NUM_PROMOTION_TYPES - static_cast<PromotionTypes>(1);}
	static PromotionTypes numElements() { return last() - first() + static_cast<PromotionTypes>(1);}
	static PromotionTypes start() { return static_cast<PromotionTypes>(0);}
	static PromotionTypes end() { return NUM_PROMOTION_TYPES;}
	static PromotionTypes length() { return end() - start();}
	static bool isInRange(PromotionTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<PromotionTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(PromotionTypes eIndex) {}
	template<>	static bool _isInRange<0>(PromotionTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(PromotionTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(PromotionTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<PromotionTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	PromotionTypes get(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 0));
	}
	PromotionTypes get0(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 0));
	}
	PromotionTypes getPromotion(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(PromotionTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, PromotionTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	PromotionTypes get1(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 1));
	}
	PromotionTypes getPromotion(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(PromotionTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, PromotionTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	PromotionTypes get2(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 2));
	}
	PromotionTypes getPromotion(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(PromotionTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, PromotionTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	PromotionTypes get3(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 3));
	}
	PromotionTypes getPromotion(int iIndex) const
	{
		return static_cast<PromotionTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(PromotionTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline RouteTypes operator+(const RouteTypes& A, const RouteTypes& B)
{
	return static_cast<RouteTypes>((int)A + (int)B);
};
static inline RouteTypes operator-(const RouteTypes& A, const RouteTypes& B)
{
	return static_cast<RouteTypes>((int)A - (int)B);
};
static inline RouteTypes& operator++(RouteTypes& c)
{
	c = static_cast<RouteTypes>(c + 1);
	return c;
};
static inline RouteTypes operator++(RouteTypes& c, int)
{
	RouteTypes cache = c;
	c = static_cast<RouteTypes>(c + 1);
	return cache;
};
static inline RouteTypes& operator--(RouteTypes& c)
{
	c = static_cast<RouteTypes>(c - 1);
	return c;
};
static inline RouteTypes operator--(RouteTypes& c, int)
{
	RouteTypes cache = c;
	c = static_cast<RouteTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (RouteTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, RouteTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (RouteTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, RouteTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (RouteTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, RouteTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (RouteTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, RouteTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (RouteTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, RouteTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (RouteTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, RouteTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<RouteTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_ROUTE;
	static const RouteTypes DEFAULT = static_cast<RouteTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_ROUTE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_ROUTE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const RouteTypes FIRST = static_cast<RouteTypes>(0);
	static const RouteTypes LAST = static_cast<RouteTypes>((int)NUM_ROUTE_TYPES - 1);
	static const RouteTypes NUM_ELEMENTS = static_cast<RouteTypes>((int)LAST - (int)FIRST + 1);
	static const RouteTypes LENGTH = COMPILE_TIME_NUM_ROUTE_TYPES;
	static RouteTypes first() { return static_cast<RouteTypes>(0);}
	static RouteTypes last() { return NUM_ROUTE_TYPES - static_cast<RouteTypes>(1);}
	static RouteTypes numElements() { return last() - first() + static_cast<RouteTypes>(1);}
	static RouteTypes start() { return static_cast<RouteTypes>(0);}
	static RouteTypes end() { return NUM_ROUTE_TYPES;}
	static RouteTypes length() { return end() - start();}
	static bool isInRange(RouteTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<RouteTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(RouteTypes eIndex) {}
	template<>	static bool _isInRange<0>(RouteTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(RouteTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(RouteTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<RouteTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	RouteTypes get(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 0));
	}
	RouteTypes get0(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 0));
	}
	RouteTypes getRoute(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(RouteTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, RouteTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	RouteTypes get1(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 1));
	}
	RouteTypes getRoute(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(RouteTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, RouteTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	RouteTypes get2(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 2));
	}
	RouteTypes getRoute(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(RouteTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, RouteTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	RouteTypes get3(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 3));
	}
	RouteTypes getRoute(int iIndex) const
	{
		return static_cast<RouteTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(RouteTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline SeaLevelTypes operator+(const SeaLevelTypes& A, const SeaLevelTypes& B)
{
	return static_cast<SeaLevelTypes>((int)A + (int)B);
};
static inline SeaLevelTypes operator-(const SeaLevelTypes& A, const SeaLevelTypes& B)
{
	return static_cast<SeaLevelTypes>((int)A - (int)B);
};
static inline SeaLevelTypes& operator++(SeaLevelTypes& c)
{
	c = static_cast<SeaLevelTypes>(c + 1);
	return c;
};
static inline SeaLevelTypes operator++(SeaLevelTypes& c, int)
{
	SeaLevelTypes cache = c;
	c = static_cast<SeaLevelTypes>(c + 1);
	return cache;
};
static inline SeaLevelTypes& operator--(SeaLevelTypes& c)
{
	c = static_cast<SeaLevelTypes>(c - 1);
	return c;
};
static inline SeaLevelTypes operator--(SeaLevelTypes& c, int)
{
	SeaLevelTypes cache = c;
	c = static_cast<SeaLevelTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (SeaLevelTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, SeaLevelTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (SeaLevelTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, SeaLevelTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (SeaLevelTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, SeaLevelTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (SeaLevelTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, SeaLevelTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (SeaLevelTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, SeaLevelTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (SeaLevelTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, SeaLevelTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<SeaLevelTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_SEA_LEVEL;
	static const SeaLevelTypes DEFAULT = static_cast<SeaLevelTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_SEALEVEL_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_SEALEVEL_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const SeaLevelTypes FIRST = static_cast<SeaLevelTypes>(0);
	static const SeaLevelTypes LAST = static_cast<SeaLevelTypes>((int)NUM_SEALEVEL_TYPES - 1);
	static const SeaLevelTypes NUM_ELEMENTS = static_cast<SeaLevelTypes>((int)LAST - (int)FIRST + 1);
	static const SeaLevelTypes LENGTH = COMPILE_TIME_NUM_SEALEVEL_TYPES;
	static SeaLevelTypes first() { return static_cast<SeaLevelTypes>(0);}
	static SeaLevelTypes last() { return NUM_SEALEVEL_TYPES - static_cast<SeaLevelTypes>(1);}
	static SeaLevelTypes numElements() { return last() - first() + static_cast<SeaLevelTypes>(1);}
	static SeaLevelTypes start() { return static_cast<SeaLevelTypes>(0);}
	static SeaLevelTypes end() { return NUM_SEALEVEL_TYPES;}
	static SeaLevelTypes length() { return end() - start();}
	static bool isInRange(SeaLevelTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<SeaLevelTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(SeaLevelTypes eIndex) {}
	template<>	static bool _isInRange<0>(SeaLevelTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(SeaLevelTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(SeaLevelTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<SeaLevelTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	SeaLevelTypes get(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 0));
	}
	SeaLevelTypes get0(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 0));
	}
	SeaLevelTypes getSeaLevel(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(SeaLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, SeaLevelTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	SeaLevelTypes get1(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 1));
	}
	SeaLevelTypes getSeaLevel(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(SeaLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, SeaLevelTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	SeaLevelTypes get2(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 2));
	}
	SeaLevelTypes getSeaLevel(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(SeaLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, SeaLevelTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	SeaLevelTypes get3(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 3));
	}
	SeaLevelTypes getSeaLevel(int iIndex) const
	{
		return static_cast<SeaLevelTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(SeaLevelTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline SpecialBuildingTypes operator+(const SpecialBuildingTypes& A, const SpecialBuildingTypes& B)
{
	return static_cast<SpecialBuildingTypes>((int)A + (int)B);
};
static inline SpecialBuildingTypes operator-(const SpecialBuildingTypes& A, const SpecialBuildingTypes& B)
{
	return static_cast<SpecialBuildingTypes>((int)A - (int)B);
};
static inline SpecialBuildingTypes& operator++(SpecialBuildingTypes& c)
{
	c = static_cast<SpecialBuildingTypes>(c + 1);
	return c;
};
static inline SpecialBuildingTypes operator++(SpecialBuildingTypes& c, int)
{
	SpecialBuildingTypes cache = c;
	c = static_cast<SpecialBuildingTypes>(c + 1);
	return cache;
};
static inline SpecialBuildingTypes& operator--(SpecialBuildingTypes& c)
{
	c = static_cast<SpecialBuildingTypes>(c - 1);
	return c;
};
static inline SpecialBuildingTypes operator--(SpecialBuildingTypes& c, int)
{
	SpecialBuildingTypes cache = c;
	c = static_cast<SpecialBuildingTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (SpecialBuildingTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, SpecialBuildingTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (SpecialBuildingTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, SpecialBuildingTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (SpecialBuildingTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, SpecialBuildingTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (SpecialBuildingTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, SpecialBuildingTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (SpecialBuildingTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, SpecialBuildingTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (SpecialBuildingTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, SpecialBuildingTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<SpecialBuildingTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_BUILDING_SPECIAL;
	static const SpecialBuildingTypes DEFAULT = static_cast<SpecialBuildingTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_SPECIALBUILDING_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_SPECIALBUILDING_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const SpecialBuildingTypes FIRST = static_cast<SpecialBuildingTypes>(0);
	static const SpecialBuildingTypes LAST = static_cast<SpecialBuildingTypes>((int)NUM_SPECIALBUILDING_TYPES - 1);
	static const SpecialBuildingTypes NUM_ELEMENTS = static_cast<SpecialBuildingTypes>((int)LAST - (int)FIRST + 1);
	static const SpecialBuildingTypes LENGTH = COMPILE_TIME_NUM_SPECIALBUILDING_TYPES;
	static SpecialBuildingTypes first() { return static_cast<SpecialBuildingTypes>(0);}
	static SpecialBuildingTypes last() { return NUM_SPECIALBUILDING_TYPES - static_cast<SpecialBuildingTypes>(1);}
	static SpecialBuildingTypes numElements() { return last() - first() + static_cast<SpecialBuildingTypes>(1);}
	static SpecialBuildingTypes start() { return static_cast<SpecialBuildingTypes>(0);}
	static SpecialBuildingTypes end() { return NUM_SPECIALBUILDING_TYPES;}
	static SpecialBuildingTypes length() { return end() - start();}
	static bool isInRange(SpecialBuildingTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<SpecialBuildingTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(SpecialBuildingTypes eIndex) {}
	template<>	static bool _isInRange<0>(SpecialBuildingTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(SpecialBuildingTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(SpecialBuildingTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<SpecialBuildingTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	SpecialBuildingTypes get(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 0));
	}
	SpecialBuildingTypes get0(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 0));
	}
	SpecialBuildingTypes getSpecialBuilding(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(SpecialBuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, SpecialBuildingTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	SpecialBuildingTypes get1(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 1));
	}
	SpecialBuildingTypes getSpecialBuilding(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(SpecialBuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, SpecialBuildingTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	SpecialBuildingTypes get2(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 2));
	}
	SpecialBuildingTypes getSpecialBuilding(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(SpecialBuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, SpecialBuildingTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	SpecialBuildingTypes get3(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 3));
	}
	SpecialBuildingTypes getSpecialBuilding(int iIndex) const
	{
		return static_cast<SpecialBuildingTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(SpecialBuildingTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline SpecialUnitTypes operator+(const SpecialUnitTypes& A, const SpecialUnitTypes& B)
{
	return static_cast<SpecialUnitTypes>((int)A + (int)B);
};
static inline SpecialUnitTypes operator-(const SpecialUnitTypes& A, const SpecialUnitTypes& B)
{
	return static_cast<SpecialUnitTypes>((int)A - (int)B);
};
static inline SpecialUnitTypes& operator++(SpecialUnitTypes& c)
{
	c = static_cast<SpecialUnitTypes>(c + 1);
	return c;
};
static inline SpecialUnitTypes operator++(SpecialUnitTypes& c, int)
{
	SpecialUnitTypes cache = c;
	c = static_cast<SpecialUnitTypes>(c + 1);
	return cache;
};
static inline SpecialUnitTypes& operator--(SpecialUnitTypes& c)
{
	c = static_cast<SpecialUnitTypes>(c - 1);
	return c;
};
static inline SpecialUnitTypes operator--(SpecialUnitTypes& c, int)
{
	SpecialUnitTypes cache = c;
	c = static_cast<SpecialUnitTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (SpecialUnitTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, SpecialUnitTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (SpecialUnitTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, SpecialUnitTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (SpecialUnitTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, SpecialUnitTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (SpecialUnitTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, SpecialUnitTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (SpecialUnitTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, SpecialUnitTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (SpecialUnitTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, SpecialUnitTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<SpecialUnitTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_UNIT_SPECIAL;
	static const SpecialUnitTypes DEFAULT = static_cast<SpecialUnitTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_SPECIALUNIT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_SPECIALUNIT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const SpecialUnitTypes FIRST = static_cast<SpecialUnitTypes>(0);
	static const SpecialUnitTypes LAST = static_cast<SpecialUnitTypes>((int)NUM_SPECIALUNIT_TYPES - 1);
	static const SpecialUnitTypes NUM_ELEMENTS = static_cast<SpecialUnitTypes>((int)LAST - (int)FIRST + 1);
	static const SpecialUnitTypes LENGTH = COMPILE_TIME_NUM_SPECIALUNIT_TYPES;
	static SpecialUnitTypes first() { return static_cast<SpecialUnitTypes>(0);}
	static SpecialUnitTypes last() { return NUM_SPECIALUNIT_TYPES - static_cast<SpecialUnitTypes>(1);}
	static SpecialUnitTypes numElements() { return last() - first() + static_cast<SpecialUnitTypes>(1);}
	static SpecialUnitTypes start() { return static_cast<SpecialUnitTypes>(0);}
	static SpecialUnitTypes end() { return NUM_SPECIALUNIT_TYPES;}
	static SpecialUnitTypes length() { return end() - start();}
	static bool isInRange(SpecialUnitTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<SpecialUnitTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(SpecialUnitTypes eIndex) {}
	template<>	static bool _isInRange<0>(SpecialUnitTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(SpecialUnitTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(SpecialUnitTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<SpecialUnitTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	SpecialUnitTypes get(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 0));
	}
	SpecialUnitTypes get0(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 0));
	}
	SpecialUnitTypes getSpecialUnit(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(SpecialUnitTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, SpecialUnitTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	SpecialUnitTypes get1(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 1));
	}
	SpecialUnitTypes getSpecialUnit(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(SpecialUnitTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, SpecialUnitTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	SpecialUnitTypes get2(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 2));
	}
	SpecialUnitTypes getSpecialUnit(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(SpecialUnitTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, SpecialUnitTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	SpecialUnitTypes get3(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 3));
	}
	SpecialUnitTypes getSpecialUnit(int iIndex) const
	{
		return static_cast<SpecialUnitTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(SpecialUnitTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline StrategyTypes operator+(const StrategyTypes& A, const StrategyTypes& B)
{
	return static_cast<StrategyTypes>((int)A + (int)B);
};
static inline StrategyTypes operator-(const StrategyTypes& A, const StrategyTypes& B)
{
	return static_cast<StrategyTypes>((int)A - (int)B);
};
static inline StrategyTypes& operator++(StrategyTypes& c)
{
	c = static_cast<StrategyTypes>(c + 1);
	return c;
};
static inline StrategyTypes operator++(StrategyTypes& c, int)
{
	StrategyTypes cache = c;
	c = static_cast<StrategyTypes>(c + 1);
	return cache;
};
static inline StrategyTypes& operator--(StrategyTypes& c)
{
	c = static_cast<StrategyTypes>(c - 1);
	return c;
};
static inline StrategyTypes operator--(StrategyTypes& c, int)
{
	StrategyTypes cache = c;
	c = static_cast<StrategyTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (StrategyTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, StrategyTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (StrategyTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, StrategyTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (StrategyTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, StrategyTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (StrategyTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, StrategyTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (StrategyTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, StrategyTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (StrategyTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, StrategyTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<StrategyTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_STRATEGY;
	static const StrategyTypes DEFAULT = static_cast<StrategyTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_STRATEGY_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_STRATEGY_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const StrategyTypes FIRST = static_cast<StrategyTypes>(0);
	static const StrategyTypes LAST = static_cast<StrategyTypes>((int)NUM_STRATEGY_TYPES - 1);
	static const StrategyTypes NUM_ELEMENTS = static_cast<StrategyTypes>((int)LAST - (int)FIRST + 1);
	static const StrategyTypes LENGTH = COMPILE_TIME_NUM_STRATEGY_TYPES;
	static StrategyTypes first() { return static_cast<StrategyTypes>(0);}
	static StrategyTypes last() { return NUM_STRATEGY_TYPES - static_cast<StrategyTypes>(1);}
	static StrategyTypes numElements() { return last() - first() + static_cast<StrategyTypes>(1);}
	static StrategyTypes start() { return static_cast<StrategyTypes>(0);}
	static StrategyTypes end() { return NUM_STRATEGY_TYPES;}
	static StrategyTypes length() { return end() - start();}
	static bool isInRange(StrategyTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<StrategyTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(StrategyTypes eIndex) {}
	template<>	static bool _isInRange<0>(StrategyTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(StrategyTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(StrategyTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<StrategyTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	StrategyTypes get(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 0));
	}
	StrategyTypes get0(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 0));
	}
	StrategyTypes getStrategy(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(StrategyTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, StrategyTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	StrategyTypes get1(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 1));
	}
	StrategyTypes getStrategy(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(StrategyTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, StrategyTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	StrategyTypes get2(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 2));
	}
	StrategyTypes getStrategy(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(StrategyTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, StrategyTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	StrategyTypes get3(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 3));
	}
	StrategyTypes getStrategy(int iIndex) const
	{
		return static_cast<StrategyTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(StrategyTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline TeamTypes operator+(const TeamTypes& A, const TeamTypes& B)
{
	return static_cast<TeamTypes>((int)A + (int)B);
};
static inline TeamTypes operator-(const TeamTypes& A, const TeamTypes& B)
{
	return static_cast<TeamTypes>((int)A - (int)B);
};
static inline TeamTypes& operator++(TeamTypes& c)
{
	c = static_cast<TeamTypes>(c + 1);
	return c;
};
static inline TeamTypes operator++(TeamTypes& c, int)
{
	TeamTypes cache = c;
	c = static_cast<TeamTypes>(c + 1);
	return cache;
};
static inline TeamTypes& operator--(TeamTypes& c)
{
	c = static_cast<TeamTypes>(c - 1);
	return c;
};
static inline TeamTypes operator--(TeamTypes& c, int)
{
	TeamTypes cache = c;
	c = static_cast<TeamTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (TeamTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, TeamTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (TeamTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, TeamTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (TeamTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, TeamTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (TeamTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, TeamTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (TeamTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, TeamTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (TeamTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, TeamTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<TeamTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_TEAM;
	static const TeamTypes DEFAULT = static_cast<TeamTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_TEAM_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_TEAM_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const TeamTypes FIRST = static_cast<TeamTypes>(0);
	static const TeamTypes LAST = static_cast<TeamTypes>((int)NUM_TEAM_TYPES - 1);
	static const TeamTypes NUM_ELEMENTS = static_cast<TeamTypes>((int)LAST - (int)FIRST + 1);
	static const TeamTypes LENGTH = COMPILE_TIME_NUM_TEAM_TYPES;
	static TeamTypes first() { return static_cast<TeamTypes>(0);}
	static TeamTypes last() { return NUM_TEAM_TYPES - static_cast<TeamTypes>(1);}
	static TeamTypes numElements() { return last() - first() + static_cast<TeamTypes>(1);}
	static TeamTypes start() { return static_cast<TeamTypes>(0);}
	static TeamTypes end() { return NUM_TEAM_TYPES;}
	static TeamTypes length() { return end() - start();}
	static bool isInRange(TeamTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<TeamTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(TeamTypes eIndex) {}
	template<>	static bool _isInRange<0>(TeamTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(TeamTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(TeamTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<TeamTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	TeamTypes get(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 0));
	}
	TeamTypes get0(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 0));
	}
	TeamTypes getTeam(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(TeamTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, TeamTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	TeamTypes get1(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 1));
	}
	TeamTypes getTeam(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(TeamTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, TeamTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	TeamTypes get2(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 2));
	}
	TeamTypes getTeam(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(TeamTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, TeamTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	TeamTypes get3(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 3));
	}
	TeamTypes getTeam(int iIndex) const
	{
		return static_cast<TeamTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(TeamTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline TerrainTypes operator+(const TerrainTypes& A, const TerrainTypes& B)
{
	return static_cast<TerrainTypes>((int)A + (int)B);
};
static inline TerrainTypes operator-(const TerrainTypes& A, const TerrainTypes& B)
{
	return static_cast<TerrainTypes>((int)A - (int)B);
};
static inline TerrainTypes& operator++(TerrainTypes& c)
{
	c = static_cast<TerrainTypes>(c + 1);
	return c;
};
static inline TerrainTypes operator++(TerrainTypes& c, int)
{
	TerrainTypes cache = c;
	c = static_cast<TerrainTypes>(c + 1);
	return cache;
};
static inline TerrainTypes& operator--(TerrainTypes& c)
{
	c = static_cast<TerrainTypes>(c - 1);
	return c;
};
static inline TerrainTypes operator--(TerrainTypes& c, int)
{
	TerrainTypes cache = c;
	c = static_cast<TerrainTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (TerrainTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, TerrainTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (TerrainTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, TerrainTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (TerrainTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, TerrainTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (TerrainTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, TerrainTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (TerrainTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, TerrainTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (TerrainTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, TerrainTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<TerrainTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_TERRAIN;
	static const TerrainTypes DEFAULT = static_cast<TerrainTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_TERRAIN_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_TERRAIN_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const TerrainTypes FIRST = static_cast<TerrainTypes>(0);
	static const TerrainTypes LAST = static_cast<TerrainTypes>((int)NUM_TERRAIN_TYPES - 1);
	static const TerrainTypes NUM_ELEMENTS = static_cast<TerrainTypes>((int)LAST - (int)FIRST + 1);
	static const TerrainTypes LENGTH = COMPILE_TIME_NUM_TERRAIN_TYPES;
	static TerrainTypes first() { return static_cast<TerrainTypes>(0);}
	static TerrainTypes last() { return NUM_TERRAIN_TYPES - static_cast<TerrainTypes>(1);}
	static TerrainTypes numElements() { return last() - first() + static_cast<TerrainTypes>(1);}
	static TerrainTypes start() { return static_cast<TerrainTypes>(0);}
	static TerrainTypes end() { return NUM_TERRAIN_TYPES;}
	static TerrainTypes length() { return end() - start();}
	static bool isInRange(TerrainTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<TerrainTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(TerrainTypes eIndex) {}
	template<>	static bool _isInRange<0>(TerrainTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(TerrainTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(TerrainTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<TerrainTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	TerrainTypes get(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 0));
	}
	TerrainTypes get0(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 0));
	}
	TerrainTypes getTerrain(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(TerrainTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, TerrainTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	TerrainTypes get1(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 1));
	}
	TerrainTypes getTerrain(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(TerrainTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, TerrainTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	TerrainTypes get2(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 2));
	}
	TerrainTypes getTerrain(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(TerrainTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, TerrainTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	TerrainTypes get3(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 3));
	}
	TerrainTypes getTerrain(int iIndex) const
	{
		return static_cast<TerrainTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(TerrainTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline TraitTypes operator+(const TraitTypes& A, const TraitTypes& B)
{
	return static_cast<TraitTypes>((int)A + (int)B);
};
static inline TraitTypes operator-(const TraitTypes& A, const TraitTypes& B)
{
	return static_cast<TraitTypes>((int)A - (int)B);
};
static inline TraitTypes& operator++(TraitTypes& c)
{
	c = static_cast<TraitTypes>(c + 1);
	return c;
};
static inline TraitTypes operator++(TraitTypes& c, int)
{
	TraitTypes cache = c;
	c = static_cast<TraitTypes>(c + 1);
	return cache;
};
static inline TraitTypes& operator--(TraitTypes& c)
{
	c = static_cast<TraitTypes>(c - 1);
	return c;
};
static inline TraitTypes operator--(TraitTypes& c, int)
{
	TraitTypes cache = c;
	c = static_cast<TraitTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (TraitTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<TraitTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, TraitTypes b)
{
	const bool bTypeCheck = boost::is_same<T, TraitTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (TraitTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<TraitTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, TraitTypes b)
{
	const bool bTypeCheck = boost::is_same<T, TraitTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (TraitTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<TraitTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, TraitTypes b)
{
	const bool bTypeCheck = boost::is_same<T, TraitTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (TraitTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<TraitTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, TraitTypes b)
{
	const bool bTypeCheck = boost::is_same<T, TraitTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (TraitTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<TraitTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, TraitTypes b)
{
	const bool bTypeCheck = boost::is_same<T, TraitTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (TraitTypes a, T b)
{
	const bool bTypeCheck = boost::is_same<TraitTypes, T>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, TraitTypes b)
{
	const bool bTypeCheck = boost::is_same<T, TraitTypes>::value;
	BOOST_STATIC_ASSERT(bTypeCheck);
	return (int)a <= (int)b;
};
template <> struct VARINFO<TraitTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_TRAIT;
	static const TraitTypes DEFAULT = static_cast<TraitTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_TRAIT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_TRAIT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const TraitTypes FIRST = static_cast<TraitTypes>(0);
	static const TraitTypes LAST = static_cast<TraitTypes>((int)NUM_TRAIT_TYPES - 1);
	static const TraitTypes NUM_ELEMENTS = static_cast<TraitTypes>((int)LAST - (int)FIRST + 1);
	static const TraitTypes LENGTH = COMPILE_TIME_NUM_TRAIT_TYPES;
	static TraitTypes first() { return static_cast<TraitTypes>(0);}
	static TraitTypes last() { return NUM_TRAIT_TYPES - static_cast<TraitTypes>(1);}
	static TraitTypes numElements() { return last() - first() + static_cast<TraitTypes>(1);}
	static TraitTypes start() { return static_cast<TraitTypes>(0);}
	static TraitTypes end() { return NUM_TRAIT_TYPES;}
	static TraitTypes length() { return end() - start();}
	static bool isInRange(TraitTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<TraitTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(TraitTypes eIndex) {}
	template<>	static bool _isInRange<0>(TraitTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(TraitTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(TraitTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<TraitTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	TraitTypes get(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 0));
	}
	TraitTypes get0(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 0));
	}
	TraitTypes getTrait(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(TraitTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, TraitTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	TraitTypes get1(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 1));
	}
	TraitTypes getTrait(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(TraitTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, TraitTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	TraitTypes get2(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 2));
	}
	TraitTypes getTrait(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(TraitTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, TraitTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	TraitTypes get3(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 3));
	}
	TraitTypes getTrait(int iIndex) const
	{
		return static_cast<TraitTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(TraitTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline UnitTypes operator+(const UnitTypes& A, const UnitTypes& B)
{
	return static_cast<UnitTypes>((int)A + (int)B);
};
static inline UnitTypes operator-(const UnitTypes& A, const UnitTypes& B)
{
	return static_cast<UnitTypes>((int)A - (int)B);
};
static inline UnitTypes& operator++(UnitTypes& c)
{
	c = static_cast<UnitTypes>(c + 1);
	return c;
};
static inline UnitTypes operator++(UnitTypes& c, int)
{
	UnitTypes cache = c;
	c = static_cast<UnitTypes>(c + 1);
	return cache;
};
static inline UnitTypes& operator--(UnitTypes& c)
{
	c = static_cast<UnitTypes>(c - 1);
	return c;
};
static inline UnitTypes operator--(UnitTypes& c, int)
{
	UnitTypes cache = c;
	c = static_cast<UnitTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (UnitTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, UnitTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (UnitTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, UnitTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (UnitTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, UnitTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (UnitTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, UnitTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (UnitTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, UnitTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (UnitTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, UnitTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<UnitTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_UNIT;
	static const UnitTypes DEFAULT = static_cast<UnitTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_UNIT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_UNIT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const UnitTypes FIRST = static_cast<UnitTypes>(0);
	static const UnitTypes LAST = static_cast<UnitTypes>((int)NUM_UNIT_TYPES - 1);
	static const UnitTypes NUM_ELEMENTS = static_cast<UnitTypes>((int)LAST - (int)FIRST + 1);
	static const UnitTypes LENGTH = COMPILE_TIME_NUM_UNIT_TYPES;
	static UnitTypes first() { return static_cast<UnitTypes>(0);}
	static UnitTypes last() { return NUM_UNIT_TYPES - static_cast<UnitTypes>(1);}
	static UnitTypes numElements() { return last() - first() + static_cast<UnitTypes>(1);}
	static UnitTypes start() { return static_cast<UnitTypes>(0);}
	static UnitTypes end() { return NUM_UNIT_TYPES;}
	static UnitTypes length() { return end() - start();}
	static bool isInRange(UnitTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<UnitTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(UnitTypes eIndex) {}
	template<>	static bool _isInRange<0>(UnitTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(UnitTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(UnitTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<UnitTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	UnitTypes get(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 0));
	}
	UnitTypes get0(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 0));
	}
	UnitTypes getUnit(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(UnitTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, UnitTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	UnitTypes get1(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 1));
	}
	UnitTypes getUnit(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(UnitTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, UnitTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	UnitTypes get2(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 2));
	}
	UnitTypes getUnit(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(UnitTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, UnitTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	UnitTypes get3(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 3));
	}
	UnitTypes getUnit(int iIndex) const
	{
		return static_cast<UnitTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(UnitTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline UnitAITypes operator+(const UnitAITypes& A, const UnitAITypes& B)
{
	return static_cast<UnitAITypes>((int)A + (int)B);
};
static inline UnitAITypes operator-(const UnitAITypes& A, const UnitAITypes& B)
{
	return static_cast<UnitAITypes>((int)A - (int)B);
};
static inline UnitAITypes& operator++(UnitAITypes& c)
{
	c = static_cast<UnitAITypes>(c + 1);
	return c;
};
static inline UnitAITypes operator++(UnitAITypes& c, int)
{
	UnitAITypes cache = c;
	c = static_cast<UnitAITypes>(c + 1);
	return cache;
};
static inline UnitAITypes& operator--(UnitAITypes& c)
{
	c = static_cast<UnitAITypes>(c - 1);
	return c;
};
static inline UnitAITypes operator--(UnitAITypes& c, int)
{
	UnitAITypes cache = c;
	c = static_cast<UnitAITypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (UnitAITypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, UnitAITypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (UnitAITypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, UnitAITypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (UnitAITypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, UnitAITypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (UnitAITypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, UnitAITypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (UnitAITypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, UnitAITypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (UnitAITypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, UnitAITypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<UnitAITypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_UNITAI;
	static const UnitAITypes DEFAULT = static_cast<UnitAITypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_UNITAI_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_UNITAI_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const UnitAITypes FIRST = static_cast<UnitAITypes>(0);
	static const UnitAITypes LAST = static_cast<UnitAITypes>((int)NUM_UNITAI_TYPES - 1);
	static const UnitAITypes NUM_ELEMENTS = static_cast<UnitAITypes>((int)LAST - (int)FIRST + 1);
	static const UnitAITypes LENGTH = COMPILE_TIME_NUM_UNITAI_TYPES;
	static UnitAITypes first() { return static_cast<UnitAITypes>(0);}
	static UnitAITypes last() { return NUM_UNITAI_TYPES - static_cast<UnitAITypes>(1);}
	static UnitAITypes numElements() { return last() - first() + static_cast<UnitAITypes>(1);}
	static UnitAITypes start() { return static_cast<UnitAITypes>(0);}
	static UnitAITypes end() { return NUM_UNITAI_TYPES;}
	static UnitAITypes length() { return end() - start();}
	static bool isInRange(UnitAITypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<UnitAITypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(UnitAITypes eIndex) {}
	template<>	static bool _isInRange<0>(UnitAITypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(UnitAITypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(UnitAITypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<UnitAITypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	UnitAITypes get(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 0));
	}
	UnitAITypes get0(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 0));
	}
	UnitAITypes getUnitAI(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(UnitAITypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, UnitAITypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	UnitAITypes get1(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 1));
	}
	UnitAITypes getUnitAI(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(UnitAITypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, UnitAITypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	UnitAITypes get2(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 2));
	}
	UnitAITypes getUnitAI(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(UnitAITypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, UnitAITypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	UnitAITypes get3(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 3));
	}
	UnitAITypes getUnitAI(int iIndex) const
	{
		return static_cast<UnitAITypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(UnitAITypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline UnitClassTypes operator+(const UnitClassTypes& A, const UnitClassTypes& B)
{
	return static_cast<UnitClassTypes>((int)A + (int)B);
};
static inline UnitClassTypes operator-(const UnitClassTypes& A, const UnitClassTypes& B)
{
	return static_cast<UnitClassTypes>((int)A - (int)B);
};
static inline UnitClassTypes& operator++(UnitClassTypes& c)
{
	c = static_cast<UnitClassTypes>(c + 1);
	return c;
};
static inline UnitClassTypes operator++(UnitClassTypes& c, int)
{
	UnitClassTypes cache = c;
	c = static_cast<UnitClassTypes>(c + 1);
	return cache;
};
static inline UnitClassTypes& operator--(UnitClassTypes& c)
{
	c = static_cast<UnitClassTypes>(c - 1);
	return c;
};
static inline UnitClassTypes operator--(UnitClassTypes& c, int)
{
	UnitClassTypes cache = c;
	c = static_cast<UnitClassTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (UnitClassTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, UnitClassTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (UnitClassTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, UnitClassTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (UnitClassTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, UnitClassTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (UnitClassTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, UnitClassTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (UnitClassTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, UnitClassTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (UnitClassTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, UnitClassTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<UnitClassTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_UNITCLASS;
	static const UnitClassTypes DEFAULT = static_cast<UnitClassTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_UNITCLASS_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_UNITCLASS_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const UnitClassTypes FIRST = static_cast<UnitClassTypes>(0);
	static const UnitClassTypes LAST = static_cast<UnitClassTypes>((int)NUM_UNITCLASS_TYPES - 1);
	static const UnitClassTypes NUM_ELEMENTS = static_cast<UnitClassTypes>((int)LAST - (int)FIRST + 1);
	static const UnitClassTypes LENGTH = COMPILE_TIME_NUM_UNITCLASS_TYPES;
	static UnitClassTypes first() { return static_cast<UnitClassTypes>(0);}
	static UnitClassTypes last() { return NUM_UNITCLASS_TYPES - static_cast<UnitClassTypes>(1);}
	static UnitClassTypes numElements() { return last() - first() + static_cast<UnitClassTypes>(1);}
	static UnitClassTypes start() { return static_cast<UnitClassTypes>(0);}
	static UnitClassTypes end() { return NUM_UNITCLASS_TYPES;}
	static UnitClassTypes length() { return end() - start();}
	static bool isInRange(UnitClassTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<UnitClassTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(UnitClassTypes eIndex) {}
	template<>	static bool _isInRange<0>(UnitClassTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(UnitClassTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(UnitClassTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<UnitClassTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	UnitClassTypes get(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 0));
	}
	UnitClassTypes get0(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 0));
	}
	UnitClassTypes getUnitClass(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(UnitClassTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, UnitClassTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	UnitClassTypes get1(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 1));
	}
	UnitClassTypes getUnitClass(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(UnitClassTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, UnitClassTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	UnitClassTypes get2(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 2));
	}
	UnitClassTypes getUnitClass(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(UnitClassTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, UnitClassTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	UnitClassTypes get3(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 3));
	}
	UnitClassTypes getUnitClass(int iIndex) const
	{
		return static_cast<UnitClassTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(UnitClassTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline UnitCombatTypes operator+(const UnitCombatTypes& A, const UnitCombatTypes& B)
{
	return static_cast<UnitCombatTypes>((int)A + (int)B);
};
static inline UnitCombatTypes operator-(const UnitCombatTypes& A, const UnitCombatTypes& B)
{
	return static_cast<UnitCombatTypes>((int)A - (int)B);
};
static inline UnitCombatTypes& operator++(UnitCombatTypes& c)
{
	c = static_cast<UnitCombatTypes>(c + 1);
	return c;
};
static inline UnitCombatTypes operator++(UnitCombatTypes& c, int)
{
	UnitCombatTypes cache = c;
	c = static_cast<UnitCombatTypes>(c + 1);
	return cache;
};
static inline UnitCombatTypes& operator--(UnitCombatTypes& c)
{
	c = static_cast<UnitCombatTypes>(c - 1);
	return c;
};
static inline UnitCombatTypes operator--(UnitCombatTypes& c, int)
{
	UnitCombatTypes cache = c;
	c = static_cast<UnitCombatTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (UnitCombatTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, UnitCombatTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (UnitCombatTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, UnitCombatTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (UnitCombatTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, UnitCombatTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (UnitCombatTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, UnitCombatTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (UnitCombatTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, UnitCombatTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (UnitCombatTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, UnitCombatTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<UnitCombatTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_UNITCOMBAT;
	static const UnitCombatTypes DEFAULT = static_cast<UnitCombatTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_UNITCOMBAT_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_UNITCOMBAT_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const UnitCombatTypes FIRST = static_cast<UnitCombatTypes>(0);
	static const UnitCombatTypes LAST = static_cast<UnitCombatTypes>((int)NUM_UNITCOMBAT_TYPES - 1);
	static const UnitCombatTypes NUM_ELEMENTS = static_cast<UnitCombatTypes>((int)LAST - (int)FIRST + 1);
	static const UnitCombatTypes LENGTH = COMPILE_TIME_NUM_UNITCOMBAT_TYPES;
	static UnitCombatTypes first() { return static_cast<UnitCombatTypes>(0);}
	static UnitCombatTypes last() { return NUM_UNITCOMBAT_TYPES - static_cast<UnitCombatTypes>(1);}
	static UnitCombatTypes numElements() { return last() - first() + static_cast<UnitCombatTypes>(1);}
	static UnitCombatTypes start() { return static_cast<UnitCombatTypes>(0);}
	static UnitCombatTypes end() { return NUM_UNITCOMBAT_TYPES;}
	static UnitCombatTypes length() { return end() - start();}
	static bool isInRange(UnitCombatTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<UnitCombatTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(UnitCombatTypes eIndex) {}
	template<>	static bool _isInRange<0>(UnitCombatTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(UnitCombatTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(UnitCombatTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<UnitCombatTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	UnitCombatTypes get(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 0));
	}
	UnitCombatTypes get0(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 0));
	}
	UnitCombatTypes getUnitCombat(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(UnitCombatTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, UnitCombatTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	UnitCombatTypes get1(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 1));
	}
	UnitCombatTypes getUnitCombat(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(UnitCombatTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, UnitCombatTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	UnitCombatTypes get2(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 2));
	}
	UnitCombatTypes getUnitCombat(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(UnitCombatTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, UnitCombatTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	UnitCombatTypes get3(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 3));
	}
	UnitCombatTypes getUnitCombat(int iIndex) const
	{
		return static_cast<UnitCombatTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(UnitCombatTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline VictoryTypes operator+(const VictoryTypes& A, const VictoryTypes& B)
{
	return static_cast<VictoryTypes>((int)A + (int)B);
};
static inline VictoryTypes operator-(const VictoryTypes& A, const VictoryTypes& B)
{
	return static_cast<VictoryTypes>((int)A - (int)B);
};
static inline VictoryTypes& operator++(VictoryTypes& c)
{
	c = static_cast<VictoryTypes>(c + 1);
	return c;
};
static inline VictoryTypes operator++(VictoryTypes& c, int)
{
	VictoryTypes cache = c;
	c = static_cast<VictoryTypes>(c + 1);
	return cache;
};
static inline VictoryTypes& operator--(VictoryTypes& c)
{
	c = static_cast<VictoryTypes>(c - 1);
	return c;
};
static inline VictoryTypes operator--(VictoryTypes& c, int)
{
	VictoryTypes cache = c;
	c = static_cast<VictoryTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (VictoryTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, VictoryTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (VictoryTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, VictoryTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (VictoryTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, VictoryTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (VictoryTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, VictoryTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (VictoryTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, VictoryTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (VictoryTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, VictoryTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<VictoryTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_VICTORY;
	static const VictoryTypes DEFAULT = static_cast<VictoryTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_VICTORY_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_VICTORY_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const VictoryTypes FIRST = static_cast<VictoryTypes>(0);
	static const VictoryTypes LAST = static_cast<VictoryTypes>((int)NUM_VICTORY_TYPES - 1);
	static const VictoryTypes NUM_ELEMENTS = static_cast<VictoryTypes>((int)LAST - (int)FIRST + 1);
	static const VictoryTypes LENGTH = COMPILE_TIME_NUM_VICTORY_TYPES;
	static VictoryTypes first() { return static_cast<VictoryTypes>(0);}
	static VictoryTypes last() { return NUM_VICTORY_TYPES - static_cast<VictoryTypes>(1);}
	static VictoryTypes numElements() { return last() - first() + static_cast<VictoryTypes>(1);}
	static VictoryTypes start() { return static_cast<VictoryTypes>(0);}
	static VictoryTypes end() { return NUM_VICTORY_TYPES;}
	static VictoryTypes length() { return end() - start();}
	static bool isInRange(VictoryTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<VictoryTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(VictoryTypes eIndex) {}
	template<>	static bool _isInRange<0>(VictoryTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(VictoryTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(VictoryTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<VictoryTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	VictoryTypes get(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 0));
	}
	VictoryTypes get0(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 0));
	}
	VictoryTypes getVictory(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(VictoryTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, VictoryTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	VictoryTypes get1(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 1));
	}
	VictoryTypes getVictory(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(VictoryTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, VictoryTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	VictoryTypes get2(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 2));
	}
	VictoryTypes getVictory(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(VictoryTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, VictoryTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	VictoryTypes get3(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 3));
	}
	VictoryTypes getVictory(int iIndex) const
	{
		return static_cast<VictoryTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(VictoryTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline WarPlanTypes operator+(const WarPlanTypes& A, const WarPlanTypes& B)
{
	return static_cast<WarPlanTypes>((int)A + (int)B);
};
static inline WarPlanTypes operator-(const WarPlanTypes& A, const WarPlanTypes& B)
{
	return static_cast<WarPlanTypes>((int)A - (int)B);
};
static inline WarPlanTypes& operator++(WarPlanTypes& c)
{
	c = static_cast<WarPlanTypes>(c + 1);
	return c;
};
static inline WarPlanTypes operator++(WarPlanTypes& c, int)
{
	WarPlanTypes cache = c;
	c = static_cast<WarPlanTypes>(c + 1);
	return cache;
};
static inline WarPlanTypes& operator--(WarPlanTypes& c)
{
	c = static_cast<WarPlanTypes>(c - 1);
	return c;
};
static inline WarPlanTypes operator--(WarPlanTypes& c, int)
{
	WarPlanTypes cache = c;
	c = static_cast<WarPlanTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (WarPlanTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, WarPlanTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (WarPlanTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, WarPlanTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (WarPlanTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, WarPlanTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (WarPlanTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, WarPlanTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (WarPlanTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, WarPlanTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (WarPlanTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, WarPlanTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<WarPlanTypes>
{
	static const JITarrayTypes JIT = NO_JIT_ARRAY_TYPE;
	static const WarPlanTypes DEFAULT = static_cast<WarPlanTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_WARPLAN_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_WARPLAN_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const WarPlanTypes FIRST = static_cast<WarPlanTypes>(0);
	static const WarPlanTypes LAST = static_cast<WarPlanTypes>((int)NUM_WARPLAN_TYPES - 1);
	static const WarPlanTypes NUM_ELEMENTS = static_cast<WarPlanTypes>((int)LAST - (int)FIRST + 1);
	static const WarPlanTypes LENGTH = COMPILE_TIME_NUM_WARPLAN_TYPES;
	static WarPlanTypes first() { return static_cast<WarPlanTypes>(0);}
	static WarPlanTypes last() { return NUM_WARPLAN_TYPES - static_cast<WarPlanTypes>(1);}
	static WarPlanTypes numElements() { return last() - first() + static_cast<WarPlanTypes>(1);}
	static WarPlanTypes start() { return static_cast<WarPlanTypes>(0);}
	static WarPlanTypes end() { return NUM_WARPLAN_TYPES;}
	static WarPlanTypes length() { return end() - start();}
	static bool isInRange(WarPlanTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<WarPlanTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(WarPlanTypes eIndex) {}
	template<>	static bool _isInRange<0>(WarPlanTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(WarPlanTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(WarPlanTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};

static inline WorldSizeTypes operator+(const WorldSizeTypes& A, const WorldSizeTypes& B)
{
	return static_cast<WorldSizeTypes>((int)A + (int)B);
};
static inline WorldSizeTypes operator-(const WorldSizeTypes& A, const WorldSizeTypes& B)
{
	return static_cast<WorldSizeTypes>((int)A - (int)B);
};
static inline WorldSizeTypes& operator++(WorldSizeTypes& c)
{
	c = static_cast<WorldSizeTypes>(c + 1);
	return c;
};
static inline WorldSizeTypes operator++(WorldSizeTypes& c, int)
{
	WorldSizeTypes cache = c;
	c = static_cast<WorldSizeTypes>(c + 1);
	return cache;
};
static inline WorldSizeTypes& operator--(WorldSizeTypes& c)
{
	c = static_cast<WorldSizeTypes>(c - 1);
	return c;
};
static inline WorldSizeTypes operator--(WorldSizeTypes& c, int)
{
	WorldSizeTypes cache = c;
	c = static_cast<WorldSizeTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (WorldSizeTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, WorldSizeTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (WorldSizeTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, WorldSizeTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (WorldSizeTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, WorldSizeTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (WorldSizeTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, WorldSizeTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (WorldSizeTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, WorldSizeTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (WorldSizeTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, WorldSizeTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<WorldSizeTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_WORLD_SIZE;
	static const WorldSizeTypes DEFAULT = static_cast<WorldSizeTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_WORLDSIZE_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_WORLDSIZE_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const WorldSizeTypes FIRST = static_cast<WorldSizeTypes>(0);
	static const WorldSizeTypes LAST = static_cast<WorldSizeTypes>((int)NUM_WORLDSIZE_TYPES - 1);
	static const WorldSizeTypes NUM_ELEMENTS = static_cast<WorldSizeTypes>((int)LAST - (int)FIRST + 1);
	static const WorldSizeTypes LENGTH = COMPILE_TIME_NUM_WORLDSIZE_TYPES;
	static WorldSizeTypes first() { return static_cast<WorldSizeTypes>(0);}
	static WorldSizeTypes last() { return NUM_WORLDSIZE_TYPES - static_cast<WorldSizeTypes>(1);}
	static WorldSizeTypes numElements() { return last() - first() + static_cast<WorldSizeTypes>(1);}
	static WorldSizeTypes start() { return static_cast<WorldSizeTypes>(0);}
	static WorldSizeTypes end() { return NUM_WORLDSIZE_TYPES;}
	static WorldSizeTypes length() { return end() - start();}
	static bool isInRange(WorldSizeTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<WorldSizeTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(WorldSizeTypes eIndex) {}
	template<>	static bool _isInRange<0>(WorldSizeTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(WorldSizeTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(WorldSizeTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<WorldSizeTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	WorldSizeTypes get(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 0));
	}
	WorldSizeTypes get0(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 0));
	}
	WorldSizeTypes getWorldSize(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(WorldSizeTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, WorldSizeTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	WorldSizeTypes get1(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 1));
	}
	WorldSizeTypes getWorldSize(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(WorldSizeTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, WorldSizeTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	WorldSizeTypes get2(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 2));
	}
	WorldSizeTypes getWorldSize(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(WorldSizeTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, WorldSizeTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	WorldSizeTypes get3(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 3));
	}
	WorldSizeTypes getWorldSize(int iIndex) const
	{
		return static_cast<WorldSizeTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(WorldSizeTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

static inline YieldTypes operator+(const YieldTypes& A, const YieldTypes& B)
{
	return static_cast<YieldTypes>((int)A + (int)B);
};
static inline YieldTypes operator-(const YieldTypes& A, const YieldTypes& B)
{
	return static_cast<YieldTypes>((int)A - (int)B);
};
static inline YieldTypes& operator++(YieldTypes& c)
{
	c = static_cast<YieldTypes>(c + 1);
	return c;
};
static inline YieldTypes operator++(YieldTypes& c, int)
{
	YieldTypes cache = c;
	c = static_cast<YieldTypes>(c + 1);
	return cache;
};
static inline YieldTypes& operator--(YieldTypes& c)
{
	c = static_cast<YieldTypes>(c - 1);
	return c;
};
static inline YieldTypes operator--(YieldTypes& c, int)
{
	YieldTypes cache = c;
	c = static_cast<YieldTypes>(c - 1);
	return cache;
};
template <typename T>
static inline bool operator == (YieldTypes a, T b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator == (T a, YieldTypes b)
{
	return (int)a == (int)b;
};
template <typename T>
static inline bool operator != (YieldTypes a, T b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator != (T a, YieldTypes b)
{
	return (int)a != (int)b;
};
template <typename T>
static inline bool operator >  (YieldTypes a, T b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator >  (T a, YieldTypes b)
{
	return (int)a >  (int)b;
};
template <typename T>
static inline bool operator <  (YieldTypes a, T b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator <  (T a, YieldTypes b)
{
	return (int)a <  (int)b;
};
template <typename T>
static inline bool operator >= (YieldTypes a, T b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator >= (T a, YieldTypes b)
{
	return (int)a >= (int)b;
};
template <typename T>
static inline bool operator <= (YieldTypes a, T b)
{
	return (int)a <= (int)b;
};
template <typename T>
static inline bool operator <= (T a, YieldTypes b)
{
	return (int)a <= (int)b;
};
template <> struct VARINFO<YieldTypes>
{
	static const JITarrayTypes JIT = JIT_ARRAY_YIELD;
	static const YieldTypes DEFAULT = static_cast<YieldTypes>(-1);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = (int)COMPILE_TIME_NUM_YIELD_TYPES < 128 ? VARIABLE_TYPE_CHAR : VARIABLE_TYPE_SHORT;
	static const VariableLengthTypes LENGTH_KNOWN_WHILE_COMPILING = (int)COMPILE_TIME_NUM_YIELD_TYPES != MAX_SHORT ? VARIABLE_LENGTH_ALL_KNOWN : VARIABLE_LENGTH_FIRST_KNOWN;
	static const YieldTypes FIRST = static_cast<YieldTypes>(0);
	static const YieldTypes LAST = static_cast<YieldTypes>((int)NUM_YIELD_TYPES - 1);
	static const YieldTypes NUM_ELEMENTS = static_cast<YieldTypes>((int)LAST - (int)FIRST + 1);
	static const YieldTypes LENGTH = COMPILE_TIME_NUM_YIELD_TYPES;
	static YieldTypes first() { return static_cast<YieldTypes>(0);}
	static YieldTypes last() { return NUM_YIELD_TYPES - static_cast<YieldTypes>(1);}
	static YieldTypes numElements() { return last() - first() + static_cast<YieldTypes>(1);}
	static YieldTypes start() { return static_cast<YieldTypes>(0);}
	static YieldTypes end() { return NUM_YIELD_TYPES;}
	static YieldTypes length() { return end() - start();}
	static bool isInRange(YieldTypes eIndex) { return _isInRange<LENGTH_KNOWN_WHILE_COMPILING>(eIndex);}
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = T * ((int)TYPE == (int)VARIABLE_TYPE_CHAR ? 1 : 2) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = boost::is_same<YieldTypes, T>::VAL;
	};
protected:
	template<int KNOWN>	static bool _isInRange(YieldTypes eIndex) {}
	template<>	static bool _isInRange<0>(YieldTypes eIndex) { return eIndex >= first() && eIndex <= last(); }
	template<>	static bool _isInRange<1>(YieldTypes eIndex) { return eIndex >= FIRST && eIndex <= last(); }
	template<>	static bool _isInRange<2>(YieldTypes eIndex) { return eIndex >= FIRST && eIndex <= LAST; }
};
template<>
class InfoArray1<YieldTypes>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	YieldTypes get(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 0));
	}
	YieldTypes get0(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 0));
	}
	YieldTypes getYield(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 0));
	}
	int getIndexOf(YieldTypes eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, YieldTypes>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	YieldTypes get1(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 1));
	}
	YieldTypes getYield(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 1));
	}
	int getIndexOf(YieldTypes eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, YieldTypes>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	YieldTypes get2(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 2));
	}
	YieldTypes getYield(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 2));
	}
	int getIndexOf(YieldTypes eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, YieldTypes>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	YieldTypes get3(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 3));
	}
	YieldTypes getYield(int iIndex) const
	{
		return static_cast<YieldTypes>(getInternal(iIndex, 3));
	}
	int getIndexOf(YieldTypes eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

template <> struct VARINFO<char>
{
	static const JITarrayTypes JIT = JIT_ARRAY_INT;
	static const char DEFAULT = static_cast<char>(0);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = VARIABLE_TYPE_GENERIC;
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = (T * sizeof(char)) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = false || boost::is_same<int, T>::VAL || boost::is_same<short, T>::VAL || boost::is_same<char, T>::VAL;
	};
};
template<>
class InfoArray1<char>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	char get(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 0));
	}
	char get0(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 0));
	}
	char getInt(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 0));
	}
	int getIndexOf(char eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, char>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	char get1(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 1));
	}
	char getInt(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 1));
	}
	int getIndexOf(char eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, char>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	char get2(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 2));
	}
	char getInt(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 2));
	}
	int getIndexOf(char eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, char>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	char get3(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 3));
	}
	char getInt(int iIndex) const
	{
		return static_cast<char>(getInternal(iIndex, 3));
	}
	int getIndexOf(char eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

template <> struct VARINFO<int>
{
	static const JITarrayTypes JIT = JIT_ARRAY_INT;
	static const int DEFAULT = static_cast<int>(0);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = VARIABLE_TYPE_GENERIC;
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = (T * sizeof(int)) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = false || boost::is_same<int, T>::VAL || boost::is_same<short, T>::VAL || boost::is_same<char, T>::VAL;
	};
};
template<>
class InfoArray1<int>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	int get(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 0));
	}
	int get0(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 0));
	}
	int getInt(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 0));
	}
	int getIndexOf(int eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, int>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	int get1(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 1));
	}
	int getInt(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 1));
	}
	int getIndexOf(int eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, int>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	int get2(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 2));
	}
	int getInt(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 2));
	}
	int getIndexOf(int eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, int>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	int get3(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 3));
	}
	int getInt(int iIndex) const
	{
		return static_cast<int>(getInternal(iIndex, 3));
	}
	int getIndexOf(int eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

template <> struct VARINFO<short>
{
	static const JITarrayTypes JIT = JIT_ARRAY_INT;
	static const short DEFAULT = static_cast<short>(0);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = VARIABLE_TYPE_GENERIC;
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = (T * sizeof(short)) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = false || boost::is_same<int, T>::VAL || boost::is_same<short, T>::VAL || boost::is_same<char, T>::VAL;
	};
};
template<>
class InfoArray1<short>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	short get(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 0));
	}
	short get0(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 0));
	}
	short getInt(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 0));
	}
	int getIndexOf(short eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, short>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	short get1(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 1));
	}
	short getInt(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 1));
	}
	int getIndexOf(short eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, short>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	short get2(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 2));
	}
	short getInt(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 2));
	}
	int getIndexOf(short eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, short>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	short get3(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 3));
	}
	short getInt(int iIndex) const
	{
		return static_cast<short>(getInternal(iIndex, 3));
	}
	int getIndexOf(short eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

template <> struct VARINFO<unsigned short>
{
	static const JITarrayTypes JIT = JIT_ARRAY_INT;
	static const unsigned short DEFAULT = static_cast<unsigned short>(0);
	static const int IS_CLASS = 0;
	static const VariableTypes TYPE = VARIABLE_TYPE_GENERIC;
	template <int T> struct STATIC {
		static const VariableStaticTypes VAL = (T * sizeof(unsigned short)) <= 4 ? VARIABLE_TYPE_STATIC : VARIABLE_TYPE_DYNAMIC;
	};
	template <int T> struct COMPATIBLE {
		static const bool VAL = false || boost::is_same<unsigned int, T>::VAL || boost::is_same< unsigned short, T>::VAL || boost::is_same<byte, T>::VAL;
	};
};
template<>
class InfoArray1<unsigned short>
	: protected InfoArrayBase
	, public boost::noncopyable
{
	friend class CyInfoArray;
public:
	int getLength() const
	{
		return InfoArrayBase::getLength();
	}
	unsigned short get(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 0));
	}
	unsigned short get0(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 0));
	}
	unsigned short getInt(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 0));
	}
	int getIndexOf(unsigned short eValue) const
	{
		return _getIndexOf(eValue, 0);
	}
protected:
friend class CvCity;
friend class CvGlobals;
friend class CivEffectInfo;
friend class CvPlayerCivEffect;
friend class CvInfoBase;
	InfoArray1(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArrayBase(eType0, eType1, eType2, eType3) {}
};
template<typename T0>
class InfoArray2<typename T0, unsigned short>
	: public InfoArray1<T0>
{
	friend class CyInfoArray;
public:
	unsigned short get1(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 1));
	}
	unsigned short getInt(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 1));
	}
	int getIndexOf(unsigned short eValue) const
	{
		return _getIndexOf(eValue, 1);
	}
protected:
	InfoArray2(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray1<T0>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1>
class InfoArray3<typename T0, typename T1, unsigned short>
	: public InfoArray2<T0, T1>
{
	friend class CyInfoArray;
public:
	unsigned short get2(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 2));
	}
	unsigned short getInt(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 2));
	}
	int getIndexOf(unsigned short eValue) const
	{
		return _getIndexOf(eValue, 2);
	}
protected:
	InfoArray3(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray2<T0, T1>(eType0, eType1, eType2, eType3) {}
};
template<typename T0, typename T1, typename T2>
class InfoArray4<typename T0, typename T1, typename T2, unsigned short>
	: public InfoArray3<T0, T1, T2>
{
	friend class CyInfoArray;
public:
	unsigned short get3(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 3));
	}
	unsigned short getInt(int iIndex) const
	{
		return static_cast<unsigned short>(getInternal(iIndex, 3));
	}
	int getIndexOf(unsigned short eValue) const
	{
		return _getIndexOf(eValue, 3);
	}
protected:
	InfoArray4(JITarrayTypes eType0, JITarrayTypes eType1, JITarrayTypes eType2, JITarrayTypes eType3)
		: InfoArray3<T0, T1, T2>(eType0, eType1, eType2, eType3) {}
};

#endif // !ENUM_SPECIALIZED_FUNCTIONS_H
