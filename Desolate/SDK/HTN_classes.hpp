#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x118 - 0x110)
// Class HTN.AITask_HTNMoveTo
class UAITask_HTNMoveTo : public UAITask_MoveTo
{
public:
	uint8                                        Pad_A4[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_HTNMoveTo* GetDefaultObj();

};

// 0x88 (0xF8 - 0x70)
// Class HTN.AITask_MakeHTNPlan
class UAITask_MakeHTNPlan : public UAITask
{
public:
	class UHTNComponent*                         OwnerComponent;                                    // 0x70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHTN*                                  TopLevelHTN;                                       // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AB[0x40];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHTNTask*                              CurrentTask;                                       // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AC[0x20];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsWaitingForTaskToProducePlanSteps : 1;           // Mask: 0x1, PropSize: 0x10xF0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_MakeHTNPlan* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class HTN.EnvQueryContext_HTNBlueprintBase
class UEnvQueryContext_HTNBlueprintBase : public UEnvQueryContext
{
public:
	uint8                                        Pad_EA[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TempQuerierActor;                                  // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EB[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryContext_HTNBlueprintBase* GetDefaultObj();

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
	class UWorldStateProxy* GetWorldState();
	struct FVector GetQuerierLocation();
};

// 0x0 (0x28 - 0x28)
// Class HTN.EnvQueryContext_HTNQuerierLocation
class UEnvQueryContext_HTNQuerierLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_HTNQuerierLocation* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class HTN.HTN
class UHTN : public UObject
{
public:
	TArray<class UHTNStandaloneNode*>            StartNodes;                                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHTNDecorator*>                 RootDecorators;                                    // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHTNService*>                   RootServices;                                      // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                       BlackboardAsset;                                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHTN* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HTN.HTNBlueprintLibrary
class UHTNBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHTNBlueprintLibrary* GetDefaultObj();

	bool RunHTN(class AAIController* AIController, class UHTN* HTNAsset);
};

// 0x0 (0x28 - 0x28)
// Class HTN.HTNNodeLibrary
class UHTNNodeLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHTNNodeLibrary* GetDefaultObj();

	void SetWorldStateValueAsVector(class UHTNNode* Node, struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void SetWorldStateValueAsString(class UHTNNode* Node, struct FBlackboardKeySelector& Key, const class FString& Value);
	void SetWorldStateValueAsRotator(class UHTNNode* Node, struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void SetWorldStateValueAsObject(class UHTNNode* Node, struct FBlackboardKeySelector& Key, class UObject* Value);
	void SetWorldStateValueAsName(class UHTNNode* Node, struct FBlackboardKeySelector& Key, class FName Value);
	void SetWorldStateValueAsInt(class UHTNNode* Node, struct FBlackboardKeySelector& Key, int32 Value);
	void SetWorldStateValueAsFloat(class UHTNNode* Node, struct FBlackboardKeySelector& Key, float Value);
	void SetWorldStateValueAsEnum(class UHTNNode* Node, struct FBlackboardKeySelector& Key, uint8 Value);
	void SetWorldStateValueAsClass(class UHTNNode* Node, struct FBlackboardKeySelector& Key, class UClass* Value);
	void SetWorldStateValueAsBool(class UHTNNode* Node, struct FBlackboardKeySelector& Key, bool Value);
	struct FVector GetWorldStateValueAsVector(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	class FString GetWorldStateValueAsString(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	struct FRotator GetWorldStateValueAsRotator(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	class UObject* GetWorldStateValueAsObject(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	class FName GetWorldStateValueAsName(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	int32 GetWorldStateValueAsInt(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	float GetWorldStateValueAsFloat(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	uint8 GetWorldStateValueAsEnum(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	class UClass* GetWorldStateValueAsClass(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	bool GetWorldStateValueAsBool(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	class AActor* GetWorldStateValueAsActor(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
	struct FVector GetSelfLocationFromWorldState(class UHTNNode* Node);
	class UWorldStateProxy* GetOwnersWorldState(class UHTNNode* Node);
	bool GetLocationFromWorldState(class UHTNNode* Node, struct FBlackboardKeySelector& KeySelector, struct FVector* OutLocation, class AActor** OutActor);
	void ForceReplan(class UHTNNode* Node, bool bForceAbortPlan, bool bForceRestartActivePlanning);
	void ClearWorldStateValue(class UHTNNode* Node, struct FBlackboardKeySelector& Key);
};

// 0x148 (0x258 - 0x110)
// Class HTN.HTNComponent
class UHTNComponent : public UBrainComponent
{
public:
	uint8                                        Pad_403[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHTN*                                  CurrentHTNAsset;                                   // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAITask_MakeHTNPlan*                   CurrentPlanningTask;                               // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_405[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHTNNode*>                      InstancedNodes;                                    // 0x170(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                PlanMemory;                                        // 0x180(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWorldStateProxy*                      PlanningWorldStateProxy;                           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWorldStateProxy*                      BlackboardProxy;                                   // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UObject*, float>                  CooldownOwnerToEndTimeMap;                         // 0x1A0(0x50)(Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, class UHTN*>       GameplayTagToDynamicHTNMap;                        // 0x1F0(0x50)(Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_408[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNComponent* GetDefaultObj();

	void StopHTN(bool bDisregardLatentAbort);
	void StartHTN(class UHTN* Asset);
	bool SetDynamicHTN(const struct FGameplayTag& InjectTag, class UHTN* HTN, bool bForceAbortCurrentPlanIfChanged);
	bool NotifyEventBasedDecoratorCondition(class UHTNDecorator* Decorator, bool bRawConditionValue, bool bCanAbortPlanInstantly);
	bool IsWaitingForAbortingTasks();
	bool IsPlanning();
	bool HasActivePlan();
	class UWorldStateProxy* GetWorldStateProxy(bool bForPlanning);
	class UWorldStateProxy* GetPlanningWorldStateProxy();
	class UHTN* GetDynamicHTN(const struct FGameplayTag& InjectTag);
	float GetCooldownEndTime(class UObject* CooldownOwner);
	class UWorldStateProxy* GetBlackboardProxy();
	void ForceReplan(bool bForceAbortPlan, bool bForceRestartActivePlanning, bool bForceDeferToNextFrame);
	void CancelActivePlanning();
	void AddCooldownDuration(class UObject* CooldownOwner, float CooldownDuration, bool bAddToExistingDuration);
};

// 0x38 (0x60 - 0x28)
// Class HTN.HTNNode
class UHTNNode : public UObject
{
public:
	uint8                                        Pad_419[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHTNNode*                              TemplateNode;                                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_41E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UHTN*                                  HTNAsset;                                          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHTNComponent*                         OwnerComponent;                                    // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHTNNode* GetDefaultObj();

	class UHTNComponent* GetOwnerComponent();
	class FString GetNodeName();
};

// 0x8 (0x68 - 0x60)
// Class HTN.HTNDecorator
class UHTNDecorator : public UHTNNode
{
public:
	uint8                                        BitPad_1C : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bInverseCondition : 1;                             // Mask: 0x40, PropSize: 0x10x60(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCheckConditionOnPlanEnter : 1;                    // Mask: 0x80, PropSize: 0x10x60(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCheckConditionOnPlanExit : 1;                     // Mask: 0x1, PropSize: 0x10x61(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCheckConditionOnPlanRecheck : 1;                  // Mask: 0x2, PropSize: 0x10x61(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCheckConditionOnTick : 1;                         // Mask: 0x4, PropSize: 0x10x61(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNDecorator* GetDefaultObj();

	bool IsInversed();
};

// 0x28 (0x90 - 0x68)
// Class HTN.HTNDecorator_BlackboardBase
class UHTNDecorator_BlackboardBase : public UHTNDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x68(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHTNDecorator_BlackboardBase* GetDefaultObj();

};

// 0x30 (0xC0 - 0x90)
// Class HTN.HTNDecorator_Blackboard
class UHTNDecorator_Blackboard : public UHTNDecorator_BlackboardBase
{
public:
	int32                                        IntValue;                                          // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FloatValue;                                        // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                StringValue;                                       // 0x98(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                CachedDescription;                                 // 0xA8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        OperationType;                                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanAbortPlanInstantly : 1;                        // Mask: 0x1, PropSize: 0x10xB9(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43F[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNDecorator_Blackboard* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class HTN.HTNDecorator_BlueprintBase
class UHTNDecorator_BlueprintBase : public UHTNDecorator
{
public:
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4D6[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNDecorator_BlueprintBase* GetDefaultObj();

	void ReceiveTick(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, float DeltaTime);
	void ReceiveOnPlanExit(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn);
	void ReceiveOnPlanEnter(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn);
	int32 ReceiveModifyStepCost(int32 OriginalCost, class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn);
	void ReceiveExecutionFinish(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, enum class EHTNNodeResult NodeResult);
	bool PerformConditionCheck(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, enum class EHTNDecoratorConditionCheckType CheckType);
};

// 0x8 (0x70 - 0x68)
// Class HTN.HTNDecorator_Cooldown
class UHTNDecorator_Cooldown : public UHTNDecorator
{
public:
	float                                        CooldownDuration;                                  // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNDecorator_Cooldown* GetDefaultObj();

};

// 0x58 (0xC0 - 0x68)
// Class HTN.HTNDecorator_DistanceCheck
class UHTNDecorator_DistanceCheck : public UHTNDecorator
{
public:
	struct FBlackboardKeySelector                A;                                                 // 0x68(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                B;                                                 // 0x90(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        MinDistance;                                       // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHTNDecorator_DistanceCheck* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class HTN.HTNDecorator_FocusScope
class UHTNDecorator_FocusScope : public UHTNDecorator
{
public:
	uint8                                        bSetNewFocus : 1;                                  // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_500[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                FocusTarget;                                       // 0x70(0x28)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        FocusPriority;                                     // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_503[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNDecorator_FocusScope* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class HTN.HTNDecorator_ModifyCost
class UHTNDecorator_ModifyCost : public UHTNDecorator
{
public:
	float                                        Scale;                                             // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bias;                                              // 0x6C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHTNDecorator_ModifyCost* GetDefaultObj();

};

// 0x70 (0xD8 - 0x68)
// Class HTN.HTNDecorator_TraceTest
class UHTNDecorator_TraceTest : public UHTNDecorator
{
public:
	struct FBlackboardKeySelector                TraceFrom;                                         // 0x68(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        TraceFromZOffset;                                  // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                TraceTo;                                           // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        TraceToZOffset;                                    // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0xC4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseComplexCollision : 1;                          // Mask: 0x1, PropSize: 0x10xC5(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_20 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EEnvTraceShape                    TraceShape;                                        // 0xC6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceExtentX;                                      // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceExtentY;                                      // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceExtentZ;                                      // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_530[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNDecorator_TraceTest* GetDefaultObj();

};

// 0x38 (0x98 - 0x60)
// Class HTN.HTNStandaloneNode
class UHTNStandaloneNode : public UHTNNode
{
public:
	int32                                        MaxRecursionLimit;                                 // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHTNStandaloneNode*>            NextNodes;                                         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHTNDecorator*>                 Decorators;                                        // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHTNService*>                   Services;                                          // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHTNStandaloneNode* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class HTN.HTNNode_TwoBranches
class UHTNNode_TwoBranches : public UHTNStandaloneNode
{
public:
	int32                                        NumPrimaryNodes;                                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_578[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNNode_TwoBranches* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class HTN.HTNNode_AnyOrder
class UHTNNode_AnyOrder : public UHTNNode_TwoBranches
{
public:

	static class UClass* StaticClass();
	static class UHTNNode_AnyOrder* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class HTN.HTNNode_If
class UHTNNode_If : public UHTNNode_TwoBranches
{
public:
	uint8                                        bCanConditionsInterruptFalseBranch : 1;            // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNNode_If* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class HTN.HTNNode_Parallel
class UHTNNode_Parallel : public UHTNNode_TwoBranches
{
public:
	uint8                                        bWaitForSecondaryBranchToComplete : 1;             // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLoopSecondaryBranchUntilPrimaryBranchCompletes : 1; // Mask: 0x2, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_594[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNNode_Parallel* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class HTN.HTNNode_Scope
class UHTNNode_Scope : public UHTNStandaloneNode
{
public:

	static class UClass* StaticClass();
	static class UHTNNode_Scope* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class HTN.HTNNode_Sequence
class UHTNNode_Sequence : public UHTNNode_TwoBranches
{
public:

	static class UClass* StaticClass();
	static class UHTNNode_Sequence* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class HTN.HTNNode_SubNetwork
class UHTNNode_SubNetwork : public UHTNStandaloneNode
{
public:
	class UHTN*                                  HTN;                                               // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHTNNode_SubNetwork* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class HTN.HTNNode_SubNetworkDynamic
class UHTNNode_SubNetworkDynamic : public UHTNStandaloneNode
{
public:
	class UHTN*                                  DefaultHTN;                                        // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InjectTag;                                         // 0xA0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHTNNode_SubNetworkDynamic* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class HTN.HTNService
class UHTNService : public UHTNNode
{
public:
	float                                        TickInterval;                                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TickIntervalRandomDeviation;                       // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5CB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNService* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class HTN.HTNService_BlueprintBase
class UHTNService_BlueprintBase : public UHTNService
{
public:
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_602[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNService_BlueprintBase* GetDefaultObj();

	void ReceiveTick(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, float DeltaTime);
	void ReceiveExecutionStart(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn);
	void ReceiveExecutionFinish(class AActor* Owner, class AAIController* OwnerAsController, class APawn* ControlledPawn, enum class EHTNNodeResult NodeResult);
};

// 0x38 (0xA8 - 0x70)
// Class HTN.HTNService_ReplanIfLocationChanges
class UHTNService_ReplanIfLocationChanges : public UHTNService
{
public:
	float                                        Tolerance;                                         // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_616[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x78(0x28)(Edit, NativeAccessSpecifierPublic)
	bool                                         bForceAbortPlan;                                   // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRestartActivePlanning;                       // 0xA1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_619[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNService_ReplanIfLocationChanges* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class HTN.HTNTask
class UHTNTask : public UHTNStandaloneNode
{
public:
	uint8                                        bShowTaskNameOnCurrentPlanVisualization : 1;       // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNTask* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class HTN.HTNTask_BlackboardBase
class UHTNTask_BlackboardBase : public UHTNTask
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0xA0(0x28)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHTNTask_BlackboardBase* GetDefaultObj();

};

// 0x58 (0xF8 - 0xA0)
// Class HTN.HTNTask_BlueprintBase
class UHTNTask_BlueprintBase : public UHTNTask
{
public:
	uint8                                        Pad_72C[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAITask_MakeHTNPlan*                   OutPlanningTask;                                   // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntervalCountdown                    TickInterval;                                      // 0xD0(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_739[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNTask_BlueprintBase* GetDefaultObj();

	void SubmitPlanStep(int32 Cost);
	void ReceiveTick(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	bool ReceiveRecheckPlan(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveOnFinished(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn, enum class EHTNNodeResult Result);
	void ReceiveExecute(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDescribePlanStepToVisualLog(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn, class FName VisLogCategoryName);
	void ReceiveCreatePlanSteps(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* Owner, class AAIController* OwnerController, class APawn* ControlledPawn);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};

// 0x50 (0x118 - 0xC8)
// Class HTN.HTNTask_EQSQuery
class UHTNTask_EQSQuery : public UHTNTask_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequestHTN EQSRequest;                                        // 0xC8(0x48)(Edit, NativeAccessSpecifierPrivate)
	int32                                        MaxNumCandidatePlans;                              // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_76E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNTask_EQSQuery* GetDefaultObj();

};

// 0x20 (0xE8 - 0xC8)
// Class HTN.HTNTask_MoveTo
class UHTNTask_MoveTo : public UHTNTask_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0xC8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObservedBlackboardValueTolerance;                  // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bObserveBlackboardValue : 1;                       // Mask: 0x1, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x2, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x4, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTrackMovingGoal : 1;                              // Mask: 0x8, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bProjectGoalLocation : 1;                          // Mask: 0x10, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachTestIncludesAgentRadius : 1;                 // Mask: 0x20, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReachTestIncludesGoalRadius : 1;                  // Mask: 0x40, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4A : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bTestPathDuringPlanning : 1;                       // Mask: 0x1, PropSize: 0x10xDD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePathCostInsteadOfLength : 1;                   // Mask: 0x2, PropSize: 0x10xDD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForcePlanTimeStringPulling : 1;                   // Mask: 0x4, PropSize: 0x10xDD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4B : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7F7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CostPerUnitPathLength;                             // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNTask_MoveTo* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class HTN.HTNTask_Success
class UHTNTask_Success : public UHTNTask
{
public:
	int32                                        Cost;                                              // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_814[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHTNTask_Success* GetDefaultObj();

};

// 0x8 (0xA8 - 0xA0)
// Class HTN.HTNTask_Wait
class UHTNTask_Wait : public UHTNTask
{
public:
	float                                        WaitTime;                                          // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomDeviation;                                   // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHTNTask_Wait* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class HTN.WorldStateProxy
class UWorldStateProxy : public UObject
{
public:
	class UBrainComponent*                       Owner;                                             // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B7C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsEditable;                                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B7F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWorldStateProxy* GetDefaultObj();

	void SetValueAsVector(class FName& KeyName, const struct FVector& Value);
	void SetValueAsString(class FName& KeyName, const class FString& Value);
	void SetValueAsRotator(class FName& KeyName, const struct FRotator& Value);
	void SetValueAsObject(class FName& KeyName, class UObject* Value);
	void SetValueAsName(class FName& KeyName, class FName Value);
	void SetValueAsInt(class FName& KeyName, int32 Value);
	void SetValueAsFloat(class FName& KeyName, float Value);
	void SetValueAsEnum(class FName& KeyName, uint8 Value);
	void SetValueAsClass(class FName& KeyName, class UClass* Value);
	void SetValueAsBool(class FName& KeyName, bool Value);
	bool IsVectorValueSet(class FName& KeyName);
	struct FVector GetValueAsVector(class FName& KeyName);
	class FString GetValueAsString(class FName& KeyName);
	struct FRotator GetValueAsRotator(class FName& KeyName);
	class UObject* GetValueAsObject(class FName& KeyName);
	class FName GetValueAsName(class FName& KeyName);
	int32 GetValueAsInt(class FName& KeyName);
	float GetValueAsFloat(class FName& KeyName);
	uint8 GetValueAsEnum(class FName& KeyName);
	class UClass* GetValueAsClass(class FName& KeyName);
	bool GetValueAsBool(class FName& KeyName);
	class AActor* GetValueAsActor(class FName& KeyName);
	struct FVector GetSelfLocation();
	bool GetRotationFromEntry(class FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(class FName& KeyName, struct FVector* ResultLocation);
	bool GetLocation(struct FBlackboardKeySelector& KeySelector, struct FVector* OutLocation, class AActor** OutActor);
	void ClearValue(class FName& KeyName);
};

}


