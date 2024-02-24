#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.UpdateUncompletion
struct UConditionBehaviour_UpdateUncompletion_Params
{
public:
	struct FConditionPersistentData              UpdatedProgressData;                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.UpdateProgress
struct UConditionBehaviour_UpdateProgress_Params
{
public:
	struct FConditionPersistentData              UpdatedProgressData;                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.UpdateCompletion
struct UConditionBehaviour_UpdateCompletion_Params
{
public:
	struct FConditionPersistentData              UpdatedProgressData;                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              UpdatedCompletionData;                             // 0x8(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.UpdateCancellation
struct UConditionBehaviour_UpdateCancellation_Params
{
public:
	class FString                                UpdatedCancellationMessage;                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.SetContextObject
struct UConditionBehaviour_SetContextObject_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.SendConditionUpdate
struct UConditionBehaviour_SendConditionUpdate_Params
{
public:
	int32                                        CurrentCount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountThreshold;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowUncompletion;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.IsComplete
struct UConditionBehaviour_IsComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.InitializeFromPersistence
struct UConditionBehaviour_InitializeFromPersistence_Params
{
public:
	struct FConditionPersistentData              UpdatedProgressData;                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ConditionsRuntime.ConditionBehaviour.GetDebugDescription
struct UConditionBehaviour_GetDebugDescription_Params
{
public:
	class FString                                OutDescription;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.RemoveCondition
struct UConditionFunctionLibrary_RemoveCondition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ConditionHandle;                                   // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.MakeConditionPersistentDataFromBool
struct UConditionFunctionLibrary_MakeConditionPersistentDataFromBool_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConditionPersistentData              ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.MakeBoolFromConditionPersistentData
struct UConditionFunctionLibrary_MakeBoolFromConditionPersistentData_Params
{
public:
	struct FConditionPersistentData              InConditionPersistentData;                         // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B26[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetProgressData
struct UConditionFunctionLibrary_GetProgressData_Params
{
public:
	struct FConditionStateData                   ConditionStateData;                                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              ReturnValue;                                       // 0x50(0x8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetListener
struct UConditionFunctionLibrary_GetListener_Params
{
public:
	struct FConditionStateData                   ConditionStateData;                                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TScriptInterface<class IConditionListenerInterface> ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionStatesCount
struct UConditionFunctionLibrary_GetConditionStatesCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B61[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionState
struct UConditionFunctionLibrary_GetConditionState_Params
{
public:
	struct FConditionStateData                   ConditionStateData;                                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EConditionState                   ReturnValue;                                       // 0x50(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionHandle
struct UConditionFunctionLibrary_GetConditionHandle_Params
{
public:
	struct FConditionStateData                   ConditionStateData;                                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x50(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionDataFromConditionStates
struct UConditionFunctionLibrary_GetConditionDataFromConditionStates_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ConditionHandle;                                   // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionStateData                   ReturnValue;                                       // 0x18(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetConditionBehaviours
struct UConditionFunctionLibrary_GetConditionBehaviours_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, class UConditionBehaviour*> ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetCompletionData
struct UConditionFunctionLibrary_GetCompletionData_Params
{
public:
	struct FConditionStateData                   ConditionStateData;                                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              ReturnValue;                                       // 0x50(0x8)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetCancellationMessage
struct UConditionFunctionLibrary_GetCancellationMessage_Params
{
public:
	struct FConditionStateData                   ConditionStateData;                                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.GetBehaviourClass
struct UConditionFunctionLibrary_GetBehaviourClass_Params
{
public:
	struct FConditionStateData                   ConditionStateData;                                // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UConditionBehaviour>       ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.CreateConditionFromTemplate
struct UConditionFunctionLibrary_CreateConditionFromTemplate_Params
{
public:
	struct FGuid                                 ConditionHandle;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Listener;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConditionBehaviour*                   TemplateBehaviour;                                 // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextObject;                                     // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              PersistenceData;                                   // 0x28(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.ConditionStatesContainsCondition
struct UConditionFunctionLibrary_ConditionStatesContainsCondition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ConditionHandle;                                   // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C56[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ConditionsRuntime.ConditionFunctionLibrary.ClearAllConditions
struct UConditionFunctionLibrary_ClearAllConditions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ConditionsRuntime.ConditionListenerInterface.OnConditionUpdated
struct IConditionListenerInterface_OnConditionUpdated_Params
{
public:
	struct FGuid                                 ConditionHandle;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              ProgressData;                                      // 0x10(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ConditionsRuntime.ConditionListenerInterface.OnConditionUncompleted
struct IConditionListenerInterface_OnConditionUncompleted_Params
{
public:
	struct FGuid                                 ConditionHandle;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              ProgressData;                                      // 0x10(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ConditionsRuntime.ConditionListenerInterface.OnConditionCompleted
struct IConditionListenerInterface_OnConditionCompleted_Params
{
public:
	struct FGuid                                 ConditionHandle;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              ProgressData;                                      // 0x10(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FConditionPersistentData              CompletionData;                                    // 0x18(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ConditionsRuntime.ConditionListenerInterface.OnConditionCancelled
struct IConditionListenerInterface_OnConditionCancelled_Params
{
public:
	struct FGuid                                 ConditionHandle;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CancellationMessage;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


