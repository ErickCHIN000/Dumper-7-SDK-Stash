#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xE8 - 0x28)
// Class HoudiniNiagara.HoudiniPointCache
class UHoudiniPointCache : public UObject
{
public:
	class FString                                Filename;                                          // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfSamples;                                   // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfAttributes;                                // 0x3C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfPoints;                                    // 0x40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfFrames;                                    // 0x44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstFrame;                                        // 0x48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastFrame;                                         // 0x4C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSampleTime;                                     // 0x50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSampleTime;                                     // 0x54(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceCSVTitleRow;                                 // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AttributeArray;                                    // 0x68(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FloatSampleData;                                   // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                SpawnTimes;                                        // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                LifeValues;                                        // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                PointTypes;                                        // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                SpecialAttributeIndexes;                           // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPointIndexes>                 PointValueIndexes;                                 // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         UseCustomCSVTitleRow;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EHoudiniPointCacheFileType        FileType;                                          // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FFE[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoudiniPointCache* GetDefaultObj();

	void SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow);
	bool GetVelocityValue(int32& SampleIndex, struct FVector* Value);
	bool GetVectorValueForString(int32& SampleIndex, const class FString& Attribute, struct FVector* Value, bool& DoSwap, bool& DoScale);
	bool GetVectorValue(int32& SampleIndex, int32& AttrIndex, struct FVector* Value, bool& DoSwap, bool& DoScale);
	bool GetVector4ValueForString(int32& SampleIndex, const class FString& Attribute, struct FVector4* Value);
	bool GetVector4Value(int32& SampleIndex, int32& AttrIndex, struct FVector4* Value);
	bool GetUseCustomCSVTitleRow();
	bool GetTimeValue(int32& SampleIndex, float* Value);
	TArray<int32> GetSpecialAttributeIndexes();
	TArray<float> GetSpawnTimes();
	bool GetSampleIndexesForPointAtTime(int32& POINTID, float& DesiredTime, int32* PrevSampleIndex, int32* NextSampleIndex, float* PrevWeight);
	bool GetQuatValueForString(int32& SampleIndex, const class FString& Attribute, struct FQuat* Value, bool& DoHoudiniToUnrealConversion);
	bool GetQuatValue(int32& SampleIndex, int32& AttrIndex, struct FQuat* Value, bool& DoHoudiniToUnrealConversion);
	bool GetPositionValue(int32& SampleIndex, struct FVector* Value);
	bool GetPointVectorValueAtTimeForString(int32 POINTID, const class FString& Attribute, float DesiredTime, struct FVector* Vector, bool DoSwap, bool DoScale);
	bool GetPointVectorValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, struct FVector* Vector, bool DoSwap, bool DoScale);
	bool GetPointVector4ValueAtTimeForString(int32 POINTID, const class FString& Attribute, float DesiredTime, struct FVector4* Vector);
	bool GetPointVector4ValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, struct FVector4* Vector);
	TArray<struct FPointIndexes> GetPointValueIndexes();
	bool GetPointValueAtTimeForString(int32& POINTID, const class FString& Attribute, float& DesiredTime, float* Value);
	bool GetPointValueAtTime(int32& POINTID, int32& AttributeIndex, float& DesiredTime, float* Value);
	TArray<int32> GetPointTypes();
	bool GetPointType(int32& POINTID, int32* Value);
	bool GetPointQuatValueAtTimeForString(int32 POINTID, const class FString& Attribute, float DesiredTime, struct FQuat* Quat, bool DoHoudiniToUnrealConversion);
	bool GetPointQuatValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, struct FQuat* Quat, bool DoHoudiniToUnrealConversion);
	bool GetPointPositionAtTime(int32& POINTID, float& DesiredTime, struct FVector* Vector);
	bool GetPointLifeAtTime(int32& POINTID, float& DesiredTime, float* Value);
	bool GetPointLife(int32& POINTID, float* Value);
	bool GetPointInt32ValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, int32* Value);
	bool GetPointIDsToSpawnAtTime(float& DesiredTime, int32* MinID, int32* MaxID, int32* Count, int32* LastSpawnedPointID, float* LastSpawnTime, float* LastSpawnTimeRequest);
	bool GetPointFloatValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, float* Value);
	int32 GetNumberOfSamples();
	int32 GetNumberOfPoints();
	int32 GetNumberOfAttributes();
	bool GetNormalValue(int32& SampleIndex, struct FVector* Value);
	TArray<float> GetLifeValues();
	bool GetLastSampleIndexAtTime(float& DesiredTime, int32* LastSampleIndex);
	bool GetLastPointIDToSpawnAtTime(float& Time, int32* LastID);
	bool GetImpulseValue(int32& SampleIndex, float* Value);
	bool GetFloatValueForString(int32& SampleIndex, const class FString& Attribute, float* Value);
	bool GetFloatValue(int32& SampleIndex, int32& AttrIndex, float* Value);
	TArray<float> GetFloatSampleData();
	bool GetColorValue(int32& SampleIndex, struct FLinearColor* Value);
	bool GetAttributeIndexInArrayFromString(const class FString& InAttribute, TArray<class FString>& InAttributeArray, int32* OutAttributeIndex);
	bool GetAttributeIndexFromString(const class FString& Attribute, int32* AttributeIndex);
};

// 0x8 (0x40 - 0x38)
// Class HoudiniNiagara.NiagaraDataInterfaceHoudini
class UNiagaraDataInterfaceHoudini : public UNiagaraDataInterface
{
public:
	class UHoudiniPointCache*                    HoudiniPointCacheAsset;                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceHoudini* GetDefaultObj();

};

}


