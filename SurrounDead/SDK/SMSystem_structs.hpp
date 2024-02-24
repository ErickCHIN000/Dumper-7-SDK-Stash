#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESMLogType : uint8
{
	Note                           = 0,
	Warning                        = 1,
	Error                          = 2,
	ESMLogType_MAX                 = 3,
};

enum class ESMNetworkConfigurationType : uint8
{
	SM_Client                      = 0,
	SM_Server                      = 1,
	SM_ClientAndServer             = 2,
	SM_MAX                         = 3,
};

enum class ESMExposedFunctionExecutionType : uint8
{
	SM_Graph                       = 0,
	SM_NodeInstance                = 1,
	SM_None                        = 2,
	SM_MAX                         = 3,
};

enum class ESMConditionalEvaluationType : uint8
{
	SM_Graph                       = 0,
	SM_NodeInstance                = 1,
	SM_AlwaysFalse                 = 2,
	SM_AlwaysTrue                  = 3,
	SM_MAX                         = 4,
};

enum class ESMStateMachineInput : uint8
{
	Disabled                       = 0,
	UseContextController           = 1,
	Player0                        = 2,
	Player1                        = 3,
	Player2                        = 4,
	Player3                        = 5,
	Player4                        = 6,
	Player5                        = 7,
	Player6                        = 8,
	Player7                        = 9,
	ESMStateMachineInput_MAX       = 10,
};

enum class ESMNodeInput : uint8
{
	Disabled                       = 0,
	UseOwningStateMachine          = 1,
	UseContextController           = 2,
	Player0                        = 3,
	Player1                        = 4,
	Player2                        = 5,
	Player3                        = 6,
	Player4                        = 7,
	Player5                        = 8,
	Player6                        = 9,
	Player7                        = 10,
	ESMNodeInput_MAX               = 11,
};

enum class ESMExecutionEnvironment : uint8
{
	EditorExecution                = 0,
	GameExecution                  = 1,
	ESMExecutionEnvironment_MAX    = 2,
};

enum class ESMValidEditorNode : uint8
{
	IsValidEditorNode              = 0,
	IsNotValidEditorNode           = 1,
	ESMValidEditorNode_MAX         = 2,
};

enum class ESMCompilerLogType : uint8
{
	Note                           = 0,
	Warning                        = 1,
	Error                          = 2,
	ESMCompilerLogType_MAX         = 3,
};

enum class ESMThreadMode : uint8
{
	Blocking                       = 0,
	Async                          = 1,
	ESMThreadMode_MAX              = 2,
};

enum class ESMTransactionType : uint8
{
	SM_Unknown                     = 0,
	SM_Transition                  = 1,
	SM_State                       = 2,
	SM_FullSync                    = 3,
	SM_Start                       = 4,
	SM_Stop                        = 5,
	SM_Initialize                  = 6,
	SM_Shutdown                    = 7,
	SM_MAX                         = 8,
};

enum class ESMOptionalBool : uint8
{
	Unset                          = 0,
	IsFalse                        = 1,
	IsTrue                         = 2,
	ESMOptionalBool_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct SMSystem.SMInfo_Base
struct FSMInfo_Base
{
public:
	uint8                                        Pad_316F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OwnerGuid;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NodeGuid;                                          // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OwnerNodeGuid;                                     // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMNodeInstance*                       NodeInstance;                                      // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x98 - 0x60)
// ScriptStruct SMSystem.SMTransitionInfo
struct FSMTransitionInfo : public FSMInfo_Base
{
public:
	struct FGuid                                 FromStateGuid;                                     // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ToStateGuid;                                       // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3181[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastNetworkTimestamp;                              // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3183[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x80 - 0x60)
// ScriptStruct SMSystem.SMStateInfo
struct FSMStateInfo : public FSMInfo_Base
{
public:
	TArray<struct FSMTransitionInfo>             OutgoingTransitions;                               // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsEndState;                                       // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3187[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SMSystem.SMGraphProperty_Base_Runtime
struct FSMGraphProperty_Base_Runtime
{
public:
	uint8                                        Pad_31AD[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 OwnerGuid;                                         // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsDefaultValueOnly : 1;                           // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31B3[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SMSystem.SMGraphPropertyTemplateOwner
struct FSMGraphPropertyTemplateOwner
{
public:
	TArray<struct FSMGraphProperty_Base_Runtime> VariableGraphProperties;                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct SMSystem.SMNode_Base
struct FSMNode_Base
{
public:
	uint8                                        Pad_31BD[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeInState;                                       // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInEndState;                                     // 0x14(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasUpdated;                                       // 0x15(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DuplicateId;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             NodePosition;                                      // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasInputEvents : 1;                               // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BB : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x34(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 OwnerGuid;                                         // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 PathGuid;                                          // 0x54(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31D6[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x70(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TemplateName;                                      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          StackTemplateNames;                                // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class USMNodeInstance*>               StackNodeInstances;                                // 0x98(0x10)(BlueprintVisible, ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UObject>>           NodeStackClasses;                                  // 0xA8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class USMInstance*                           OwningInstance;                                    // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USMNodeInstance*                       NodeInstance;                                      // 0xC0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31EA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, struct FSMGraphPropertyTemplateOwner> TemplateVariableGraphProperties;                   // 0xD8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                   NodeInstanceClass;                                 // 0x128(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31EC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x188 - 0x138)
// ScriptStruct SMSystem.SMState_Base
struct FSMState_Base : public FSMNode_Base
{
public:
	uint8                                        bIsRootNode : 1;                                   // Mask: 0x1, PropSize: 0x10x138(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysUpdate : 1;                                 // Mask: 0x2, PropSize: 0x10x138(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalTransitionsOnStart : 1;                       // Mask: 0x4, PropSize: 0x10x138(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableTickTransitionEvaluation : 1;              // Mask: 0x8, PropSize: 0x10x138(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStayActiveOnStateChange : 1;                      // Mask: 0x10, PropSize: 0x10x138(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowParallelReentry : 1;                         // Mask: 0x20, PropSize: 0x10x138(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeEndState : 1;                                // Mask: 0x40, PropSize: 0x10x138(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FF[0x4F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x190 - 0x188)
// ScriptStruct SMSystem.SMConduit
struct FSMConduit : public FSMState_Base
{
public:
	uint8                                        bCanEnterTransition : 1;                           // Mask: 0x1, PropSize: 0x10x188(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanEvaluate : 1;                                  // Mask: 0x2, PropSize: 0x10x188(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalWithTransitions : 1;                          // Mask: 0x4, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BC : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ESMConditionalEvaluationType      ConditionalEvaluationType;                         // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3208[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SMSystem.SMExposedFunctionHandler
struct FSMExposedFunctionHandler
{
public:
	class FName                                  BoundFunction;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMExposedFunctionExecutionType   ExecutionType;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3213[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFunction*                             Function;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SMSystem.SMExposedFunctionContainer
struct FSMExposedFunctionContainer
{
public:
	TArray<struct FSMExposedFunctionHandler>     ExposedFunctionHandlers;                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SMSystem.SMNode_FunctionHandlers
struct FSMNode_FunctionHandlers
{
public:
	TArray<struct FSMExposedFunctionHandler>     NodeInitializedGraphEvaluators;                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     NodeShutdownGraphEvaluators;                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     OnRootStateMachineStartedGraphEvaluator;           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     OnRootStateMachineStoppedGraphEvaluator;           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3229[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x78 - 0x48)
// ScriptStruct SMSystem.SMState_FunctionHandlers
struct FSMState_FunctionHandlers : public FSMNode_FunctionHandlers
{
public:
	TArray<struct FSMExposedFunctionHandler>     BeginStateGraphEvaluator;                          // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     UpdateStateGraphEvaluator;                         // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     EndStateGraphEvaluator;                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x68 - 0x48)
// ScriptStruct SMSystem.SMConduit_FunctionHandlers
struct FSMConduit_FunctionHandlers : public FSMNode_FunctionHandlers
{
public:
	TArray<struct FSMExposedFunctionHandler>     CanEnterConduitGraphEvaluator;                     // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     ConduitEnteredGraphEvaluator;                      // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x88 - 0x48)
// ScriptStruct SMSystem.SMTransition_FunctionHandlers
struct FSMTransition_FunctionHandlers : public FSMNode_FunctionHandlers
{
public:
	TArray<struct FSMExposedFunctionHandler>     CanEnterTransitionGraphEvaluator;                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     TransitionEnteredGraphEvaluator;                   // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     TransitionPreEvaluateGraphEvaluator;               // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMExposedFunctionHandler>     TransitionPostEvaluateGraphEvaluator;              // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct SMSystem.SMExposedNodeFunctions
struct FSMExposedNodeFunctions
{
public:
	TArray<struct FSMState_FunctionHandlers>     FSMState_FunctionHandlers;                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMConduit_FunctionHandlers>   FSMConduit_FunctionHandlers;                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSMTransition_FunctionHandlers> FSMTransition_FunctionHandlers;                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FSMExposedFunctionContainer> GraphPropertyFunctionHandlers;                     // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x0 (0x48 - 0x48)
// ScriptStruct SMSystem.SMGraphProperty_Runtime
struct FSMGraphProperty_Runtime : public FSMGraphProperty_Base_Runtime
{
public:
};

// 0xC0 (0x108 - 0x48)
// ScriptStruct SMSystem.SMGraphProperty_Base
struct FSMGraphProperty_Base : public FSMGraphProperty_Base_Runtime
{
public:
	class FName                                  VariableName;                                      // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdGraphPinType                       VariableType;                                      // 0x50(0x58)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMemberReference                      MemberReference;                                   // 0xA8(0x38)(NativeAccessSpecifierPublic)
	bool                                         bIsInArray;                                        // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnly;                                         // 0xE1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0xE2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 GuidUnmodified;                                    // 0xE4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 TemplateGuid;                                      // 0xF4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        GuidIndex;                                         // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x0 (0x108 - 0x108)
// ScriptStruct SMSystem.SMGraphProperty
struct FSMGraphProperty : public FSMGraphProperty_Base
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SMSystem.SMDebugStateMachine
struct FSMDebugStateMachine
{
public:
	uint8                                        Pad_3277[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SMSystem.SMReferenceContainer
struct FSMReferenceContainer
{
public:
	struct FGuid                                 PathGuid;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USMInstance*                           Reference;                                         // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SMSystem.SMGuidMap
struct FSMGuidMap
{
public:
	TMap<struct FGuid, struct FGuid>             NodeToPathGuids;                                   // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SMSystem.SMNodeDescription
struct FSMNodeDescription
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Category;                                          // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SMSystem.SMNodeClassRule
struct FSMNodeClassRule
{
public:
	uint8                                        Pad_329C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIncludeChildren;                                  // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNOT;                                              // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x38 - 0x10)
// ScriptStruct SMSystem.SMStateClassRule
struct FSMStateClassRule : public FSMNodeClassRule
{
public:
	TSoftClassPtr<class USMStateInstance_Base>   StateClass;                                        // 0x10(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct SMSystem.SMTransitionClassRule
struct FSMTransitionClassRule : public FSMNodeClassRule
{
public:
	TSoftClassPtr<class USMTransitionInstance>   TransitionClass;                                   // 0x10(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct SMSystem.SMStateMachineClassRule
struct FSMStateMachineClassRule : public FSMNodeClassRule
{
public:
	TSoftClassPtr<class USMStateMachineInstance> StateMachineClass;                                 // 0x10(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SMSystem.SMNodeConnectionRule
struct FSMNodeConnectionRule
{
public:
	struct FSMStateClassRule                     FromState;                                         // 0x0(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSMStateClassRule                     ToState;                                           // 0x38(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSMStateMachineClassRule              InStateMachine;                                    // 0x70(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// ScriptStruct SMSystem.SMConnectionValidator
struct FSMConnectionValidator
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SMSystem.SMTransitionConnectionValidator
struct FSMTransitionConnectionValidator : public FSMConnectionValidator
{
public:
	TArray<struct FSMNodeConnectionRule>         AllowedConnections;                                // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SMSystem.SMStateConnectionValidator
struct FSMStateConnectionValidator : public FSMConnectionValidator
{
public:
	TArray<struct FSMStateClassRule>             AllowedInboundStates;                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FSMStateClassRule>             AllowedOutboundStates;                             // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FSMStateMachineClassRule>      AllowedInStateMachines;                            // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SMSystem.SMStateMachineNodePlacementValidator
struct FSMStateMachineNodePlacementValidator : public FSMConnectionValidator
{
public:
	TArray<struct FSMStateClassRule>             AllowedStates;                                     // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FSMTransitionClassRule>        AllowedTransitions;                                // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bAllowReferences;                                  // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowParents;                                     // 0x21(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSubStateMachines;                            // 0x22(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class USMStateMachineInstance> DefaultSubStateMachineClass;                       // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// ScriptStruct SMSystem.SMNodeWidgetInfo
struct FSMNodeWidgetInfo
{
public:
};

// 0x0 (0x0 - 0x0)
// ScriptStruct SMSystem.SMTextDisplayWidgetInfo
struct FSMTextDisplayWidgetInfo : public FSMNodeWidgetInfo
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SMSystem.SMStateHistory
struct FSMStateHistory
{
public:
	struct FGuid                                 StateGuid;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             StartTime;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInState;                                       // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ServerTimeInState;                                 // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x188 - 0x188)
// ScriptStruct SMSystem.SMState
struct FSMState : public FSMState_Base
{
public:
};

// 0x140 (0x2C8 - 0x188)
// ScriptStruct SMSystem.SMStateMachine
struct FSMStateMachine : public FSMState_Base
{
public:
	uint8                                        bHasAdditionalLogic : 1;                           // Mask: 0x1, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReuseCurrentState : 1;                            // Mask: 0x2, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyReuseIfNotEndState : 1;                       // Mask: 0x4, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowIndependentTick : 1;                         // Mask: 0x8, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCallReferenceTickOnManualUpdate : 1;              // Mask: 0x10, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWaitForEndState : 1;                              // Mask: 0x20, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BD : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_330A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISMStateMachineNetworkedInterface> NetworkedInterface;                                // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_330C[0xF0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   ReferencedStateMachineClass;                       // 0x290(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ReferencedTemplateName;                            // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  DynamicStateMachineReferenceVariable;              // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USMInstance*                           ReferencedStateMachine;                            // 0x2A8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USMInstance*                           IsReferencedByInstance;                            // 0x2B0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3312[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct SMSystem.SMTransaction_Base
struct FSMTransaction_Base
{
public:
	uint8                                        Pad_3315[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESMTransactionType                TransactionType;                                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOriginatedFromServer : 1;                         // Mask: 0x1, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD (0x10 - 0x3)
// ScriptStruct SMSystem.SMInitializeTransaction
struct FSMInitializeTransaction : public FSMTransaction_Base
{
public:
	uint8                                        Pad_331B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Context;                                           // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x35 (0x38 - 0x3)
// ScriptStruct SMSystem.SMTransitionTransaction
struct FSMTransitionTransaction : public FSMTransaction_Base
{
public:
	uint8                                        Pad_331E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 BaseGuid;                                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3321[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         AdditionalGuids;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveTime;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3327[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x19 (0x1C - 0x3)
// ScriptStruct SMSystem.SMActivateStateTransaction
struct FSMActivateStateTransaction : public FSMTransaction_Base
{
public:
	uint8                                        Pad_3329[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 BaseGuid;                                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInState;                                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10x18(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetAllParents : 1;                                // Mask: 0x2, PropSize: 0x10x18(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x15 (0x18 - 0x3)
// ScriptStruct SMSystem.SMFullSyncStateTransaction
struct FSMFullSyncStateTransaction : public FSMTransaction_Base
{
public:
	uint8                                        Pad_3332[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 BaseGuid;                                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInState;                                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D (0x20 - 0x3)
// ScriptStruct SMSystem.SMFullSyncTransaction
struct FSMFullSyncTransaction : public FSMTransaction_Base
{
public:
	uint8                                        Pad_3337[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSMFullSyncStateTransaction>   ActiveStates;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bHasStarted : 1;                                   // Mask: 0x1, PropSize: 0x10x18(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFromUserLoad : 1;                                 // Mask: 0x2, PropSize: 0x10x18(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceFullRefresh : 1;                             // Mask: 0x4, PropSize: 0x10x18(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3341[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x190 - 0x138)
// ScriptStruct SMSystem.SMTransition
struct FSMTransition : public FSMNode_Base
{
public:
	int32                                        Priority;                                          // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanEnterTransition : 1;                           // Mask: 0x1, PropSize: 0x10x13C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanEnterTransitionFromEvent : 1;                  // Mask: 0x2, PropSize: 0x10x13C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsEvaluating : 1;                                 // Mask: 0x4, PropSize: 0x10x13C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanEvaluate : 1;                                  // Mask: 0x8, PropSize: 0x10x13C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanEvaluateFromEvent : 1;                         // Mask: 0x10, PropSize: 0x10x13C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRunParallel : 1;                                  // Mask: 0x20, PropSize: 0x10x13C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalIfNextStateActive : 1;                        // Mask: 0x40, PropSize: 0x10x13C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanEvalWithStartState : 1;                        // Mask: 0x80, PropSize: 0x10x13C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysFalse : 1;                                  // Mask: 0x1, PropSize: 0x10x13D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFromAnyState : 1;                                 // Mask: 0x2, PropSize: 0x10x13D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFromLinkState : 1;                                // Mask: 0x4, PropSize: 0x10x13D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BE : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_335E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 FromGuid;                                          // 0x140(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ToGuid;                                            // 0x150(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESMConditionalEvaluationType      ConditionalEvaluationType;                         // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3363[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


