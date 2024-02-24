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

// 0x30 (0x30 - 0x0)
// Function SMSystem.SMEditorGraphNodeInterface.SetNodeName
struct ISMEditorGraphNodeInterface_SetNodeName_Params
{
public:
	class FString                                NewName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  OutErrorMessage;                                   // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMEditorGraphNodeInterface.GetNodeName
struct ISMEditorGraphNodeInterface_GetNodeName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphPropertyAsArray
struct ISMEditorGraphNodeInterface_GetEditorGraphPropertyAsArray_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMNodeInstance*                       NodeInstance;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphProperty
struct ISMEditorGraphNodeInterface_GetEditorGraphProperty_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMNodeInstance*                       NodeInstance;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISMEditorGraphPropertyNodeInterface> ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMEditorGraphNodeInterface.GetAllEditorGraphProperties
struct ISMEditorGraphNodeInterface_GetAllEditorGraphProperties_Params
{
public:
	class USMNodeInstance*                       NodeInstance;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMEditorGraphNodeInterface.AsStateBaseInterface
struct ISMEditorGraphNodeInterface_AsStateBaseInterface_Params
{
public:
	TScriptInterface<class ISMEditorGraphNode_StateBaseInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMEditorGraphNode_StateBaseInterface.SetAnyStateTags
struct ISMEditorGraphNode_StateBaseInterface_SetAnyStateTags_Params
{
public:
	struct FGameplayTagContainer                 InAnyStateTags;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMEditorGraphNode_StateBaseInterface.GetAnyStateTags
struct ISMEditorGraphNode_StateBaseInterface_GetAnyStateTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotificationAndHighlight
struct ISMEditorGraphPropertyNodeInterface_SetNotificationAndHighlight_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMLogType                        Severity;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1032[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearOnCompile;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1035[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotification
struct ISMEditorGraphPropertyNodeInterface_SetNotification_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMLogType                        Severity;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1045[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearOnCompile;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1047[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetHighlight
struct ISMEditorGraphPropertyNodeInterface_SetHighlight_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1057[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearOnCompile;                                   // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineNetworkedInterface.IsSimulatedProxy
struct ISMStateMachineNetworkedInterface_IsSimulatedProxy_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineNetworkedInterface.IsConfiguredForNetworking
struct ISMStateMachineNetworkedInterface_IsConfiguredForNetworking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineNetworkedInterface.HasAuthority
struct ISMStateMachineNetworkedInterface_HasAuthority_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.WithExecutionEnvironment
struct USMNodeInstance_WithExecutionEnvironment_Params
{
public:
	enum class ESMExecutionEnvironment           ExecutionEnvironment;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SMSystem.SMNodeInstance.SetVariableReadOnly
struct USMNodeInstance_SetVariableReadOnly_Params
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetIsReadOnly;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1103[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function SMSystem.SMNodeInstance.SetVariableHidden
struct USMNodeInstance_SetVariableHidden_Params
{
public:
	class FName                                  VariableName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetHidden;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1116[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.SetUseCustomIcon
struct USMNodeInstance_SetUseCustomIcon_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.SetUseCustomColor
struct USMNodeInstance_SetUseCustomColor_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMNodeInstance.SetNodeDescriptionText
struct USMNodeInstance_SetNodeDescriptionText_Params
{
public:
	class FText                                  NewDescription;                                    // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.SetNodeColor
struct USMNodeInstance_SetNodeColor_Params
{
public:
	struct FLinearColor                          NewColor;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMNodeInstance.SetDisplayName
struct USMNodeInstance_SetDisplayName_Params
{
public:
	class FName                                  NewDisplayName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMNodeInstance.OnPreCompileValidate
struct USMNodeInstance_OnPreCompileValidate_Params
{
public:
	class USMCompilerLog*                        CompilerLog;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.OnContextPawnControllerChanged
struct USMNodeInstance_OnContextPawnControllerChanged_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           NewController;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMNodeInstance.K2_TryGetOwningEditorGraphNode
struct USMNodeInstance_K2_TryGetOwningEditorGraphNode_Params
{
public:
	TScriptInterface<class ISMEditorGraphNodeInterface> EditorNode;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMValidEditorNode                IsValidNode;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.IsInitializedAndReadyForInputEvents
struct USMNodeInstance_IsInitializedAndReadyForInputEvents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.IsInitialized
struct USMNodeInstance_IsInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.IsInEndState
struct USMNodeInstance_IsInEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.IsEditorExecution
struct USMNodeInstance_IsEditorExecution_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.IsActive
struct USMNodeInstance_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.HasUpdated
struct USMNodeInstance_HasUpdated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMNodeInstance.GetTimeInState
struct USMNodeInstance_GetTimeInState_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetStateMachineInstance
struct USMNodeInstance_GetStateMachineInstance_Params
{
public:
	bool                                         bTopMostInstance;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1229[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMInstance*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMNodeInstance.GetOwningStateMachineNodeInstance
struct USMNodeInstance_GetOwningStateMachineNodeInstance_Params
{
public:
	class USMStateMachineInstance*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetOwningEditorGraphNode
struct USMNodeInstance_GetOwningEditorGraphNode_Params
{
public:
	TScriptInterface<class ISMEditorGraphNodeInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetNodePosition
struct USMNodeInstance_GetNodePosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetNodeName
struct USMNodeInstance_GetNodeName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetNodeIconTintColor
struct USMNodeInstance_GetNodeIconTintColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetNodeIconSize
struct USMNodeInstance_GetNodeIconSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMNodeInstance.GetNodeIcon
struct USMNodeInstance_GetNodeIcon_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMNodeInstance.GetNodeDescriptionText
struct USMNodeInstance_GetNodeDescriptionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetNetworkInterface
struct USMNodeInstance_GetNetworkInterface_Params
{
public:
	TScriptInterface<class ISMStateMachineNetworkedInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMNodeInstance.GetInputComponent
struct USMNodeInstance_GetInputComponent_Params
{
public:
	class UInputComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMNodeInstance.GetGuid
struct USMNodeInstance_GetGuid_Params
{
public:
	struct FGuid                                 ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMNodeInstance.GetContext
struct USMNodeInstance_GetContext_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMNodeInstance.EvaluateGraphProperties
struct USMNodeInstance_EvaluateGraphProperties_Params
{
public:
	bool                                         bTargetOnly;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByTransitionName
struct USMStateInstance_Base_SwitchToLinkedStateByTransitionName_Params
{
public:
	class FString                                TransitionName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireTransitionToPass;                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateNow;                                      // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x12(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C5[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByTransition
struct USMStateInstance_Base_SwitchToLinkedStateByTransition_Params
{
public:
	class USMTransitionInstance*                 TransitionInstance;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireTransitionToPass;                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateNow;                                      // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F7[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByName
struct USMStateInstance_Base_SwitchToLinkedStateByName_Params
{
public:
	class FString                                NextStateName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireTransitionToPass;                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateNow;                                      // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x12(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateInstance_Base.SwitchToLinkedState
struct USMStateInstance_Base_SwitchToLinkedState_Params
{
public:
	class USMStateInstance_Base*                 NextStateInstance;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireTransitionToPass;                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateNow;                                      // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1444[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetStayActiveOnStateChange
struct USMStateInstance_Base_SetStayActiveOnStateChange_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetExcludeFromAnyState
struct USMStateInstance_Base_SetExcludeFromAnyState_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetEvalTransitionsOnStart
struct USMStateInstance_Base_SetEvalTransitionsOnStart_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetDisableTickTransitionEvaluation
struct USMStateInstance_Base_SetDisableTickTransitionEvaluation_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetDefaultToParallel
struct USMStateInstance_Base_SetDefaultToParallel_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetCanBeEndState
struct USMStateInstance_Base_SetCanBeEndState_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetAlwaysUpdate
struct USMStateInstance_Base_SetAlwaysUpdate_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetAllowParallelReentry
struct USMStateInstance_Base_SetAllowParallelReentry_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateInstance_Base.SetActive
struct USMStateInstance_Base_SetActive_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetAllParents;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateNow;                                      // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMStateInstance_Base.OnStateUpdate
struct USMStateInstance_Base_OnStateUpdate_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.IsStateMachine
struct USMStateInstance_Base_IsStateMachine_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.IsEntryState
struct USMStateInstance_Base_IsEntryState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.IsEndState
struct USMStateInstance_Base_IsEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetTransitionToTake
struct USMStateInstance_Base_GetTransitionToTake_Params
{
public:
	class USMTransitionInstance*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetTransitionByIndex
struct USMStateInstance_Base_GetTransitionByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMTransitionInstance*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetStayActiveOnStateChange
struct USMStateInstance_Base_GetStayActiveOnStateChange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetStateInfo
struct USMStateInstance_Base_GetStateInfo_Params
{
public:
	struct FSMStateInfo                          State;                                             // 0x0(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetStartTime
struct USMStateInstance_Base_GetStartTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetServerTimeInState
struct USMStateInstance_Base_GetServerTimeInState_Params
{
public:
	bool                                         bOutUsedLocalTime;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1600[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetPreviousStateByName
struct USMStateInstance_Base_GetPreviousStateByName_Params
{
public:
	class FString                                StateName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetPreviousActiveTransition
struct USMStateInstance_Base_GetPreviousActiveTransition_Params
{
public:
	class USMTransitionInstance*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetPreviousActiveState
struct USMStateInstance_Base_GetPreviousActiveState_Params
{
public:
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetOutgoingTransitions
struct USMStateInstance_Base_GetOutgoingTransitions_Params
{
public:
	TArray<class USMTransitionInstance*>         Transitions;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bExcludeAlwaysFalse;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetOutgoingTransitionByName
struct USMStateInstance_Base_GetOutgoingTransitionByName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMTransitionInstance*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetNextStateByTransitionIndex
struct USMStateInstance_Base_GetNextStateByTransitionIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetNextStateByName
struct USMStateInstance_Base_GetNextStateByName_Params
{
public:
	class FString                                StateName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetIncomingTransitions
struct USMStateInstance_Base_GetIncomingTransitions_Params
{
public:
	TArray<class USMTransitionInstance*>         Transitions;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bExcludeAlwaysFalse;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1716[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetIncomingTransitionByName
struct USMStateInstance_Base_GetIncomingTransitionByName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMTransitionInstance*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetExcludeFromAnyState
struct USMStateInstance_Base_GetExcludeFromAnyState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetEvalTransitionsOnStart
struct USMStateInstance_Base_GetEvalTransitionsOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetDisableTickTransitionEvaluation
struct USMStateInstance_Base_GetDisableTickTransitionEvaluation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetDefaultToParallel
struct USMStateInstance_Base_GetDefaultToParallel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetCanBeEndState
struct USMStateInstance_Base_GetCanBeEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetAlwaysUpdate
struct USMStateInstance_Base_GetAlwaysUpdate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.GetAllowParallelReentry
struct USMStateInstance_Base_GetAllowParallelReentry_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.AreAllOutgoingTransitionsFromAnAnyState
struct USMStateInstance_Base_AreAllOutgoingTransitionsFromAnAnyState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateInstance_Base.AreAllIncomingTransitionsFromAnAnyState
struct USMStateInstance_Base_AreAllIncomingTransitionsFromAnAnyState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMConduitInstance.SetEvalWithTransitions
struct USMConduitInstance_SetEvalWithTransitions_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMConduitInstance.SetCanEvaluate
struct USMConduitInstance_SetCanEvaluate_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMConduitInstance.GetEvalWithTransitions
struct USMConduitInstance_GetEvalWithTransitions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMConduitInstance.GetCanEvaluate
struct USMConduitInstance_GetCanEvaluate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMConduitInstance.CanEnterTransition
struct USMConduitInstance_CanEnterTransition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.Update
struct USMInstance_Update_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SMSystem.SMInstance.TryGetTransitionInfo
struct USMInstance_TryGetTransitionInfo_Params
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSMTransitionInfo                     TransitionInfo;                                    // 0x10(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1941[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function SMSystem.SMInstance.TryGetStateInfo
struct USMInstance_TryGetStateInfo_Params
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSMStateInfo                          StateInfo;                                         // 0x10(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SMSystem.SMInstance.TryGetNestedActiveState
struct USMInstance_TryGetNestedActiveState_Params
{
public:
	struct FSMStateInfo                          FoundState;                                        // 0x0(0x80)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1981[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.Tick
struct USMInstance_Tick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.TakeTransitionChain
struct USMInstance_TakeTransitionChain_Params
{
public:
	TArray<class USMTransitionInstance*>         InTransitionChain;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.SwitchActiveStateByQualifiedName
struct USMInstance_SwitchActiveStateByQualifiedName_Params
{
public:
	class FString                                InFullPath;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeactivateOtherStates;                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.SwitchActiveState
struct USMInstance_SwitchActiveState_Params
{
public:
	class USMStateInstance_Base*                 NewStateInstance;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeactivateOtherStates;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.StartWithNewContext
struct USMInstance_StartWithNewContext_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.SetTickOnManualUpdate
struct USMInstance_SetTickOnManualUpdate_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.SetTickInterval
struct USMInstance_SetTickInterval_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.SetTickBeforeBeginPlay
struct USMInstance_SetTickBeforeBeginPlay_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.SetStopOnEndState
struct USMInstance_SetStopOnEndState_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.SetStateMachineClass
struct USMInstance_SetStateMachineClass_Params
{
public:
	TSubclassOf<class USMStateMachineInstance>   NewStateMachineClass;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.SetStateHistoryMaxCount
struct USMInstance_SetStateHistoryMaxCount_Params
{
public:
	int32                                        NewSize;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.SetRootStateMachineNodeClass
struct USMInstance_SetRootStateMachineNodeClass_Params
{
public:
	TSubclassOf<class USMStateMachineInstance>   NewStateMachineNodeClass;                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SMSystem.SMInstance.SetGuidRedirectMap
struct USMInstance_SetGuidRedirectMap_Params
{
public:
	TMap<struct FGuid, struct FGuid>             InGuidMap;                                         // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.SetContext
struct USMInstance_SetContext_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.SetCanTickWhenPaused
struct USMInstance_SetCanTickWhenPaused_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.SetCanEverTick
struct USMInstance_SetCanEverTick_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.SetAutoManageTime
struct USMInstance_SetAutoManageTime_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.RunUpdateAsReference
struct USMInstance_RunUpdateAsReference_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.OnStateMachineUpdate
struct USMInstance_OnStateMachineUpdate_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SMSystem.SMInstance.OnStateMachineTransitionTaken
struct USMInstance_OnStateMachineTransitionTaken_Params
{
public:
	struct FSMTransitionInfo                     Transition;                                        // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function SMSystem.SMInstance.OnStateMachineStateStarted
struct USMInstance_OnStateMachineStateStarted_Params
{
public:
	struct FSMStateInfo                          State;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function SMSystem.SMInstance.OnStateMachineStateChanged
struct USMInstance_OnStateMachineStateChanged_Params
{
public:
	struct FSMStateInfo                          ToState;                                           // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSMStateInfo                          FromState;                                         // 0x80(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.OnStateMachineInitialStateLoaded
struct USMInstance_OnStateMachineInitialStateLoaded_Params
{
public:
	struct FGuid                                 StateGuid;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.OnContextPawnRestarted
struct USMInstance_OnContextPawnRestarted_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SMSystem.SMInstance.LoadFromState
struct USMInstance_LoadFromState_Params
{
public:
	struct FGuid                                 FromGuid;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllParents;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotify;                                           // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D42[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.LoadFromMultipleStates
struct USMInstance_LoadFromMultipleStates_Params
{
public:
	TArray<struct FGuid>                         FromGuids;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bNotify;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.K2_TryGetNetworkInterface
struct USMInstance_K2_TryGetNetworkInterface_Params
{
public:
	TScriptInterface<class ISMStateMachineNetworkedInterface> Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMInstance.K2_InitializeAsync
struct USMInstance_K2_InitializeAsync_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.IsTickableWhenPaused
struct USMInstance_IsTickableWhenPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.IsTickable
struct USMInstance_IsTickable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.IsStopping
struct USMInstance_IsStopping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.IsInitializingAsync
struct USMInstance_IsInitializingAsync_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.IsInitialized
struct USMInstance_IsInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.IsInEndState
struct USMInstance_IsInEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.IsActive
struct USMInstance_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.Internal_Update
struct USMInstance_Internal_Update_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.Internal_EventCleanup
struct USMInstance_Internal_EventCleanup_Params
{
public:
	struct FGuid                                 PathGuid;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SMSystem.SMInstance.Internal_EvaluateAndTakeTransitionChainByGuid
struct USMInstance_Internal_EvaluateAndTakeTransitionChainByGuid_Params
{
public:
	struct FGuid                                 PathGuid;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E78[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.Initialize
struct USMInstance_Initialize_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.HasStarted
struct USMInstance_HasStarted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.GetTransitionInstanceByGuid
struct USMInstance_GetTransitionInstanceByGuid_Params
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMTransitionInstance*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.GetTickInterval
struct USMInstance_GetTickInterval_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.GetStopOnEndState
struct USMInstance_GetStopOnEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetStateMachineClass
struct USMInstance_GetStateMachineClass_Params
{
public:
	TSubclassOf<class USMStateMachineInstance>   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.GetStateInstanceByQualifiedName
struct USMInstance_GetStateInstanceByQualifiedName_Params
{
public:
	class FString                                InFullPath;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.GetStateInstanceByGuid
struct USMInstance_GetStateInstanceByGuid_Params
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMInstance.GetStateHistoryMaxCount
struct USMInstance_GetStateHistoryMaxCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.GetStateHistory
struct USMInstance_GetStateHistory_Params
{
public:
	TArray<struct FSMStateHistory>               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.GetSingleActiveStateInstance
struct USMInstance_GetSingleActiveStateInstance_Params
{
public:
	bool                                         bCheckNested;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SMSystem.SMInstance.GetSingleActiveStateGuid
struct USMInstance_GetSingleActiveStateGuid_Params
{
public:
	bool                                         bCheckNested;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2006[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetRootStateMachineNodeInstance
struct USMInstance_GetRootStateMachineNodeInstance_Params
{
public:
	class USMStateMachineInstance*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetRootStateMachineNodeClass
struct USMInstance_GetRootStateMachineNodeClass_Params
{
public:
	TSubclassOf<class USMStateMachineInstance>   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetReferenceOwner
struct USMInstance_GetReferenceOwner_Params
{
public:
	class USMInstance*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.GetReferencedInstanceByGuid
struct USMInstance_GetReferencedInstanceByGuid_Params
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMInstance*                           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetPrimaryReferenceOwner
struct USMInstance_GetPrimaryReferenceOwner_Params
{
public:
	class USMInstance*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.GetNodeInstanceByGuid
struct USMInstance_GetNodeInstanceByGuid_Params
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMNodeInstance*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.GetNetworkInterface
struct USMInstance_GetNetworkInterface_Params
{
public:
	TScriptInterface<class ISMStateMachineNetworkedInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetInputComponent
struct USMInstance_GetInputComponent_Params
{
public:
	class UInputComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SMSystem.SMInstance.GetGuidRedirectMap
struct USMInstance_GetGuidRedirectMap_Params
{
public:
	TMap<struct FGuid, struct FGuid>             ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetContext
struct USMInstance_GetContext_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMInstance.GetComponentOwner
struct USMInstance_GetComponentOwner_Params
{
public:
	class USMStateMachineComponent*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.GetAllTransitionInstances
struct USMInstance_GetAllTransitionInstances_Params
{
public:
	TArray<class USMTransitionInstance*>         TransitionInstances;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.GetAllStateInstances
struct USMInstance_GetAllStateInstances_Params
{
public:
	TArray<class USMStateInstance_Base*>         StateInstances;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMInstance.GetAllReferencedInstances
struct USMInstance_GetAllReferencedInstances_Params
{
public:
	bool                                         bIncludeChildren;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USMInstance*>                   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.GetAllActiveStateInstances
struct USMInstance_GetAllActiveStateInstances_Params
{
public:
	TArray<class USMStateInstance_Base*>         ActiveStateInstances;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.GetAllActiveStateGuids
struct USMInstance_GetAllActiveStateGuids_Params
{
public:
	TArray<struct FGuid>                         ActiveGuids;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMInstance.EvaluateAndTakeTransitionChain
struct USMInstance_EvaluateAndTakeTransitionChain_Params
{
public:
	class USMTransitionInstance*                 InFirstTransitionInstance;                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2350[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SMSystem.SMInstance.EvaluateAndFindTransitionChain
struct USMInstance_EvaluateAndFindTransitionChain_Params
{
public:
	class USMTransitionInstance*                 InFirstTransitionInstance;                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USMTransitionInstance*>         OutTransitionChain;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USMStateInstance_Base*                 OutDestinationState;                               // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequirePreviousStateActive;                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.CanTickOnManualUpdate
struct USMInstance_CanTickOnManualUpdate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.CanEverTick
struct USMInstance_CanEverTick_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.CanAutoManageTime
struct USMInstance_CanAutoManageTime_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMInstance.AreInitialStatesSetFromLoad
struct USMInstance_AreInitialStatesSetFromLoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SMSystem.SMCompilerLog.LogProperty
struct USMCompilerLog_LogProperty_Params
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMNodeInstance*                       NodeInstance;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMCompilerLogType                Severity;                                          // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighlight;                                        // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSilent;                                           // 0x22(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25BC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ArrayIndex;                                        // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMCompilerLog.Log
struct USMCompilerLog_Log_Params
{
public:
	enum class ESMCompilerLogType                Severity;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMStateInstance.RemoveStateFromStack
struct USMStateInstance_RemoveStateFromStack_Params
{
public:
	int32                                        StackIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMStateInstance.GetStateStackCount
struct USMStateInstance_GetStateStackCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance.GetStateInStackByClass
struct USMStateInstance_GetStateInStackByClass_Params
{
public:
	TSubclassOf<class USMStateInstance>          StateClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChildren;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_268F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateInstance.GetStateInStack
struct USMStateInstance_GetStateInStack_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateInstance.GetStateIndexInStack
struct USMStateInstance_GetStateIndexInStack_Params
{
public:
	class USMStateInstance_Base*                 StateInstance;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26D3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateInstance.GetStackOwnerInstance
struct USMStateInstance_GetStackOwnerInstance_Params
{
public:
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateInstance.GetAllStateStackInstances
struct USMStateInstance_GetAllStateStackInstances_Params
{
public:
	TArray<class USMStateInstance_Base*>         StateStackInstances;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMStateInstance.GetAllStatesInStackOfClass
struct USMStateInstance_GetAllStatesInStackOfClass_Params
{
public:
	TSubclassOf<class USMStateInstance>          StateClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USMStateInstance_Base*>         StateStackInstances;                               // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIncludeChildren;                                  // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2751[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateInstance.AddStateToStack
struct USMStateInstance_AddStateToStack_Params
{
public:
	TSubclassOf<class USMStateInstance>          StateClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMStateInstance*                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMStateMachineComponent.Update
struct USMStateMachineComponent_Update_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineComponent.SetCanInstanceNetworkTick
struct USMStateMachineComponent_SetCanInstanceNetworkTick_Params
{
public:
	bool                                         bCanEverTick;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_Update
struct USMStateMachineComponent_SERVER_Update_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_TakeTransitions
struct USMStateMachineComponent_SERVER_TakeTransitions_Params
{
public:
	TArray<struct FSMTransitionTransaction>      TransitionTransactions;                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_Stop
struct USMStateMachineComponent_SERVER_Stop_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_Start
struct USMStateMachineComponent_SERVER_Start_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_Shutdown
struct USMStateMachineComponent_SERVER_Shutdown_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_RequestFullSync
struct USMStateMachineComponent_SERVER_RequestFullSync_Params
{
public:
	bool                                         bForceFullRefresh;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_Initialize
struct USMStateMachineComponent_SERVER_Initialize_Params
{
public:
	struct FSMInitializeTransaction              Transaction;                                       // 0x0(0x10)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_FullSync
struct USMStateMachineComponent_SERVER_FullSync_Params
{
public:
	struct FSMFullSyncTransaction                FullSyncTransaction;                               // 0x0(0x20)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.SERVER_ActivateStates
struct USMStateMachineComponent_SERVER_ActivateStates_Params
{
public:
	TArray<struct FSMActivateStateTransaction>   StateTransactions;                                 // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.OnContextPawnControllerChanged
struct USMStateMachineComponent_OnContextPawnControllerChanged_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           NewController;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.MULTICAST_TakeTransitions
struct USMStateMachineComponent_MULTICAST_TakeTransitions_Params
{
public:
	TArray<struct FSMTransitionTransaction>      Transactions;                                      // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.MULTICAST_Stop
struct USMStateMachineComponent_MULTICAST_Stop_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.MULTICAST_Start
struct USMStateMachineComponent_MULTICAST_Start_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.MULTICAST_Shutdown
struct USMStateMachineComponent_MULTICAST_Shutdown_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMStateMachineComponent.MULTICAST_FullSync
struct USMStateMachineComponent_MULTICAST_FullSync_Params
{
public:
	struct FSMFullSyncTransaction                FullSyncTransaction;                               // 0x0(0x20)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.MULTICAST_ActivateStates
struct USMStateMachineComponent_MULTICAST_ActivateStates_Params
{
public:
	TArray<struct FSMActivateStateTransaction>   StateTransactions;                                 // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMStateMachineComponent.K2_InitializeAsync
struct USMStateMachineComponent_K2_InitializeAsync_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineComponent.IsStateMachineActive
struct USMStateMachineComponent_IsStateMachineActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineComponent.IsInitialized
struct USMStateMachineComponent_IsInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineUpdated
struct USMStateMachineComponent_Internal_OnStateMachineUpdated_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineTransitionTaken
struct USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSMTransitionInfo                     Transition;                                        // 0x8(0x98)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStopped
struct USMStateMachineComponent_Internal_OnStateMachineStopped_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateStarted
struct USMStateMachineComponent_Internal_OnStateMachineStateStarted_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSMStateInfo                          State;                                             // 0x8(0x80)(Parm, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateChanged
struct USMStateMachineComponent_Internal_OnStateMachineStateChanged_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSMStateInfo                          ToState;                                           // 0x8(0x80)(Parm, NativeAccessSpecifierPublic)
	struct FSMStateInfo                          FromState;                                         // 0x88(0x80)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStarted
struct USMStateMachineComponent_Internal_OnStateMachineStarted_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineShutdown
struct USMStateMachineComponent_Internal_OnStateMachineShutdown_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnReplicatedInstanceInitialized
struct USMStateMachineComponent_Internal_OnReplicatedInstanceInitialized_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.Internal_OnInstanceInitializedAsync
struct USMStateMachineComponent_Internal_OnInstanceInitializedAsync_Params
{
public:
	class USMInstance*                           Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.Initialize
struct USMStateMachineComponent_Initialize_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.GetTopMostParentActor
struct USMStateMachineComponent_GetTopMostParentActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.GetInstance
struct USMStateMachineComponent_GetInstance_Params
{
public:
	class USMInstance*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.GetContextForInitialization
struct USMStateMachineComponent_GetContextForInitialization_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineComponent.CopySettingsFromOtherComponent
struct USMStateMachineComponent_CopySettingsFromOtherComponent_Params
{
public:
	class USMStateMachineComponent*              OtherComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.CLIENT_TakeTransitions
struct USMStateMachineComponent_CLIENT_TakeTransitions_Params
{
public:
	TArray<struct FSMTransitionTransaction>      Transactions;                                      // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.CLIENT_Stop
struct USMStateMachineComponent_CLIENT_Stop_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.CLIENT_Start
struct USMStateMachineComponent_CLIENT_Start_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function SMSystem.SMStateMachineComponent.CLIENT_Shutdown
struct USMStateMachineComponent_CLIENT_Shutdown_Params
{
public:
	struct FSMTransaction_Base                   Transaction;                                       // 0x0(0x3)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMStateMachineComponent.CLIENT_FullSync
struct USMStateMachineComponent_CLIENT_FullSync_Params
{
public:
	struct FSMFullSyncTransaction                FullSyncTransaction;                               // 0x0(0x20)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineComponent.CLIENT_ActivateStates
struct USMStateMachineComponent_CLIENT_ActivateStates_Params
{
public:
	TArray<struct FSMActivateStateTransaction>   StateTransactions;                                 // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineInstance.SetWaitForEndState
struct USMStateMachineInstance_SetWaitForEndState_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineInstance.SetReuseIfNotEndState
struct USMStateMachineInstance_SetReuseIfNotEndState_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineInstance.SetReuseCurrentState
struct USMStateMachineInstance_SetReuseCurrentState_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineInstance.IsStateMachineInEndState
struct USMStateMachineInstance_IsStateMachineInEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetWaitForEndState
struct USMStateMachineInstance_GetWaitForEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetStateMachineReference
struct USMStateMachineInstance_GetStateMachineReference_Params
{
public:
	class USMInstance*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetReuseIfNotEndState
struct USMStateMachineInstance_GetReuseIfNotEndState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetReuseCurrentState
struct USMStateMachineInstance_GetReuseCurrentState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetEntryStates
struct USMStateMachineInstance_GetEntryStates_Params
{
public:
	TArray<class USMStateInstance_Base*>         EntryStates;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetContainedStateByName
struct USMStateMachineInstance_GetContainedStateByName_Params
{
public:
	class FString                                StateName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetAllStateInstances
struct USMStateMachineInstance_GetAllStateInstances_Params
{
public:
	TArray<class USMStateInstance_Base*>         StateInstances;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMStateMachineInstance.GetActiveStates
struct USMStateMachineInstance_GetActiveStates_Params
{
public:
	TArray<class USMStateInstance_Base*>         ActiveStates;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.SetRunParallel
struct USMTransitionInstance_SetRunParallel_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMTransitionInstance.SetPriorityOrder
struct USMTransitionInstance_SetPriorityOrder_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.SetEvalIfNextStateActive
struct USMTransitionInstance_SetEvalIfNextStateActive_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.SetCanEvalWithStartState
struct USMTransitionInstance_SetCanEvalWithStartState_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.SetCanEvaluateFromEvent
struct USMTransitionInstance_SetCanEvaluateFromEvent_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.SetCanEvaluate
struct USMTransitionInstance_SetCanEvaluate_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.IsTransitionFromLinkState
struct USMTransitionInstance_IsTransitionFromLinkState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.IsTransitionFromAnyState
struct USMTransitionInstance_IsTransitionFromAnyState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMTransitionInstance.GetTransitionStackCount
struct USMTransitionInstance_GetTransitionStackCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SMSystem.SMTransitionInstance.GetTransitionInStackByClass
struct USMTransitionInstance_GetTransitionInStackByClass_Params
{
public:
	TSubclassOf<class USMTransitionInstance>     TransitionClass;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChildren;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_300D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMTransitionInstance*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMTransitionInstance.GetTransitionInStack
struct USMTransitionInstance_GetTransitionInStack_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3018[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMTransitionInstance*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function SMSystem.SMTransitionInstance.GetTransitionInfo
struct USMTransitionInstance_GetTransitionInfo_Params
{
public:
	struct FSMTransitionInfo                     Transition;                                        // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMTransitionInstance.GetTransitionIndexInStack
struct USMTransitionInstance_GetTransitionIndexInStack_Params
{
public:
	class USMTransitionInstance*                 TransitionInstance;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3034[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMTransitionInstance.GetStackOwnerInstance
struct USMTransitionInstance_GetStackOwnerInstance_Params
{
public:
	class USMTransitionInstance*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMTransitionInstance.GetSourceStateForActiveTransition
struct USMTransitionInstance_GetSourceStateForActiveTransition_Params
{
public:
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMTransitionInstance.GetServerTimestamp
struct USMTransitionInstance_GetServerTimestamp_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.GetRunParallel
struct USMTransitionInstance_GetRunParallel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SMSystem.SMTransitionInstance.GetPriorityOrder
struct USMTransitionInstance_GetPriorityOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMTransitionInstance.GetPreviousStateInstance
struct USMTransitionInstance_GetPreviousStateInstance_Params
{
public:
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMTransitionInstance.GetNextStateInstance
struct USMTransitionInstance_GetNextStateInstance_Params
{
public:
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.GetEvalIfNextStateActive
struct USMTransitionInstance_GetEvalIfNextStateActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SMSystem.SMTransitionInstance.GetDestinationStateForActiveTransition
struct USMTransitionInstance_GetDestinationStateForActiveTransition_Params
{
public:
	class USMStateInstance_Base*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.GetCanEvalWithStartState
struct USMTransitionInstance_GetCanEvalWithStartState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.GetCanEvaluateFromEvent
struct USMTransitionInstance_GetCanEvaluateFromEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.GetCanEvaluate
struct USMTransitionInstance_GetCanEvaluate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SMSystem.SMTransitionInstance.GetAllTransitionStackInstances
struct USMTransitionInstance_GetAllTransitionStackInstances_Params
{
public:
	TArray<class USMTransitionInstance*>         TransitionStackInstances;                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMTransitionInstance.GetAllTransitionsInStackOfClass
struct USMTransitionInstance_GetAllTransitionsInStackOfClass_Params
{
public:
	TSubclassOf<class USMTransitionInstance>     TransitionClass;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USMTransitionInstance*>         TransitionStackInstances;                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIncludeChildren;                                  // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30AA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.EvaluateFromManuallyBoundEvent
struct USMTransitionInstance_EvaluateFromManuallyBoundEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.DoesTransitionPass
struct USMTransitionInstance_DoesTransitionPass_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SMSystem.SMTransitionInstance.CanEnterTransition
struct USMTransitionInstance_CanEnterTransition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstancePure
struct USMBlueprintUtils_K2_CreateStateMachineInstancePure_Params
{
public:
	TSubclassOf<class USMInstance>               StateMachineClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeNow;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMInstance*                           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstanceAsync
struct USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Params
{
public:
	TSubclassOf<class USMInstance>               StateMachineClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class USMInstance*                           ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstance
struct USMBlueprintUtils_K2_CreateStateMachineInstance_Params
{
public:
	TSubclassOf<class USMInstance>               StateMachineClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeNow;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_312F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMInstance*                           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SMSystem.SMBlueprintUtils.CreateStateMachineInstanceFromTemplate
struct USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Params
{
public:
	TSubclassOf<class USMInstance>               StateMachineClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMInstance*                           Template;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeNow;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3158[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMInstance*                           ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


