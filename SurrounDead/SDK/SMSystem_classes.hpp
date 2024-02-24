#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMEditorGraphNodeInterface
class ISMEditorGraphNodeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISMEditorGraphNodeInterface* GetDefaultObj();

	bool SetNodeName(const class FString& NewName, class FText* OutErrorMessage);
	void ResetNodeName();
	class FString GetNodeName();
	TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>> GetEditorGraphPropertyAsArray(class FName PropertyName, class USMNodeInstance* NodeInstance, int32 ArrayIndex);
	TScriptInterface<class ISMEditorGraphPropertyNodeInterface> GetEditorGraphProperty(class FName PropertyName, class USMNodeInstance* NodeInstance, int32 ArrayIndex);
	TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>> GetAllEditorGraphProperties(class USMNodeInstance* NodeInstance);
	TScriptInterface<class ISMEditorGraphNode_StateBaseInterface> AsStateBaseInterface();
};

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMEditorGraphNode_StateBaseInterface
class ISMEditorGraphNode_StateBaseInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISMEditorGraphNode_StateBaseInterface* GetDefaultObj();

	void SetAnyStateTags(struct FGameplayTagContainer& InAnyStateTags);
	struct FGameplayTagContainer GetAnyStateTags();
};

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMEditorGraphPropertyNodeInterface
class ISMEditorGraphPropertyNodeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISMEditorGraphPropertyNodeInterface* GetDefaultObj();

	void SetNotificationAndHighlight(bool bEnable, enum class ESMLogType Severity, const class FString& Message, bool bClearOnCompile);
	void SetNotification(bool bEnable, enum class ESMLogType Severity, const class FString& Message, bool bClearOnCompile);
	void SetHighlight(bool bEnable, const struct FLinearColor& Color, bool bClearOnCompile);
	void ResetProperty();
};

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMInstanceInterface
class ISMInstanceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISMInstanceInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMStateMachineInterface
class ISMStateMachineInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISMStateMachineInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMStateMachineNetworkedInterface
class ISMStateMachineNetworkedInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISMStateMachineNetworkedInterface* GetDefaultObj();

	bool IsSimulatedProxy();
	bool IsConfiguredForNetworking();
	bool HasAuthority();
};

// 0x8 (0xB0 - 0xA8)
// Class SMSystem.SMBlueprint
class USMBlueprint : public UBlueprint
{
public:
	int32                                        AssetVersion;                                      // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PluginVersion;                                     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USMBlueprint* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class SMSystem.SMNodeBlueprint
class USMNodeBlueprint : public UBlueprint
{
public:
	int32                                        AssetVersion;                                      // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PluginVersion;                                     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USMNodeBlueprint* GetDefaultObj();

};

// 0x10 (0x378 - 0x368)
// Class SMSystem.SMBlueprintGeneratedClass
class USMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	struct FGuid                                 RootGuid;                                          // 0x368(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USMBlueprintGeneratedClass* GetDefaultObj();

};

// 0x0 (0x368 - 0x368)
// Class SMSystem.SMNodeBlueprintGeneratedClass
class USMNodeBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class USMNodeBlueprintGeneratedClass* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class SMSystem.SMNodeInstance
class USMNodeInstance : public UObject
{
public:
	uint8                                        Pad_132E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasGameConstructionScripts;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvalDefaultProperties : 1;                        // Mask: 0x1, PropSize: 0x10x31(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoEvalExposedProperties : 1;                    // Mask: 0x2, PropSize: 0x10x31(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_66 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1339[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            NodeIcon;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             NodeIconSize;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          NodeIconTintColor;                                 // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetVariablesOnInitialize;                       // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsThreadSafe : 1;                                 // Mask: 0x1, PropSize: 0x10x61(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_67 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_134A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       InputComponent;                                    // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESMNodeInput                      AutoReceiveInput;                                  // 0x70(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_135C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputPriority;                                     // 0x74(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockInput : 1;                                   // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_68 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1360[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 TemplateGuid;                                      // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USMNodeInstance* GetDefaultObj();

	void WithExecutionEnvironment(enum class ESMExecutionEnvironment* ExecutionEnvironment);
	void SetVariableReadOnly(class FName VariableName, bool bSetIsReadOnly);
	void SetVariableHidden(class FName VariableName, bool bSetHidden);
	void SetUseCustomIcon(bool bValue);
	void SetUseCustomColor(bool bValue);
	void SetNodeDescriptionText(class FText NewDescription);
	void SetNodeColor(const struct FLinearColor& NewColor);
	void SetDisplayName(class FName NewDisplayName);
	void ResetVariables();
	void OnRootStateMachineStop();
	void OnRootStateMachineStart();
	void OnPreCompileValidate(class USMCompilerLog* CompilerLog);
	void OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController);
	void K2_TryGetOwningEditorGraphNode(TScriptInterface<class ISMEditorGraphNodeInterface>* EditorNode, enum class ESMValidEditorNode* IsValidNode);
	bool IsInitializedAndReadyForInputEvents();
	bool IsInitialized();
	bool IsInEndState();
	bool IsEditorExecution();
	bool IsActive();
	bool HasUpdated();
	float GetTimeInState();
	class USMInstance* GetStateMachineInstance(bool bTopMostInstance);
	class USMStateMachineInstance* GetOwningStateMachineNodeInstance();
	TScriptInterface<class ISMEditorGraphNodeInterface> GetOwningEditorGraphNode();
	struct FVector2D GetNodePosition();
	class FString GetNodeName();
	struct FLinearColor GetNodeIconTintColor();
	struct FVector2D GetNodeIconSize();
	class UTexture2D* GetNodeIcon();
	class FText GetNodeDescriptionText();
	TScriptInterface<class ISMStateMachineNetworkedInterface> GetNetworkInterface();
	class UInputComponent* GetInputComponent();
	struct FGuid GetGuid();
	class UObject* GetContext();
	void EvaluateGraphProperties(bool bTargetOnly);
	void ConstructionScript();
};

// 0x48 (0xF0 - 0xA8)
// Class SMSystem.SMStateInstance_Base
class USMStateInstance_Base : public USMNodeInstance
{
public:
	uint8                                        bEvalGraphsOnStart : 1;                            // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalGraphsOnUpdate : 1;                           // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalGraphsOnEnd : 1;                              // Mask: 0x4, PropSize: 0x10xA8(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalGraphsOnRootStateMachineStart : 1;            // Mask: 0x8, PropSize: 0x10xA8(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalGraphsOnRootStateMachineStop : 1;             // Mask: 0x10, PropSize: 0x10xA8(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_80 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_17C8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDisableTickTransitionEvaluation : 1;              // Mask: 0x1, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvalTransitionsOnStart : 1;                       // Mask: 0x2, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlwaysUpdate : 1;                                 // Mask: 0x4, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanBeEndState : 1;                                // Mask: 0x8, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDefaultToParallel : 1;                            // Mask: 0x10, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAllowParallelReentry : 1;                         // Mask: 0x20, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bStayActiveOnStateChange : 1;                      // Mask: 0x40, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bExcludeFromAnyState : 1;                          // Mask: 0x80, PropSize: 0x10xAA(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17EA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStateBeginEvent;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostStateBeginEvent;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateUpdateEvent;                                // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateEndEvent;                                   // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USMStateInstance_Base* GetDefaultObj();

	bool SwitchToLinkedStateByTransitionName(const class FString& TransitionName, bool bRequireTransitionToPass, bool bActivateNow);
	bool SwitchToLinkedStateByTransition(class USMTransitionInstance* TransitionInstance, bool bRequireTransitionToPass, bool bActivateNow);
	bool SwitchToLinkedStateByName(const class FString& NextStateName, bool bRequireTransitionToPass, bool bActivateNow);
	bool SwitchToLinkedState(class USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass, bool bActivateNow);
	void SetStayActiveOnStateChange(bool bValue);
	void SetExcludeFromAnyState(bool bValue);
	void SetEvalTransitionsOnStart(bool bValue);
	void SetDisableTickTransitionEvaluation(bool bValue);
	void SetDefaultToParallel(bool bValue);
	void SetCanBeEndState(bool bValue);
	void SetAlwaysUpdate(bool bValue);
	void SetAllowParallelReentry(bool bValue);
	void SetActive(bool bValue, bool bSetAllParents, bool bActivateNow);
	void OnStateUpdate(float DeltaSeconds);
	void OnStateEnd();
	void OnStateBegin();
	bool IsStateMachine();
	bool IsEntryState();
	bool IsEndState();
	class USMTransitionInstance* GetTransitionToTake();
	class USMTransitionInstance* GetTransitionByIndex(int32 Index);
	bool GetStayActiveOnStateChange();
	void GetStateInfo(struct FSMStateInfo* State);
	struct FDateTime GetStartTime();
	float GetServerTimeInState(bool* bOutUsedLocalTime);
	class USMStateInstance_Base* GetPreviousStateByName(const class FString& StateName);
	class USMTransitionInstance* GetPreviousActiveTransition();
	class USMStateInstance_Base* GetPreviousActiveState();
	bool GetOutgoingTransitions(TArray<class USMTransitionInstance*>* Transitions, bool bExcludeAlwaysFalse);
	class USMTransitionInstance* GetOutgoingTransitionByName(const class FString& Name);
	class USMStateInstance_Base* GetNextStateByTransitionIndex(int32 Index);
	class USMStateInstance_Base* GetNextStateByName(const class FString& StateName);
	bool GetIncomingTransitions(TArray<class USMTransitionInstance*>* Transitions, bool bExcludeAlwaysFalse);
	class USMTransitionInstance* GetIncomingTransitionByName(const class FString& Name);
	bool GetExcludeFromAnyState();
	bool GetEvalTransitionsOnStart();
	bool GetDisableTickTransitionEvaluation();
	bool GetDefaultToParallel();
	bool GetCanBeEndState();
	bool GetAlwaysUpdate();
	bool GetAllowParallelReentry();
	void EvaluateTransitions();
	bool AreAllOutgoingTransitionsFromAnAnyState();
	bool AreAllIncomingTransitionsFromAnAnyState();
};

// 0x8 (0xF8 - 0xF0)
// Class SMSystem.SMConduitInstance
class USMConduitInstance : public USMStateInstance_Base
{
public:
	bool                                         bEvalGraphsOnInitialize;                           // 0xF0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvalGraphsOnTransitionEval;                       // 0xF1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalWithTransitions : 1;                          // Mask: 0x1, PropSize: 0x10xF2(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanEvaluate : 1;                                  // Mask: 0x2, PropSize: 0x10xF2(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18E2[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USMConduitInstance* GetDefaultObj();

	void SetEvalWithTransitions(bool bValue);
	void SetCanEvaluate(bool bValue);
	void OnConduitShutdown();
	void OnConduitInitialized();
	void OnConduitEntered();
	bool GetEvalWithTransitions();
	bool GetCanEvaluate();
	bool CanEnterTransition();
};

// 0x6D0 (0x6F8 - 0x28)
// Class SMSystem.SMInstance
class USMInstance : public UObject
{
public:
	uint8                                        Pad_2450[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSMReferenceContainer>         ReplicatedReferences;                              // 0x80(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	struct FGuid                                 RootStateMachineGuid;                              // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreStateMachineInitializedEvent;                 // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineInitializedEvent;                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStartedEvent;                        // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineUpdatedEvent;                        // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStoppedEvent;                        // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineShutdownEvent;                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineTransitionTakenEvent;                // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStateChangedEvent;                   // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStateStartedEvent;                   // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USMStateMachineComponent*              ComponentOwner;                                    // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class ISMStateMachineNetworkedInterface> NetworkInterface;                                  // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2492[0x140];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSMStateMachine                       RootStateMachine;                                  // 0x288(0x2C8)(Protected, NativeAccessSpecifierProtected)
	class UObject*                               R_StateMachineContext;                             // 0x550(0x8)(Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USMInstance*                           ReferenceOwner;                                    // 0x558(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USMStateMachineInstance>   StateMachineClass;                                 // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoManageTime : 1;                               // Mask: 0x1, PropSize: 0x10x568(0x1)(Edit, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bStopOnEndState : 1;                               // Mask: 0x2, PropSize: 0x10x568(0x1)(Edit, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanEverTick : 1;                                  // Mask: 0x4, PropSize: 0x10x568(0x1)(Edit, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanTickWhenPaused : 1;                            // Mask: 0x8, PropSize: 0x10x568(0x1)(Edit, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTickRegistered : 1;                               // Mask: 0x10, PropSize: 0x10x568(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTickBeforeInitialize : 1;                         // Mask: 0x20, PropSize: 0x10x568(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTickBeforeBeginPlay : 1;                          // Mask: 0x40, PropSize: 0x10x568(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_8A : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_24BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickInterval;                                      // 0x56C(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24BF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       InputComponent;                                    // 0x580(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESMStateMachineInput              AutoReceiveInput;                                  // 0x588(0x1)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputPriority;                                     // 0x58C(0x4)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBlockInput : 1;                                   // Mask: 0x1, PropSize: 0x10x590(0x1)(Edit, Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_8B : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_24CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSMStateHistory>               StateHistory;                                      // 0x598(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	int32                                        StateHistoryMaxCount;                              // 0x5A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bEnableLogging : 1;                                // Mask: 0x1, PropSize: 0x10x5AC(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLogStateChange : 1;                               // Mask: 0x2, PropSize: 0x10x5AC(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLogTransitionTaken : 1;                           // Mask: 0x4, PropSize: 0x10x5AC(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanReplicateAsReference : 1;                      // Mask: 0x8, PropSize: 0x10x5AC(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_8C : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_24DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, struct FGuid>             PathGuidRedirectMap;                               // 0x5B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, struct FSMGuidMap>        RootPathGuidCache;                                 // 0x600(0x50)(DuplicateTransient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24E7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       ReferenceTemplates;                                // 0x660(0x10)(ExportObject, ZeroConstructor, DuplicateTransient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FSMExposedNodeFunctions> NodeExposedFunctions;                              // 0x670(0x50)(DuplicateTransient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24EB[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USMInstance* GetDefaultObj();

	void Update(float DeltaSeconds);
	void TryGetTransitionInfo(struct FGuid& Guid, struct FSMTransitionInfo* TransitionInfo, bool* bSuccess);
	void TryGetStateInfo(struct FGuid& Guid, struct FSMStateInfo* StateInfo, bool* bSuccess);
	void TryGetNestedActiveState(struct FSMStateInfo* FoundState, bool* bSuccess);
	void Tick(float DeltaTime);
	bool TakeTransitionChain(TArray<class USMTransitionInstance*>& InTransitionChain);
	void SwitchActiveStateByQualifiedName(const class FString& InFullPath, bool bDeactivateOtherStates);
	void SwitchActiveState(class USMStateInstance_Base* NewStateInstance, bool bDeactivateOtherStates);
	void Stop();
	void StartWithNewContext(class UObject* Context);
	void Start();
	void Shutdown();
	void SetTickOnManualUpdate(bool Value);
	void SetTickInterval(float Value);
	void SetTickBeforeBeginPlay(bool Value);
	void SetStopOnEndState(bool Value);
	void SetStateMachineClass(TSubclassOf<class USMStateMachineInstance> NewStateMachineClass);
	void SetStateHistoryMaxCount(int32 NewSize);
	void SetRootStateMachineNodeClass(TSubclassOf<class USMStateMachineInstance> NewStateMachineNodeClass);
	void SetGuidRedirectMap(TMap<struct FGuid, struct FGuid>& InGuidMap);
	void SetContext(class UObject* Context);
	void SetCanTickWhenPaused(bool Value);
	void SetCanEverTick(bool Value);
	void SetAutoManageTime(bool Value);
	void RunUpdateAsReference(float DeltaSeconds);
	void Restart();
	void ReplicatedStop();
	void ReplicatedStart();
	void ReplicatedRestart();
	void REP_OnReplicatedReferencesLoaded();
	void PreloadAllNodeInstances();
	void OnStateMachineUpdate(float DeltaSeconds);
	void OnStateMachineTransitionTaken(struct FSMTransitionInfo& Transition);
	void OnStateMachineStop();
	void OnStateMachineStateStarted(struct FSMStateInfo& State);
	void OnStateMachineStateChanged(struct FSMStateInfo& ToState, struct FSMStateInfo& FromState);
	void OnStateMachineStart();
	void OnStateMachineShutdown();
	void OnStateMachineInitialStateLoaded(struct FGuid& StateGuid);
	void OnStateMachineInitialized();
	void OnPreStateMachineInitialized();
	void OnContextPawnRestarted(class APawn* Pawn);
	void LoadFromState(struct FGuid& FromGuid, bool bAllParents, bool bNotify);
	void LoadFromMultipleStates(TArray<struct FGuid>& FromGuids, bool bNotify);
	void K2_TryGetNetworkInterface(TScriptInterface<class ISMStateMachineNetworkedInterface>* Interface, bool* bIsValid);
	void K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo);
	bool IsTickableWhenPaused();
	bool IsTickable();
	bool IsStopping();
	bool IsInitializingAsync();
	bool IsInitialized();
	bool IsInEndState();
	bool IsActive();
	void Internal_Update(float DeltaSeconds);
	void Internal_EventUpdate();
	void Internal_EventCleanup(struct FGuid& PathGuid);
	bool Internal_EvaluateAndTakeTransitionChainByGuid(struct FGuid& PathGuid);
	void Initialize(class UObject* Context);
	bool HasStarted();
	class USMTransitionInstance* GetTransitionInstanceByGuid(struct FGuid& Guid);
	float GetTickInterval();
	bool GetStopOnEndState();
	TSubclassOf<class USMStateMachineInstance> GetStateMachineClass();
	class USMStateInstance_Base* GetStateInstanceByQualifiedName(const class FString& InFullPath);
	class USMStateInstance_Base* GetStateInstanceByGuid(struct FGuid& Guid);
	int32 GetStateHistoryMaxCount();
	TArray<struct FSMStateHistory> GetStateHistory();
	class USMStateInstance_Base* GetSingleActiveStateInstance(bool bCheckNested);
	struct FGuid GetSingleActiveStateGuid(bool bCheckNested);
	class USMStateMachineInstance* GetRootStateMachineNodeInstance();
	TSubclassOf<class USMStateMachineInstance> GetRootStateMachineNodeClass();
	class USMInstance* GetReferenceOwner();
	class USMInstance* GetReferencedInstanceByGuid(struct FGuid& Guid);
	class USMInstance* GetPrimaryReferenceOwner();
	class USMNodeInstance* GetNodeInstanceByGuid(struct FGuid& Guid);
	TScriptInterface<class ISMStateMachineNetworkedInterface> GetNetworkInterface();
	class UInputComponent* GetInputComponent();
	TMap<struct FGuid, struct FGuid> GetGuidRedirectMap();
	class UObject* GetContext();
	class USMStateMachineComponent* GetComponentOwner();
	void GetAllTransitionInstances(TArray<class USMTransitionInstance*>* TransitionInstances);
	void GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances);
	TArray<class USMInstance*> GetAllReferencedInstances(bool bIncludeChildren);
	void GetAllActiveStateInstances(TArray<class USMStateInstance_Base*>* ActiveStateInstances);
	void GetAllActiveStateGuids(TArray<struct FGuid>* ActiveGuids);
	void EvaluateTransitions();
	bool EvaluateAndTakeTransitionChain(class USMTransitionInstance* InFirstTransitionInstance);
	bool EvaluateAndFindTransitionChain(class USMTransitionInstance* InFirstTransitionInstance, TArray<class USMTransitionInstance*>* OutTransitionChain, class USMStateInstance_Base** OutDestinationState, bool bRequirePreviousStateActive);
	void ClearStateHistory();
	void ClearLoadedStates();
	bool CanTickOnManualUpdate();
	bool CanEverTick();
	bool CanAutoManageTime();
	bool AreInitialStatesSetFromLoad();
};

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMCompilerLog
class USMCompilerLog : public UObject
{
public:

	static class UClass* StaticClass();
	static class USMCompilerLog* GetDefaultObj();

	void LogProperty(class FName PropertyName, class USMNodeInstance* NodeInstance, const class FString& Message, enum class ESMCompilerLogType Severity, bool bHighlight, bool bSilent, int32 ArrayIndex);
	void Log(enum class ESMCompilerLogType Severity, const class FString& Message);
};

// 0x8 (0x30 - 0x28)
// Class SMSystem.SMRuntimeSettings
class USMRuntimeSettings : public UObject
{
public:
	bool                                         bPreloadDefaultNodes;                              // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2617[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USMRuntimeSettings* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class SMSystem.SMStateInstance
class USMStateInstance : public USMStateInstance_Base
{
public:

	static class UClass* StaticClass();
	static class USMStateInstance* GetDefaultObj();

	void RemoveStateFromStack(int32 StackIndex);
	void OnStateShutdown();
	void OnStateInitialized();
	int32 GetStateStackCount();
	class USMStateInstance_Base* GetStateInStackByClass(TSubclassOf<class USMStateInstance> StateClass, bool bIncludeChildren);
	class USMStateInstance_Base* GetStateInStack(int32 Index);
	int32 GetStateIndexInStack(class USMStateInstance_Base* StateInstance);
	class USMStateInstance_Base* GetStackOwnerInstance();
	void GetAllStateStackInstances(TArray<class USMStateInstance_Base*>* StateStackInstances);
	void GetAllStatesInStackOfClass(TSubclassOf<class USMStateInstance> StateClass, TArray<class USMStateInstance_Base*>* StateStackInstances, bool bIncludeChildren);
	void ClearStateStack();
	class USMStateInstance* AddStateToStack(TSubclassOf<class USMStateInstance> StateClass, int32 StackIndex);
};

// 0x0 (0xF0 - 0xF0)
// Class SMSystem.SMEntryStateInstance
class USMEntryStateInstance : public USMStateInstance_Base
{
public:

	static class UClass* StaticClass();
	static class USMEntryStateInstance* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class SMSystem.SMAnyStateInstance
class USMAnyStateInstance : public USMStateInstance_Base
{
public:

	static class UClass* StaticClass();
	static class USMAnyStateInstance* GetDefaultObj();

};

// 0x160 (0x200 - 0xA0)
// Class SMSystem.SMStateMachineComponent
class USMStateMachineComponent : public UActorComponent
{
public:
	uint8                                        Pad_2C70[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStateMachineInitializedEvent;                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStartedEvent;                        // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineUpdatedEvent;                        // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStoppedEvent;                        // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineShutdownEvent;                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineTransitionTakenEvent;                // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStateChangedEvent;                   // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateMachineStateStartedEvent;                   // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSet<class UActorChannel*>                   CurrentActorChannels;                              // 0x130(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C87[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAutomaticallyHandleNewConnections : 1;            // Mask: 0x1, PropSize: 0x10x1A4(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A5 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2C89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USMInstance>               StateMachineClass;                                 // 0x1A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInitializeOnBeginPlay : 1;                        // Mask: 0x1, PropSize: 0x10x1B0(0x1)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartOnBeginPlay : 1;                             // Mask: 0x2, PropSize: 0x10x1B0(0x1)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopOnEndPlay : 1;                                // Mask: 0x4, PropSize: 0x10x1B0(0x1)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A6 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ESMThreadMode                     BeginPlayInitializationMode;                       // 0x1B1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReuseInstanceAfterShutdown : 1;                   // Mask: 0x1, PropSize: 0x10x1B2(0x1)(Edit, Net, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLetInstanceManageTick : 1;                        // Mask: 0x2, PropSize: 0x10x1B2(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A8 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ESMNetworkConfigurationType       StateChangeAuthority;                              // 0x1B3(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMNetworkConfigurationType       NetworkTickConfiguration;                          // 0x1B4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMNetworkConfigurationType       NetworkStateExecution;                             // 0x1B5(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeSimulatedProxies : 1;                      // Mask: 0x1, PropSize: 0x10x1B6(0x1)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AA : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ESMThreadMode                     ReplicatedInitializationMode;                      // 0x1B7(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMNetworkConfigurationType       NetworkTransitionEnteredConfiguration;             // 0x1B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWaitForTransactionsFromServer : 1;                // Mask: 0x1, PropSize: 0x10x1B9(0x1)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHandleControllerChange : 1;                       // Mask: 0x2, PropSize: 0x10x1B9(0x1)(Edit, Net, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCalculateServerTimeForClients : 1;                // Mask: 0x4, PropSize: 0x10x1B9(0x1)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOwnerNetUpdateFrequency : 1;                   // Mask: 0x8, PropSize: 0x10x1B9(0x1)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AC : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2CB7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ServerNetUpdateFrequency;                          // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientNetUpdateFrequency;                          // 0x1C0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysMulticast : 1;                              // Mask: 0x1, PropSize: 0x10x1C4(0x1)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AD : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2CBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USMStateMachineComponent*              ComponentToCopy;                                   // 0x1C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CBF[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USMInstance*                           R_Instance;                                        // 0x1E8(0x8)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USMInstance*                           InstanceTemplate;                                  // 0x1F0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanInstanceNetworkTick : 1;                       // Mask: 0x1, PropSize: 0x10x1F8(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2CC6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USMStateMachineComponent* GetDefaultObj();

	void Update(float DeltaSeconds);
	void Stop();
	void Start();
	void Shutdown();
	void SetCanInstanceNetworkTick(bool bCanEverTick);
	void SERVER_Update(float DeltaTime);
	void SERVER_TakeTransitions(TArray<struct FSMTransitionTransaction>& TransitionTransactions);
	void SERVER_Stop(struct FSMTransaction_Base& Transaction);
	void SERVER_Start(struct FSMTransaction_Base& Transaction);
	void SERVER_Shutdown(struct FSMTransaction_Base& Transaction);
	void SERVER_RequestFullSync(bool bForceFullRefresh);
	void SERVER_Initialize(struct FSMInitializeTransaction& Transaction);
	void SERVER_FullSync(struct FSMFullSyncTransaction& FullSyncTransaction);
	void SERVER_ActivateStates(TArray<struct FSMActivateStateTransaction>& StateTransactions);
	void Restart();
	void REP_OnInstanceLoaded();
	void OnPostInitialize();
	void OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController);
	void MULTICAST_TakeTransitions(TArray<struct FSMTransitionTransaction>& Transactions);
	void MULTICAST_Stop(struct FSMTransaction_Base& Transaction);
	void MULTICAST_Start(struct FSMTransaction_Base& Transaction);
	void MULTICAST_Shutdown(struct FSMTransaction_Base& Transaction);
	void MULTICAST_FullSync(struct FSMFullSyncTransaction& FullSyncTransaction);
	void MULTICAST_ActivateStates(TArray<struct FSMActivateStateTransaction>& StateTransactions);
	void K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo);
	bool IsStateMachineActive();
	bool IsInitialized();
	void Internal_OnStateMachineUpdated(class USMInstance* Instance, float DeltaSeconds);
	void Internal_OnStateMachineTransitionTaken(class USMInstance* Instance, const struct FSMTransitionInfo& Transition);
	void Internal_OnStateMachineStopped(class USMInstance* Instance);
	void Internal_OnStateMachineStateStarted(class USMInstance* Instance, const struct FSMStateInfo& State);
	void Internal_OnStateMachineStateChanged(class USMInstance* Instance, const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState);
	void Internal_OnStateMachineStarted(class USMInstance* Instance);
	void Internal_OnStateMachineShutdown(class USMInstance* Instance);
	void Internal_OnReplicatedInstanceInitialized(class USMInstance* Instance);
	void Internal_OnInstanceInitializedAsync(class USMInstance* Instance);
	void Initialize(class UObject* Context);
	class AActor* GetTopMostParentActor();
	class USMInstance* GetInstance();
	class UObject* GetContextForInitialization();
	void CopySettingsFromOtherComponent(class USMStateMachineComponent* OtherComponent);
	void CLIENT_TakeTransitions(TArray<struct FSMTransitionTransaction>& Transactions);
	void CLIENT_Stop(struct FSMTransaction_Base& Transaction);
	void CLIENT_Start(struct FSMTransaction_Base& Transaction);
	void CLIENT_Shutdown(struct FSMTransaction_Base& Transaction);
	void CLIENT_FullSync(struct FSMFullSyncTransaction& FullSyncTransaction);
	void CLIENT_ActivateStates(TArray<struct FSMActivateStateTransaction>& StateTransactions);
};

// 0x8 (0xF8 - 0xF0)
// Class SMSystem.SMStateMachineInstance
class USMStateMachineInstance : public USMStateInstance_Base
{
public:
	uint8                                        bWaitForEndState : 1;                              // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReuseCurrentState : 1;                            // Mask: 0x2, PropSize: 0x10xF0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReuseIfNotEndState : 1;                           // Mask: 0x4, PropSize: 0x10xF0(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F50[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USMStateMachineInstance* GetDefaultObj();

	void SetWaitForEndState(bool bValue);
	void SetReuseIfNotEndState(bool bValue);
	void SetReuseCurrentState(bool bValue);
	void OnStateShutdown();
	void OnStateMachineCompleted();
	void OnStateInitialized();
	void OnEndStateReached();
	bool IsStateMachineInEndState();
	bool GetWaitForEndState();
	class USMInstance* GetStateMachineReference();
	bool GetReuseIfNotEndState();
	bool GetReuseCurrentState();
	void GetEntryStates(TArray<class USMStateInstance_Base*>* EntryStates);
	class USMStateInstance_Base* GetContainedStateByName(const class FString& StateName);
	void GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances);
	void GetActiveStates(TArray<class USMStateInstance_Base*>* ActiveStates);
};

// 0x18 (0xC0 - 0xA8)
// Class SMSystem.SMTransitionInstance
class USMTransitionInstance : public USMNodeInstance
{
public:
	int32                                        PriorityOrder;                                     // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRunParallel : 1;                                  // Mask: 0x1, PropSize: 0x10xAC(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvalIfNextStateActive : 1;                        // Mask: 0x2, PropSize: 0x10xAC(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanEvaluate : 1;                                  // Mask: 0x4, PropSize: 0x10xAC(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanEvaluateFromEvent : 1;                         // Mask: 0x8, PropSize: 0x10xAC(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanEvalWithStartState : 1;                        // Mask: 0x10, PropSize: 0x10xAC(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_B8 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_30D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTransitionEnteredEvent;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USMTransitionInstance* GetDefaultObj();

	void SetRunParallel(bool bValue);
	void SetPriorityOrder(int32 Value);
	void SetEvalIfNextStateActive(bool bValue);
	void SetCanEvalWithStartState(bool bValue);
	void SetCanEvaluateFromEvent(bool bValue);
	void SetCanEvaluate(bool bValue);
	void OnTransitionShutdown();
	void OnTransitionInitialized();
	void OnTransitionEntered();
	bool IsTransitionFromLinkState();
	bool IsTransitionFromAnyState();
	int32 GetTransitionStackCount();
	class USMTransitionInstance* GetTransitionInStackByClass(TSubclassOf<class USMTransitionInstance> TransitionClass, bool bIncludeChildren);
	class USMTransitionInstance* GetTransitionInStack(int32 Index);
	void GetTransitionInfo(struct FSMTransitionInfo* Transition);
	int32 GetTransitionIndexInStack(class USMTransitionInstance* TransitionInstance);
	class USMTransitionInstance* GetStackOwnerInstance();
	class USMStateInstance_Base* GetSourceStateForActiveTransition();
	struct FDateTime GetServerTimestamp();
	bool GetRunParallel();
	int32 GetPriorityOrder();
	class USMStateInstance_Base* GetPreviousStateInstance();
	class USMStateInstance_Base* GetNextStateInstance();
	bool GetEvalIfNextStateActive();
	class USMStateInstance_Base* GetDestinationStateForActiveTransition();
	bool GetCanEvalWithStartState();
	bool GetCanEvaluateFromEvent();
	bool GetCanEvaluate();
	void GetAllTransitionStackInstances(TArray<class USMTransitionInstance*>* TransitionStackInstances);
	void GetAllTransitionsInStackOfClass(TSubclassOf<class USMTransitionInstance> TransitionClass, TArray<class USMTransitionInstance*>* TransitionStackInstances, bool bIncludeChildren);
	bool EvaluateFromManuallyBoundEvent();
	bool DoesTransitionPass();
	bool CanEnterTransition();
};

// 0x0 (0x28 - 0x28)
// Class SMSystem.SMBlueprintUtils
class USMBlueprintUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USMBlueprintUtils* GetDefaultObj();

	class USMInstance* K2_CreateStateMachineInstancePure(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, bool bInitializeNow);
	class USMInstance* K2_CreateStateMachineInstanceAsync(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, const struct FLatentActionInfo& LatentInfo);
	class USMInstance* K2_CreateStateMachineInstance(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, bool bInitializeNow);
	class USMInstance* CreateStateMachineInstanceFromTemplate(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, class USMInstance* Template, bool bInitializeNow);
};

}


