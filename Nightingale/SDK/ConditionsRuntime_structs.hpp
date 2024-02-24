#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConditionState : uint8
{
	InProgress                     = 0,
	Completed                      = 1,
	Cancelled                      = 2,
	EConditionState_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ConditionsRuntime.ConditionPersistentData
struct FConditionPersistentData
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxCount;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConditionsRuntime.ConditionProgressDataList
struct FConditionProgressDataList
{
public:
	TArray<struct FConditionPersistentData>      ProgressDataList;                                  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ConditionsRuntime.Condition
struct FCondition : public FTableRowBase
{
public:
	TSubclassOf<class UConditionBehaviour>       Behaviour;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConditionsRuntime.CompoundConditionData
struct FCompoundConditionData
{
public:
	int32                                        ConditionIndex;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              ProgressData;                                      // 0x4(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EConditionState                   ConditionState;                                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D58[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x50 - 0xC)
// ScriptStruct ConditionsRuntime.ConditionStateData
struct FConditionStateData : public FFastArraySerializerItem
{
public:
	struct FGuid                                 ConditionHandle;                                   // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EConditionState                   ConditionState;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D61[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                Listener;                                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UConditionBehaviour>       BehaviourClass;                                    // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FConditionPersistentData              ProgressData;                                      // 0x30(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FConditionPersistentData              CompletionData;                                    // 0x38(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	class FString                                CancellationMessage;                               // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x40 (0x148 - 0x108)
// ScriptStruct ConditionsRuntime.ConditionStateArray
struct FConditionStateArray : public FFastArraySerializer
{
public:
	uint8                                        Pad_D68[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConditionStateData>           Items;                                             // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}


