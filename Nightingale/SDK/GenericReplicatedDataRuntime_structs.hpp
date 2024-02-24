#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGenericDataFieldType : uint8
{
	Boolean                        = 0,
	Integer                        = 1,
	Float                          = 2,
	GameplayTag                    = 3,
	GameplayTagContainer           = 4,
	Text                           = 5,
	String                         = 6,
	DataTableRowHandle             = 7,
	EGenericDataFieldType_MAX      = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData
struct FGenericReplicatedData
{
public:
	uint8                                        Pad_10A3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Bool
struct FGenericReplicatedData_Bool : public FGenericReplicatedData
{
public:
	bool                                         Bool;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Byte
struct FGenericReplicatedData_Byte : public FGenericReplicatedData
{
public:
	uint8                                        Byte;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Int
struct FGenericReplicatedData_Int : public FGenericReplicatedData
{
public:
	int32                                        Int;                                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Int64
struct FGenericReplicatedData_Int64 : public FGenericReplicatedData
{
public:
	int64                                        Int64;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Float
struct FGenericReplicatedData_Float : public FGenericReplicatedData
{
public:
	float                                        Float;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_String
struct FGenericReplicatedData_String : public FGenericReplicatedData
{
public:
	class FString                                String;                                            // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Text
struct FGenericReplicatedData_Text : public FGenericReplicatedData
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Name
struct FGenericReplicatedData_Name : public FGenericReplicatedData
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_NameArray
struct FGenericReplicatedData_NameArray : public FGenericReplicatedData
{
public:
	TArray<class FName>                          NameArray;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Vector
struct FGenericReplicatedData_Vector : public FGenericReplicatedData
{
public:
	struct FVector                               Vector;                                            // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Transform
struct FGenericReplicatedData_Transform : public FGenericReplicatedData
{
public:
	uint8                                        Pad_1110[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Rotator
struct FGenericReplicatedData_Rotator : public FGenericReplicatedData
{
public:
	struct FRotator                              Rotator;                                           // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Objects
struct FGenericReplicatedData_Objects : public FGenericReplicatedData
{
public:
	TArray<TWeakObjectPtr<class UObject>>        Objects;                                           // 0x8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_Class
struct FGenericReplicatedData_Class : public FGenericReplicatedData
{
public:
	TSubclassOf<class UObject>                   Class;                                             // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_HitResult
struct FGenericReplicatedData_HitResult : public FGenericReplicatedData
{
public:
	struct FHitResult                            HitResult;                                         // 0x8(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_GameplayTag
struct FGenericReplicatedData_GameplayTag : public FGenericReplicatedData
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_TagContainer
struct FGenericReplicatedData_TagContainer : public FGenericReplicatedData
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x8(0x20)(NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_DataTableRowHandle
struct FGenericReplicatedData_DataTableRowHandle : public FGenericReplicatedData
{
public:
	struct FDataTableRowHandle                   DataTableRowHandle;                                // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedData_DataTableRowHandleArray
struct FGenericReplicatedData_DataTableRowHandleArray : public FGenericReplicatedData
{
public:
	TArray<struct FDataTableRowHandle>           DataTableRowHandleArray;                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GenericReplicatedDataRuntime.GenericDataInitializationField
struct FGenericDataInitializationField
{
public:
	enum class EGenericDataFieldType             FieldType;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBooleanValue;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1180[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntegerValue;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTagValue;                                  // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1187[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTagContainerValue;                         // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TextValue;                                         // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DataTableRowHandleValue;                           // 0x60(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GenericReplicatedDataRuntime.GenericReplicatedDataHandle
struct FGenericReplicatedDataHandle
{
public:
	uint8                                        Pad_1192[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


