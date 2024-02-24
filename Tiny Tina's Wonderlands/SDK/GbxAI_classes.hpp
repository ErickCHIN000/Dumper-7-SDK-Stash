#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xF8 - 0x28)
// Class GbxAI.AIActionBase
class UAIActionBase : public UObject
{
public:
	uint8                                        Pad_161[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnInitializeInstanceEventBP;                       // 0x30(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_162[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCleanupInstanceEventBP;                          // 0x58(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_165[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStartedEventBP;                                  // 0x80(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_166[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStoppedEventBP;                                  // 0xA8(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_167[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIActionExecutionSettings            ExecutionSettings;                                 // 0xD0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_168[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        BaseVersion;                                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_169[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       Version;                                           // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAIActionCreationMethod           CreationMethod;                                    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIActionBase* GetDefaultObj();

	void StopBP(class UAIActionBase* Action, struct FAIActionBlueprintContext& Context, bool bSucceeded);
	class UObject* CreateSubobjectNoName(class UClass* Class);
};

// 0x50 (0x148 - 0xF8)
// Class GbxAI.AIAction
class UAIAction : public UAIActionBase
{
public:
	class UBlackboardData*                       Blackboard;                                        // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitForAllAspects;                                // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAIAspect*>                     Aspects;                                           // 0x108(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UAIAspect*>                     BuiltInAspects;                                    // 0x118(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIsChildAction;                                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAIAction*>                     SubActions;                                        // 0x130(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_178[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        ActionVersion;                                     // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_179[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction* GetDefaultObj();

	class UAIAction* CreateSubAction(class UClass* ActionClass, class FName Name);
};

// 0x18 (0x160 - 0x148)
// Class GbxAI.AIAction_Composite
class UAIAction_Composite : public UAIAction
{
public:
	TArray<class UAIAction_CompositeChild*>      Children;                                          // 0x148(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        CompositeVersion;                                  // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_Composite* GetDefaultObj();

	class UAIAction_CompositeChild* CreateChild(class FName ChildName);
};

// 0x0 (0x160 - 0x160)
// Class GbxAI.AIAction_Selector
class UAIAction_Selector : public UAIAction_Composite
{
public:

	static class UClass* StaticClass();
	static class UAIAction_Selector* GetDefaultObj();

};

// 0x88 (0x1E8 - 0x160)
// Class GbxAI.AIAction_Sequence
class UAIAction_Sequence : public UAIAction_Selector
{
public:
	enum class EAIActionSequenceCanStartCheck    CanStartChecks;                                    // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             CanBeInterrupted;                                  // 0x168(0x80)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Sequence* GetDefaultObj();

};

// 0xDB8 (0xFA0 - 0x1E8)
// Class GbxAI.AIAction_GoToPoint
class UAIAction_GoToPoint : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_Location            LocationSettings;                                  // 0x1E8(0x1E0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             GoalKey;                                           // 0x3C8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x3D8(0x140)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseNavSettings;                                   // 0x518(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAITicketDataAsset*                    MoveTicket;                                        // 0x520(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             MoveTicketHoldDuration;                            // 0x528(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             MoveFailTimeLimit;                                 // 0x5A8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseMoveFailTimeLimit;                             // 0x628(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             QueryKey;                                          // 0x630(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_EnvQuery            QuerySettings;                                     // 0x640(0x3A0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseQuery;                                         // 0x9E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinOffsetInFrontOfTarget;                          // 0x9E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOffsetInFrontOfTarget;                          // 0x9E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetAngle;                                       // 0x9EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOffsetInFrontOfTarget;                         // 0x9F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CirclingDistance;                                  // 0x9F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECircleDirection                  Direction;                                         // 0x9F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateAroundTarget;                               // 0x9F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             CustomRotationTarget;                              // 0xA00(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseCustomRotationTarget;                          // 0xA10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_Rotation            RotationSettings;                                  // 0xA18(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseRotation;                                      // 0xF68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestDirectPath;                                   // 0xF69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugTestDirectPath;                              // 0xF6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnArrivedEventBP;                                  // 0xF70(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        GoToPointVersion;                                  // 0xF98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_GoToPoint* GetDefaultObj();

};

// 0x798 (0x1738 - 0xFA0)
// Class GbxAI.AIAction_ActionAtPoint
class UAIAction_ActionAtPoint : public UAIAction_GoToPoint
{
public:
	struct FAIAspectSettings_GbxAction           ActionSettings;                                    // 0xFA0(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bCheckLocationDuringAction;                        // 0x11D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRotationDuringAction;                          // 0x11D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRotationTargetDuringAction;                    // 0x11DA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_Rotation            ActionRotationSettings;                            // 0x11E0(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseActionRotation;                                // 0x1730(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ActionAtPointVersion;                              // 0x1731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CA[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_ActionAtPoint* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class GbxAI.BTTask_AIAction
class UBTTask_AIAction : public UBTTaskNode
{
public:
	class UBTDecorator_AIAction*                 ActionDecorator;                                   // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBTTask_AIAction* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_ActionAtPoint
class UBTTask_AIAction_ActionAtPoint : public UBTTask_AIAction
{
public:
	class UAIAction_ActionAtPoint*               Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_ActionAtPoint* GetDefaultObj();

};

// 0x10 (0x170 - 0x160)
// Class GbxAI.AIAction_Priority
class UAIAction_Priority : public UAIAction_Selector
{
public:
	float                                        TryInterruptPeriod;                                // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TryInterruptInsignificantPeriod;                   // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterruptWhileInsignificant;                      // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_Priority* GetDefaultObj();

};

// 0x0 (0x170 - 0x170)
// Class GbxAI.AIAction_AITree
class UAIAction_AITree : public UAIAction_Priority
{
public:

	static class UClass* StaticClass();
	static class UAIAction_AITree* GetDefaultObj();

};

// 0x18 (0xFB8 - 0xFA0)
// Class GbxAI.AIAction_Charge
class UAIAction_Charge : public UAIAction_GoToPoint
{
public:
	struct FAIAspectSettings_Charge              ChargeSettings;                                    // 0xFA0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Charge* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_Charge
class UBTTask_AIAction_Charge : public UBTTask_AIAction
{
public:
	class UAIAction_Charge*                      Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_Charge* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class GbxAI.AIAction_CompositeChild
class UAIAction_CompositeChild : public UAIAction
{
public:
	class UAIAction*                             Action;                                            // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCauseParentToStop;                             // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_CompositeChild* GetDefaultObj();

	class UAIAction* CreateAction(class UClass* ActionClass);
};

// 0x0 (0x148 - 0x148)
// Class GbxAI.AIAction_Decorator
class UAIAction_Decorator : public UAIAction
{
public:

	static class UClass* StaticClass();
	static class UAIAction_Decorator* GetDefaultObj();

};

// 0x158 (0x2C8 - 0x170)
// Class GbxAI.AIAction_MoveNode
class UAIAction_MoveNode : public UAIAction_Priority
{
public:
	struct FGbxBlackboardKeySelector             NodeKey;                                           // 0x170(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x180(0x140)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        MoveNodeVersion;                                   // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_207[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_MoveNode* GetDefaultObj();

};

// 0x0 (0x2C8 - 0x2C8)
// Class GbxAI.AIAction_Dropship
class UAIAction_Dropship : public UAIAction_MoveNode
{
public:

	static class UClass* StaticClass();
	static class UAIAction_Dropship* GetDefaultObj();

};

// 0x1E8 (0x358 - 0x170)
// Class GbxAI.AIAction_Follow
class UAIAction_Follow : public UAIAction_Priority
{
public:
	struct FAIAspectSettings_Follow              Settings;                                          // 0x170(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x1A8(0x140)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_FindClosestPlayer   FindClosestPlayerSettings;                         // 0x2E8(0x20)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bFindClosestPlayer;                                // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_215[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             TeleportTarget;                                    // 0x310(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x320(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x330(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             BodyDirection;                                     // 0x340(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        FollowVersion;                                     // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_Follow* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_GoToPoint
class UBTTask_AIAction_GoToPoint : public UBTTask_AIAction
{
public:
	class UAIAction_GoToPoint*                   Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_GoToPoint* GetDefaultObj();

};

// 0x388 (0x570 - 0x1E8)
// Class GbxAI.AIAction_Land
class UAIAction_Land : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_FlyToNavMesh        FlyToNavMeshSettings;                              // 0x1E8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_GbxAction           AnimSettings;                                      // 0x1F8(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x430(0x140)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Land* GetDefaultObj();

};

// 0x1F8 (0x368 - 0x170)
// Class GbxAI.AIAction_LeadRoute
class UAIAction_LeadRoute : public UAIAction_Priority
{
public:
	struct FAIAspectSettings_LeadRoute           LeadSettings;                                      // 0x170(0x50)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x1C0(0x140)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_FindClosestPlayer   FindClosestPlayerSettings;                         // 0x300(0x20)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x320(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x330(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             TeleportTarget;                                    // 0x340(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             UnusedKey;                                         // 0x350(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        LeadRouteVersion;                                  // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_240[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_LeadRoute* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_LeadRoute
class UBTTask_AIAction_LeadRoute : public UBTTask_AIAction
{
public:
	class UAIAction_LeadRoute*                   Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_LeadRoute* GetDefaultObj();

};

// 0x58 (0xFF8 - 0xFA0)
// Class GbxAI.AIAction_Leap
class UAIAction_Leap : public UAIAction_GoToPoint
{
public:
	struct FAIAspectSettings_Leap                LeapSettings;                                      // 0xFA0(0x58)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Leap* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_Leap
class UBTTask_AIAction_Leap : public UBTTask_AIAction
{
public:
	class UAIAction_Leap*                        Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_Leap* GetDefaultObj();

};

// 0x400 (0x548 - 0x148)
// Class GbxAI.AIAction_LeapDirect
class UAIAction_LeapDirect : public UAIAction
{
public:
	struct FAIAspectSettings_Leap                LeapSettings;                                      // 0x148(0x58)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_EnvQuery            QuerySettings;                                     // 0x1A0(0x3A0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseQuery;                                         // 0x540(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_LeapDirect* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_LeapDirect
class UBTTask_AIAction_LeapDirect : public UBTTask_AIAction
{
public:
	class UAIAction_LeapDirect*                  Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_LeapDirect* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class GbxAI.AIAction_LookAroundRandomly
class UAIAction_LookAroundRandomly : public UAIAction
{
public:
	struct FLookAroundRandomlySettings           Settings;                                          // 0x148(0xC)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27D[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_LookAroundRandomly* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_MoveNode
class UBTTask_AIAction_MoveNode : public UBTTask_AIAction
{
public:
	class UAIAction_MoveNode*                    Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_MoveNode* GetDefaultObj();

};

// 0x190 (0x2D8 - 0x148)
// Class GbxAI.AIAction_MoveSpline
class UAIAction_MoveSpline : public UAIAction
{
public:
	struct FAIAspectSettings_MoveSpline          MoveSplineSettings;                                // 0x148(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x198(0x140)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_MoveSpline* GetDefaultObj();

	bool SetupMoveSpline(class AActor* TargetActor, class UObject* TargetSpline, float Offset, bool bIsReverse);
	bool ChangeSplineOffset(class AActor* TargetActor, float Offset);
};

// 0x478 (0x660 - 0x1E8)
// Class GbxAI.AIAction_OnAggro
class UAIAction_OnAggro : public UAIAction_Sequence
{
public:
	bool                                         bRotateBeforeAction;                               // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRotateDuringAction;                               // 0x1E9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_GbxAction           ActionWhenFirstNoticer;                            // 0x1F0(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIAspectSettings_GbxAction           ActionWhenSecondNoticer;                           // 0x428(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAIAction_OnAggro* GetDefaultObj();

};

// 0x8B0 (0x9F8 - 0x148)
// Class GbxAI.AIAction_Orbit
class UAIAction_Orbit : public UAIAction
{
public:
	struct FAIAspectSettings_Orbit               OrbitSettings;                                     // 0x148(0x220)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x368(0x140)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Rotation            RotationSettings;                                  // 0x4A8(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Orbit* GetDefaultObj();

};

// 0x8 (0x168 - 0x160)
// Class GbxAI.AIAction_Parallel
class UAIAction_Parallel : public UAIAction_Composite
{
public:
	bool                                         bWaitForAllChildren;                               // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_Parallel* GetDefaultObj();

};

// 0x8 (0x160 - 0x158)
// Class GbxAI.AIAction_ParallelChild
class UAIAction_ParallelChild : public UAIAction_CompositeChild
{
public:
	bool                                         bCanPreventActionFromStarting;                     // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCauseActionToSucceed;                          // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCauseActionToFail;                             // 0x15A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustFinish;                                       // 0x15B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_304[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_ParallelChild* GetDefaultObj();

};

// 0x20 (0x208 - 0x1E8)
// Class GbxAI.AIAction_Plan
class UAIAction_Plan : public UAIAction_Sequence
{
public:
	struct FAIActionSettings_Plan                Settings;                                          // 0x1E8(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Plan* GetDefaultObj();

};

// 0x238 (0x380 - 0x148)
// Class GbxAI.AIAction_PlayGbxAction
class UAIAction_PlayGbxAction : public UAIAction
{
public:
	struct FAIAspectSettings_GbxAction           ActionSettings;                                    // 0x148(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_PlayGbxAction* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_PlayGbxAction
class UBTTask_AIAction_PlayGbxAction : public UBTTask_AIAction
{
public:
	class UAIAction_PlayGbxAction*               Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_PlayGbxAction* GetDefaultObj();

};

// 0x8 (0x168 - 0x160)
// Class GbxAI.AIAction_Random
class UAIAction_Random : public UAIAction_Selector
{
public:
	bool                                         bUseCumulativeInverseWeight;                       // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_324[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ResetRunCountTime;                                 // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Random* GetDefaultObj();

};

// 0x10 (0x168 - 0x158)
// Class GbxAI.AIAction_RandomChild
class UAIAction_RandomChild : public UAIAction_CompositeChild
{
public:
	float                                        Weight;                                            // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRunCount;                                       // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxRunCount;                                   // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_RandomChild* GetDefaultObj();

};

// 0x1E0 (0x3C8 - 0x1E8)
// Class GbxAI.AIAction_Route
class UAIAction_Route : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_Route               RouteSettings;                                     // 0x1E8(0x28)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x210(0x140)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             SmartAction;                                       // 0x350(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x360(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x370(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             BodyEnable;                                        // 0x380(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             BodyTarget;                                        // 0x390(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             LookEnable;                                        // 0x3A0(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             LookTarget;                                        // 0x3B0(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        RouteVersion;                                      // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_339[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_Route* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_Route
class UBTTask_AIAction_Route : public UBTTask_AIAction
{
public:
	class UAIAction_Route*                       Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_Route* GetDefaultObj();

};

// 0xE98 (0x1008 - 0x170)
// Class GbxAI.AIAction_UseCover
class UAIAction_UseCover : public UAIAction_Priority
{
public:
	bool                                         bCanShootWhileMoving;                              // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        UseCoverVersion;                                   // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_34E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_UseCover            CoverSettings;                                     // 0x178(0x138)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FEnvQueryParams                       CoverQuery;                                        // 0x2B0(0xB8)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGbxQueryOptions                      CoverQueryOptions;                                 // 0x368(0x238)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Weapon              WeaponSettings;                                    // 0x5A0(0x3D0)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x970(0x140)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Rotation            MovingRotationSettings;                            // 0xAB0(0x550)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bRotateDuringMovement;                             // 0x1000(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_358[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_UseCover* GetDefaultObj();

};

// 0x1B8 (0x11C0 - 0x1008)
// Class GbxAI.AIAction_SimpleCover
class UAIAction_SimpleCover : public UAIAction_UseCover
{
public:
	bool                                         bTakeRangesFromWeapon;                             // 0x1008(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_362[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             MinRange;                                          // 0x1010(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             IdealRange;                                        // 0x1090(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             MaxRange;                                          // 0x1110(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UEnvQueryTestAsset*>            AdditionalTests;                                   // 0x1190(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       DefaultEnvQuery;                                   // 0x11A0(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        SimpleCoverVersion;                                // 0x11B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_SimpleCover* GetDefaultObj();

};

// 0x460 (0x1400 - 0xFA0)
// Class GbxAI.AIAction_WeaponAtPoint
class UAIAction_WeaponAtPoint : public UAIAction_GoToPoint
{
public:
	bool                                         bCanShootWhileMoving;                              // 0xFA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_374[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_Weapon              WeaponSettings;                                    // 0xFA8(0x3D0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             HoldDuration;                                      // 0x1378(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseHoldDuration;                                  // 0x13F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeaponAtPointVersion;                              // 0x13F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_WeaponAtPoint* GetDefaultObj();

};

// 0x5F8 (0x19F8 - 0x1400)
// Class GbxAI.AIAction_SimpleHide
class UAIAction_SimpleHide : public UAIAction_WeaponAtPoint
{
public:
	struct FGbxParam                             MinRange;                                          // 0x1400(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             IdealRange;                                        // 0x1480(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             MaxRange;                                          // 0x1500(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             FaceTarget;                                        // 0x1580(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             CanUseWeaponWhileMoving;                           // 0x1600(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UGbxWeaponSlotData*>            WeaponSlots;                                       // 0x1680(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGbxParam                             WeaponUseModeIndex;                                // 0x1690(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             HideDuration;                                      // 0x1710(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIAspectSettings_GbxAction           HideActionSettings;                                // 0x1790(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUseHideAction;                                    // 0x19C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3C5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       DefaultEnvQuery;                                   // 0x19D0(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             DefaultEnvQueryAsset;                              // 0x19E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        SimpleHideVersion;                                 // 0x19F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3CA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_SimpleHide* GetDefaultObj();

};

// 0x4E0 (0x1C18 - 0x1738)
// Class GbxAI.AIAction_SimpleMelee
class UAIAction_SimpleMelee : public UAIAction_ActionAtPoint
{
public:
	TSubclassOf<class UGbxAction>                MeleeAction;                                       // 0x1738(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIAspectSettings_GbxAction           MeleeActionSettings;                               // 0x1740(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bCanMove;                                          // 0x1978(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             ReachedHeight;                                     // 0x1980(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             ReachedDistance;                                   // 0x1A00(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	enum class EMeleeRotationOption              FacingPolicyDuringAction;                          // 0x1A80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             OverrideAngle;                                     // 0x1A88(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUseOverrideAngle;                                 // 0x1B08(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAlignBodyWithTarget;                              // 0x1B09(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bKeepFacingTargetOnStop;                           // 0x1B0A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopWhenReached;                                  // 0x1B0B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanStartWhenGoalIsUncertain;                      // 0x1B0C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             Count;                                             // 0x1B10(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             PlayRate;                                          // 0x1B90(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bCanBeInterrupted;                                 // 0x1C10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        MeleeActionVersion;                                // 0x1C11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F8[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_SimpleMelee* GetDefaultObj();

};

// 0x3F0 (0x1B28 - 0x1738)
// Class GbxAI.AIAction_SimpleRangedAttack
class UAIAction_SimpleRangedAttack : public UAIAction_ActionAtPoint
{
public:
	struct FGbxParam                             MinRange;                                          // 0x1738(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             IdealRange;                                        // 0x17B8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             MaxRange;                                          // 0x1838(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             MinRepositionDistance;                             // 0x18B8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UEnvQueryTestAsset*>            AdditionalTests;                                   // 0x1938(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        SphereTraceExtent;                                 // 0x1948(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDoArcTrace;                                       // 0x194C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_405[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             ArcSpeed;                                          // 0x1950(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             ArcAnglePercent;                                   // 0x19D0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             OverrideAngle;                                     // 0x1A50(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUseOverrideAngle;                                 // 0x1AD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMeleeRotationOption              FacingPolicyDuringAction;                          // 0x1AD1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAlignBodyWithTarget;                              // 0x1AD2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bKeepFacingTargetOnStop;                           // 0x1AD3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDistanceToTargetTestShouldFilterOnly;             // 0x1AD4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_40D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       DefaultEnvQuery;                                   // 0x1AD8(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       DefaultTraceTests;                                 // 0x1AF0(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             DefaultEnvQueryAsset;                              // 0x1B08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             DefaultTraceTestsAsset;                            // 0x1B10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQueryTest_Trace*                   TraceTestInstance;                                 // 0x1B18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        SimpleRangedAttackVersion;                         // 0x1B20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_419[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_SimpleRangedAttack* GetDefaultObj();

};

// 0x620 (0x1A20 - 0x1400)
// Class GbxAI.AIAction_SimpleWeapon
class UAIAction_SimpleWeapon : public UAIAction_WeaponAtPoint
{
public:
	struct FGbxParam                             CanUseWeaponWhileMoving;                           // 0x1400(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bTakeRangesFromWeapon;                             // 0x1480(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             MinRange;                                          // 0x1488(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             IdealRange;                                        // 0x1508(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             MaxRange;                                          // 0x1588(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UEnvQueryTestAsset*>            AdditionalTests;                                   // 0x1608(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UGbxWeaponSlotData*>            WeaponSlots;                                       // 0x1618(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGbxParam                             WeaponUseModeIndex;                                // 0x1628(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             BurstCountOverride;                                // 0x16A8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bOverrideBurstCount;                               // 0x1728(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_438[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             BurstDelayOverride;                                // 0x1730(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bOverrideBurstDelay;                               // 0x17B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             AccuracyOverride;                                  // 0x17B8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAccuracy;                                 // 0x1838(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_441[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             SuppressingFireTime;                               // 0x1840(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUseSuppressingFireTime;                           // 0x18C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseRepositionTicket;                              // 0x18C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_447[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             MinRepositionDistance;                             // 0x18C8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UAITicketDataAsset*                    RepositionTicket;                                  // 0x1948(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxParam                             TimeToStayAtSpotWhileShooting;                     // 0x1950(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bDistanceToTargetTestShouldFilterOnly;             // 0x19D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_44E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       DefaultEnvQuery;                                   // 0x19D8(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       DefaultRepositionTicket;                           // 0x19F0(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQuery*                             DefaultEnvQueryAsset;                              // 0x1A08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAITicketDataAsset*                    DefaultRepositionTicketAsset;                      // 0x1A10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        SimpleWeaponVersion;                               // 0x1A18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_452[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_SimpleWeapon* GetDefaultObj();

};

// 0x0 (0x160 - 0x160)
// Class GbxAI.AIAction_StateMachine
class UAIAction_StateMachine : public UAIAction_Selector
{
public:

	static class UClass* StaticClass();
	static class UAIAction_StateMachine* GetDefaultObj();

};

// 0x10 (0x168 - 0x158)
// Class GbxAI.AIAction_StateMachineChild
class UAIAction_StateMachineChild : public UAIAction_CompositeChild
{
public:
	class UAIAction_StateMachineChild*           OnSuccess;                                         // 0x158(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIAction_StateMachineChild*           OnFailure;                                         // 0x160(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_StateMachineChild* GetDefaultObj();

	void GetAvailableStates(TArray<class UAIAction_StateMachineChild*>* Array);
};

// 0xA8 (0xAA0 - 0x9F8)
// Class GbxAI.AIAction_Sweep
class UAIAction_Sweep : public UAIAction_Orbit
{
public:
	struct FAIAspectSettings_Sweep               SweepSettings;                                     // 0x9F8(0xA8)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_Sweep* GetDefaultObj();

};

// 0x1468 (0x1650 - 0x1E8)
// Class GbxAI.AIAction_Swoop
class UAIAction_Swoop : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_Swoop               SwoopSettings;                                     // 0x1E8(0x320)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x508(0x140)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Rotation            MoveFarRotationSettings;                           // 0x648(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseFarRotation;                                   // 0xB98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_Rotation            MoveNearRotationSettings;                          // 0xBA0(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseNearRotation;                                  // 0x10F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIAspectSettings_Rotation            MovePassRotationSettings;                          // 0x10F8(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUsePassRotation;                                  // 0x1648(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_490[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_Swoop* GetDefaultObj();

};

// 0x198 (0x380 - 0x1E8)
// Class GbxAI.AIAction_TargetSequence
class UAIAction_TargetSequence : public UAIAction_Sequence
{
public:
	struct FGbxParam                             TargetCountMin;                                    // 0x1E8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseTargetCountMin;                                // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             TargetCountMax;                                    // 0x270(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseTargetCountMax;                                // 0x2F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             TargetDistance;                                    // 0x2F8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseTargetDistance;                                // 0x378(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayersOnly;                                      // 0x379(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A6[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_TargetSequence* GetDefaultObj();

};

// 0x4F0 (0x638 - 0x148)
// Class GbxAI.AIAction_Teleport
class UAIAction_Teleport : public UAIAction
{
public:
	struct FGbxBlackboardKeySelector             GoalKey;                                           // 0x148(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Teleport            TeleportSettings;                                  // 0x158(0x138)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_EnvQuery            QuerySettings;                                     // 0x290(0x3A0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseQuery;                                         // 0x630(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_Teleport* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_Teleport
class UBTTask_AIAction_Teleport : public UBTTask_AIAction
{
public:
	class UAIAction_Teleport*                    Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_Teleport* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_UseCover
class UBTTask_AIAction_UseCover : public UBTTask_AIAction
{
public:
	class UAIAction_UseCover*                    Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_UseCover* GetDefaultObj();

};

// 0xFD8 (0x11C0 - 0x1E8)
// Class GbxAI.AIAction_UseSmartObject
class UAIAction_UseSmartObject : public UAIAction_Sequence
{
public:
	struct FAIAspectSettings_UseSmartObject      SmartObjectSettings;                               // 0x1E8(0x478)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x660(0x140)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Rotation            MoveToRotationSettings;                            // 0x7A0(0x550)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_EnvQuery            QuerySettings;                                     // 0xCF0(0x3A0)(Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseQuery;                                         // 0x1090(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4CC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             SmartAction;                                       // 0x1098(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x10A8(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x10B8(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             BodyTarget;                                        // 0x10C8(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             LookTarget;                                        // 0x10D8(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxBlackboardKeySelector             LookEnabled;                                       // 0x10E8(0x10)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAIAspectSettings_Move                MoveSettings;                                      // 0x10F8(0x8)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FEnvQueryParams                       SmartObjectQuery;                                  // 0x1100(0xB8)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        UseSmartObjectVersion;                             // 0x11B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4D6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAction_UseSmartObject* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_UseSmartObject
class UBTTask_AIAction_UseSmartObject : public UBTTask_AIAction
{
public:
	class UAIAction_UseSmartObject*              Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_UseSmartObject* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_WeaponAtPoint
class UBTTask_AIAction_WeaponAtPoint : public UBTTask_AIAction
{
public:
	class UAIAction_WeaponAtPoint*               Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_WeaponAtPoint* GetDefaultObj();

};

// 0x920 (0xA68 - 0x148)
// Class GbxAI.AIAction_WeaponIdle
class UAIAction_WeaponIdle : public UAIAction
{
public:
	struct FAIAspectSettings_Weapon              WeaponSettings;                                    // 0x148(0x3D0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Rotation            RotationSettings;                                  // 0x518(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAction_WeaponIdle* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_WeaponIdle
class UBTTask_AIAction_WeaponIdle : public UBTTask_AIAction
{
public:
	class UAIAction_WeaponIdle*                  Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_WeaponIdle* GetDefaultObj();

};

// 0x18 (0x100 - 0xE8)
// Class GbxAI.AIActionBlueprint
class UAIActionBlueprint : public Ublueprint
{
public:
	class UAIActionBlueprint*                    ParentBlueprint;                                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                       Blackboard;                                        // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIActionBlueprint* GetDefaultObj();

	bool ShouldSkipBlackboardProperty(class UProperty* Property);
};

// 0x0 (0x2E0 - 0x2E0)
// Class GbxAI.AIActionBlueprintGeneratedClass
class UAIActionBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UAIActionBlueprintGeneratedClass* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class GbxAI.GameplayTask_RunScriptedAIAction
class UGameplayTask_RunScriptedAIAction : public UGameplayTask
{
public:
	class UAIActionComponent*                    ActionComponent;                                   // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAIAction>                 ActionToRun;                                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  Succeeded;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  Failed;                                            // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  Aborted;                                           // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTask_RunScriptedAIAction* GetDefaultObj();

	class UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_Object(class UObject* Object, TSubclassOf<class UAIAction> Action);
	class UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_Controller(class AGbxAIController* Controller, TSubclassOf<class UAIAction> Action);
	class UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_AIActionComponent(class UAIActionComponent* AIActionComponent, TSubclassOf<class UAIAction> Action);
	class UGameplayTask_RunScriptedAIAction* RunScriptedAIAction_Actor(class AActor* Actor, TSubclassOf<class UAIAction> Action);
};

// 0x338 (0x510 - 0x1D8)
// Class GbxAI.AIActionComponent
class UAIActionComponent : public UBrainComponent
{
public:
	uint8                                        Pad_56C[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAIAction>                 MainAction;                                        // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedMoveAction;                                // 0x228(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedMoveSplineAction;                          // 0x230(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedMoveToLevelSequenceAction;                 // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedLookAction;                                // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedWaitAction;                                // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedUseAction;                                 // 0x250(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedCoverAction;                               // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedFollowAction;                              // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedRouteAction;                               // 0x268(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedLeadAction;                                // 0x270(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAIAction>                 ScriptedLandAction;                                // 0x278(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, TSubclassOf<class UAIAction>> TaggedActionTable;                                 // 0x280(0x50)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FAIActionInstance                     ActionStack[0x2];                                  // 0x2D0(0x60)(Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_57C[0x1E0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIActionComponent* GetDefaultObj();

	void ReplaceMainAIAction(TSubclassOf<class UAIAction> Action);
	class UBlackboardData* GetBlackboardData();
	void AbortScriptedAIAction(bool bStopImmediately);
};

// 0x30 (0x58 - 0x28)
// Class GbxAI.AIActionManager
class UAIActionManager : public UObject
{
public:
	uint8                                        Pad_586[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTickTimeMs;                                     // 0x30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_588[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIActionManager* GetDefaultObj();

};

// 0x8 (0x100 - 0xF8)
// Class GbxAI.AIAspect
class UAIAspect : public UAIActionBase
{
public:
	struct FAIAspectExecutionSettings            AspectExecutionSettings;                           // 0xF8(0x5)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_58C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class GbxAI.AIAspect_ActorCollision
class UAIAspect_ActorCollision : public UAIAspect
{
public:
	struct FAIAspectSettings_ActorCollision      Settings;                                          // 0x100(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_ActorCollision* GetDefaultObj();

	void OnPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void GetOnCollisionOptions(TArray<class FName>* Options);
};

// 0x248 (0x348 - 0x100)
// Class GbxAI.AIAspect_Condition
class UAIAspect_Condition : public UAIAspect
{
public:
	struct FAIAspectSettings_Condition           Settings;                                          // 0x100(0x248)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Condition* GetDefaultObj();

	class FString GetConditionDataDescription(struct FAIAspectSettings_ConditionData& ConditionData);
};

// 0x8 (0x350 - 0x348)
// Class GbxAI.AIAspect_AIGroupCondition
class UAIAspect_AIGroupCondition : public UAIAspect_Condition
{
public:
	struct FAIAspectSettings_AIGroupCondition    GroupSettings;                                     // 0x348(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_AIGroupCondition* GetDefaultObj();

};

// 0x8 (0x108 - 0x100)
// Class GbxAI.AIAspect_AvoidWhileIdle
class UAIAspect_AvoidWhileIdle : public UAIAspect
{
public:
	bool                                         bAvoidWhileIdle;                                   // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_AvoidWhileIdle* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class GbxAI.AIAspect_BlackboardKey
class UAIAspect_BlackboardKey : public UAIAspect
{
public:
	struct FAIAspectSettings_BlackboardKey       Settings;                                          // 0x100(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_BlackboardKey* GetDefaultObj();

	class FString GetSettingsDescription(struct FAIAspectSettings_BlackboardKey& BBKeySettings);
};

// 0x18 (0x118 - 0x100)
// Class GbxAI.AIAspect_Charge
class UAIAspect_Charge : public UAIAspect
{
public:
	struct FAIAspectSettings_Charge              Settings;                                          // 0x100(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Charge* GetDefaultObj();

};

// 0x140 (0x240 - 0x100)
// Class GbxAI.AIAspect_Navigation
class UAIAspect_Navigation : public UAIAspect
{
public:
	struct FAIAspectSettings_Navigation          Settings;                                          // 0x100(0x140)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Navigation* GetDefaultObj();

	class FString GetNavSettingsDescription(struct FAIAspectSettings_Navigation& NavSettings, class UProperty* Property);
};

// 0x30 (0x270 - 0x240)
// Class GbxAI.AIAspect_Circle
class UAIAspect_Circle : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector             GoalKey;                                           // 0x240(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECircleDirection                  Direction;                                         // 0x254(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinOffsetInFrontOfTarget;                          // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOffsetInFrontOfTarget;                          // 0x25C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetAngle;                                       // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GoalUpdateDistance;                                // 0x264(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestDirectPath;                                   // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugTestDirectPath;                              // 0x269(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxNavGoalReach                  Reach;                                             // 0x26A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60E[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_Circle* GetDefaultObj();

};

// 0x4D8 (0x5D8 - 0x100)
// Class GbxAI.AIAspect_ClaimSmartObject
class UAIAspect_ClaimSmartObject : public UAIAspect
{
public:
	struct FAIAspectSettings_UseSmartObject      SmartObjectSettings;                               // 0x100(0x478)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             SmartAction;                                       // 0x578(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x588(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x598(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             BodyTarget;                                        // 0x5A8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             LookTarget;                                        // 0x5B8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             LookEnabled;                                       // 0x5C8(0x10)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_ClaimSmartObject* GetDefaultObj();

};

// 0x220 (0x320 - 0x100)
// Class GbxAI.AIAspect_Cooldown
class UAIAspect_Cooldown : public UAIAspect
{
public:
	struct FAIAspectSettings_Cooldown            Settings;                                          // 0x100(0x220)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Cooldown* GetDefaultObj();

};

// 0x108 (0x208 - 0x100)
// Class GbxAI.AIAspect_Crouch
class UAIAspect_Crouch : public UAIAspect
{
public:
	struct FAIAspectSettings_Crouch              Settings;                                          // 0x100(0x108)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Crouch* GetDefaultObj();

};

// 0x0 (0x100 - 0x100)
// Class GbxAI.AIAspect_DisableAvoidance
class UAIAspect_DisableAvoidance : public UAIAspect
{
public:

	static class UClass* StaticClass();
	static class UAIAspect_DisableAvoidance* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class GbxAI.AIAspect_MoveNode
class UAIAspect_MoveNode : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector             NodeKey;                                           // 0x240(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_MoveNode* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class GbxAI.AIAspect_UseNode
class UAIAspect_UseNode : public UAIAspect_MoveNode
{
public:

	static class UClass* StaticClass();
	static class UAIAspect_UseNode* GetDefaultObj();

};

// 0x10 (0x260 - 0x250)
// Class GbxAI.AIAspect_DropshipSpawn
class UAIAspect_DropshipSpawn : public UAIAspect_UseNode
{
public:
	struct FAIAspectSettings_DropshipSpawn       DropshipSettings;                                  // 0x250(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_DropshipSpawn* GetDefaultObj();

};

// 0x3C0 (0x4C0 - 0x100)
// Class GbxAI.AIAspect_EnvQuery
class UAIAspect_EnvQuery : public UAIAspect
{
public:
	struct FAIAspectSettings_EnvQuery            Settings;                                          // 0x100(0x3A0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_666[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnValueUpdatedBP;                                  // 0x4B0(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_EnvQuery* GetDefaultObj();

	class FString GetQuerySettingsDescription(struct FAIAspectSettings_EnvQuery& QuerySettings, class UProperty* Property);
};

// 0x10 (0x110 - 0x100)
// Class GbxAI.AIAspect_FaceNearbyCover
class UAIAspect_FaceNearbyCover : public UAIAspect
{
public:
	struct FGbxBlackboardKeySelector             CoverKey;                                          // 0x100(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_FaceNearbyCover* GetDefaultObj();

};

// 0x238 (0x338 - 0x100)
// Class GbxAI.AIAspect_GbxAction
class UAIAspect_GbxAction : public UAIAspect
{
public:
	struct FAIAspectSettings_GbxAction           Settings;                                          // 0x100(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_GbxAction* GetDefaultObj();

};

// 0x0 (0x338 - 0x338)
// Class GbxAI.AIAspect_FallToGround
class UAIAspect_FallToGround : public UAIAspect_GbxAction
{
public:

	static class UClass* StaticClass();
	static class UAIAspect_FallToGround* GetDefaultObj();

};

// 0x20 (0x120 - 0x100)
// Class GbxAI.AIAspect_FindClosestPlayer
class UAIAspect_FindClosestPlayer : public UAIAspect
{
public:
	struct FAIAspectSettings_FindClosestPlayer   Settings;                                          // 0x100(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_FindClosestPlayer* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class GbxAI.AIAspect_FindCover
class UAIAspect_FindCover : public UAIAspect_EnvQuery
{
public:
	bool                                         bCheckFlanking;                                    // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_688[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_FindCover* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class GbxAI.AIAspect_FlyToNavMesh
class UAIAspect_FlyToNavMesh : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_FlyToNavMesh        FlyToNavMeshSettings;                              // 0x240(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_FlyToNavMesh* GetDefaultObj();

};

// 0x1A8 (0x2A8 - 0x100)
// Class GbxAI.AIAspect_FollowUpdate
class UAIAspect_FollowUpdate : public UAIAspect
{
public:
	struct FAIAspectSettings_Follow              Settings;                                          // 0x100(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIAspectSettings_Navigation          NavSettings;                                       // 0x138(0x140)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             TeleportTarget;                                    // 0x278(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x288(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x298(0x10)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_FollowUpdate* GetDefaultObj();

};

// 0x98 (0x198 - 0x100)
// Class GbxAI.AIAspect_GroupLocation
class UAIAspect_GroupLocation : public UAIAspect
{
public:
	struct FAIAspectSettings_GroupLocation       Settings;                                          // 0x100(0x98)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_GroupLocation* GetDefaultObj();

};

// 0xA0 (0x1A0 - 0x100)
// Class GbxAI.AIAspect_IntCompare
class UAIAspect_IntCompare : public UAIAspect
{
public:
	struct FAIAspectSettings_IntCompare          Settings;                                          // 0x100(0xA0)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_IntCompare* GetDefaultObj();

};

// 0x248 (0x348 - 0x100)
// Class GbxAI.AIAspect_IsInRange
class UAIAspect_IsInRange : public UAIAspect
{
public:
	struct FAIAspectSettings_IsInRange           Settings;                                          // 0x100(0x248)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_IsInRange* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class GbxAI.AIAspect_IsInTerritory
class UAIAspect_IsInTerritory : public UAIAspect
{
public:
	struct FAIAspectSettings_IsInTerritory       Settings;                                          // 0x100(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_IsInTerritory* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class GbxAI.AIAspect_Land
class UAIAspect_Land : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_Land                LandSettings;                                      // 0x240(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_Land* GetDefaultObj();

};

// 0x80 (0x180 - 0x100)
// Class GbxAI.AIAspect_LeadUpdate
class UAIAspect_LeadUpdate : public UAIAspect
{
public:
	struct FAIAspectSettings_LeadRoute           LeadSettings;                                      // 0x100(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x150(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x160(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             TeleportTarget;                                    // 0x170(0x10)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_LeadUpdate* GetDefaultObj();

};

// 0x58 (0x158 - 0x100)
// Class GbxAI.AIAspect_Leap
class UAIAspect_Leap : public UAIAspect
{
public:
	struct FAIAspectSettings_Leap                Settings;                                          // 0x100(0x58)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Leap* GetDefaultObj();

	class FString GetQuerySettingsDescription(struct FAIAspectSettings_Leap& LeapSettings, class UProperty* Property);
};

// 0x1E0 (0x2E0 - 0x100)
// Class GbxAI.AIAspect_Location
class UAIAspect_Location : public UAIAspect
{
public:
	struct FAIAspectSettings_Location            Settings;                                          // 0x100(0x1E0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Location* GetDefaultObj();

};

// 0x8 (0x108 - 0x100)
// Class GbxAI.AIAspect_LockTarget
class UAIAspect_LockTarget : public UAIAspect
{
public:
	bool                                         bFailOnTargetChange;                               // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_718[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_LockTarget* GetDefaultObj();

};

// 0x50 (0x150 - 0x100)
// Class GbxAI.AIAspect_LookAroundRandomly
class UAIAspect_LookAroundRandomly : public UAIAspect
{
public:
	uint8                                        Pad_71C[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_LookAroundRandomly* GetDefaultObj();

};

// 0x198 (0x298 - 0x100)
// Class GbxAI.AIAspect_Loop
class UAIAspect_Loop : public UAIAspect
{
public:
	struct FAIAspectSettings_Loop                Settings;                                          // 0x100(0x198)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Loop* GetDefaultObj();

	class FString GetSettingsDescription(struct FAIAspectSettings_Loop& LoopSettings);
};

// 0x50 (0x290 - 0x240)
// Class GbxAI.AIAspect_MoveSpline
class UAIAspect_MoveSpline : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_MoveSpline          MoveSplineSettings;                                // 0x240(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_MoveSpline* GetDefaultObj();

};

// 0x20 (0x260 - 0x240)
// Class GbxAI.AIAspect_NavBlackboard
class UAIAspect_NavBlackboard : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector             GoalKey;                                           // 0x240(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinOffsetInFrontOfTarget;                          // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOffsetInFrontOfTarget;                          // 0x254(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetAngle;                                       // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxNavGoalReach                  Reach;                                             // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_NavBlackboard* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class GbxAI.AIAspect_NavCover
class UAIAspect_NavCover : public UAIAspect_Navigation
{
public:
	struct FGbxBlackboardKeySelector             GoalKey;                                           // 0x240(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_NavCover* GetDefaultObj();

};

// 0x120 (0x360 - 0x240)
// Class GbxAI.AIAspect_NavFlyOffset
class UAIAspect_NavFlyOffset : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_NavFlyOffset        OffsetSettings;                                    // 0x240(0x120)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_NavFlyOffset* GetDefaultObj();

};

// 0x220 (0x460 - 0x240)
// Class GbxAI.AIAspect_Orbit
class UAIAspect_Orbit : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_Orbit               OrbitSettings;                                     // 0x240(0x220)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Orbit* GetDefaultObj();

};

// 0x20 (0x120 - 0x100)
// Class GbxAI.AIAspect_Plan
class UAIAspect_Plan : public UAIAspect
{
public:
	struct FAIAspectSettings_Plan                Settings;                                          // 0x100(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Plan* GetDefaultObj();

};

// 0x550 (0x650 - 0x100)
// Class GbxAI.AIAspect_Rotation
class UAIAspect_Rotation : public UAIAspect
{
public:
	struct FAIAspectSettings_Rotation            Settings;                                          // 0x100(0x550)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Rotation* GetDefaultObj();

	class FString GetRotationSettingsDescription(struct FAIAspectSettings_Rotation& RotationSettings, class UProperty* Property);
	class FString GetRotationChannelSettingsDescription(struct FAIAspectSettings_RotationChannel& RotationChannelSettings, class UProperty* Property);
};

// 0x98 (0x198 - 0x100)
// Class GbxAI.AIAspect_Route
class UAIAspect_Route : public UAIAspect
{
public:
	struct FAIAspectSettings_Route               RouteSettings;                                     // 0x100(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             MoveTarget;                                        // 0x128(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             Distance;                                          // 0x138(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             SmartAction;                                       // 0x148(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             BodyEnable;                                        // 0x158(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             BodyTarget;                                        // 0x168(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             LookEnable;                                        // 0x178(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxBlackboardKeySelector             LookTarget;                                        // 0x188(0x10)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Route* GetDefaultObj();

};

// 0x10 (0x110 - 0x100)
// Class GbxAI.AIAspect_Stance
class UAIAspect_Stance : public UAIAspect
{
public:
	struct FAIAspectSettings_Stance              Settings;                                          // 0x100(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Stance* GetDefaultObj();

};

// 0xA8 (0x508 - 0x460)
// Class GbxAI.AIAspect_Sweep
class UAIAspect_Sweep : public UAIAspect_Orbit
{
public:
	struct FAIAspectSettings_Sweep               SweepSettings;                                     // 0x460(0xA8)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Sweep* GetDefaultObj();

};

// 0x340 (0x580 - 0x240)
// Class GbxAI.AIAspect_Swoop
class UAIAspect_Swoop : public UAIAspect_Navigation
{
public:
	struct FAIAspectSettings_Swoop               SwoopSettings;                                     // 0x240(0x320)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnReachedFarBP;                                    // 0x560(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnReachedNearBP;                                   // 0x570(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAIAspect_Swoop* GetDefaultObj();

};

// 0x8 (0x340 - 0x338)
// Class GbxAI.AIAspect_TakeOff
class UAIAspect_TakeOff : public UAIAspect_GbxAction
{
public:
	float                                        NearFlightDistance;                                // 0x338(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7BE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_TakeOff* GetDefaultObj();

};

// 0x138 (0x238 - 0x100)
// Class GbxAI.AIAspect_Teleport
class UAIAspect_Teleport : public UAIAspect
{
public:
	struct FAIAspectSettings_Teleport            Settings;                                          // 0x100(0x138)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Teleport* GetDefaultObj();

	class FString GetTeleportSettingsDescription(struct FAIAspectSettings_Teleport& TeleportSettings, class UProperty* Property);
};

// 0x10 (0x110 - 0x100)
// Class GbxAI.AIAspect_Territory
class UAIAspect_Territory : public UAIAspect
{
public:
	TArray<struct FGbxBlackboardKeySelector>     TerritoryKeys;                                     // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAIAspect_Territory* GetDefaultObj();

};

// 0x128 (0x228 - 0x100)
// Class GbxAI.AIAspect_Ticket
class UAIAspect_Ticket : public UAIAspect
{
public:
	struct FAIAspectSettings_Ticket              Settings;                                          // 0x100(0x128)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Ticket* GetDefaultObj();

};

// 0x118 (0x218 - 0x100)
// Class GbxAI.AIAspect_TimedCondition
class UAIAspect_TimedCondition : public UAIAspect
{
public:
	struct FAIAspectSettings_TimedCondition      Settings;                                          // 0x100(0x118)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_TimedCondition* GetDefaultObj();

};

// 0x108 (0x208 - 0x100)
// Class GbxAI.AIAspect_TimeLimit
class UAIAspect_TimeLimit : public UAIAspect
{
public:
	struct FAIAspectSettings_TimeLimit           Settings;                                          // 0x100(0x108)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_TimeLimit* GetDefaultObj();

};

// 0x4C8 (0x5C8 - 0x100)
// Class GbxAI.AIAspect_Timer
class UAIAspect_Timer : public UAIAspect
{
public:
	struct FAIAspectSettings_Timer               Settings;                                          // 0x100(0x4C8)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Timer* GetDefaultObj();

};

// 0x138 (0x238 - 0x100)
// Class GbxAI.AIAspect_UseCover
class UAIAspect_UseCover : public UAIAspect
{
public:
	struct FAIAspectSettings_UseCover            Settings;                                          // 0x100(0x138)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_UseCover* GetDefaultObj();

};

// 0x0 (0x338 - 0x338)
// Class GbxAI.AIAspect_UseSmartObject
class UAIAspect_UseSmartObject : public UAIAspect_GbxAction
{
public:

	static class UClass* StaticClass();
	static class UAIAspect_UseSmartObject* GetDefaultObj();

};

// 0x3D0 (0x4D0 - 0x100)
// Class GbxAI.AIAspect_Weapon
class UAIAspect_Weapon : public UAIAspect
{
public:
	struct FAIAspectSettings_Weapon              Settings;                                          // 0x100(0x3D0)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspect_Weapon* GetDefaultObj();

	class FString GetWeaponSettingsDescription(struct FAIAspectSettings_Weapon& WeaponSettings, class UProperty* Property);
};

// 0x10 (0x110 - 0x100)
// Class GbxAI.AIAspect_ZeroRotation
class UAIAspect_ZeroRotation : public UAIAspect
{
public:
	struct FAIAspectSettings_ZeroRotation        Settings;                                          // 0x100(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_825[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAspect_ZeroRotation* GetDefaultObj();

};

// 0x8 (0xF0 - 0xE8)
// Class GbxAI.AIAspectBlueprint
class UAIAspectBlueprint : public Ublueprint
{
public:
	class UAIAspectBlueprint*                    ParentBlueprint;                                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIAspectBlueprint* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxAI.AICloakData
class UAICloakData : public UDataAsset
{
public:
	TArray<struct FCloakCondition>               CloakPriorities;                                   // 0x30(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bDefaultCloaked;                                   // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAICloakData* GetDefaultObj();

};

// 0xF8 (0x270 - 0x178)
// Class GbxAI.AICloakComponent
class UAICloakComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnCloaked;                                         // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUncloaked;                                       // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAICloakData*                          DefaultCloakData;                                  // 0x198(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRender;                                           // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCollide;                                          // 0x1A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bVisible;                                          // 0x1A2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTargetable;                                       // 0x1A3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bGodMode;                                          // 0x1A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDemigodMode;                                      // 0x1A5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowHitReactions;                                // 0x1A6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyMoveWhileCloaked;                             // 0x1A7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanCloakWithMovementHold;                         // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCloakedOnSpawn;                                   // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_860[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          RenderExceptions;                                  // 0x1B0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        MinimumTransitionTime;                             // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_864[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceDataProvider*                   CloakedStance;                                     // 0x1C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                ActionCloak;                                       // 0x1D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                ActionUncloak;                                     // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCloakAfterAction;                                 // 0x1E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUncloakAfterAction;                               // 0x1E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanInterruptActions;                              // 0x1E2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLockActions;                                      // 0x1E3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAICloakData*                          OverrideData;                                      // 0x1E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                   ActionComp;                                        // 0x1F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetableComponent*                  TargetableComp;                                    // 0x1F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      NavComp;                                           // 0x200(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterMovementComponent*        MoveComp;                                          // 0x208(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStanceComponent*                      StanceComp;                                        // 0x210(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDamageComponent*                      DamageComp;                                        // 0x218(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_872[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSavedCollision                       SavedCollision;                                    // 0x230(0x20)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FCloakRepData                         RepData;                                           // 0x250(0x2)(Net, Transient, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_875[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCloakPrimData>                PrimCompData;                                      // 0x258(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_877[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAICloakComponent* GetDefaultObj();

	void SetCloakData(class UAICloakData* NewCloakData);
	void OnRep_Cloaked();
	bool IsPlayingAction();
	bool IsCloakStateForced();
	bool IsCloaked();
	void InterruptCloakAction();
	class UAICloakData* GetCloakData();
	void ForceUncloak(bool bInCanPlayActions);
	void ForceCloak(bool bInCanPlayActions);
	void ClearForcedState();
	void ClearCloakData();
};

// 0x0 (0x100 - 0x100)
// Class GbxAI.AIConstraint
class UAIConstraint : public UAIAspect
{
public:

	static class UClass* StaticClass();
	static class UAIConstraint* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.AIGroupBlueprintLibrary
class UAIGroupBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAIGroupBlueprintLibrary* GetDefaultObj();

	bool IsUsingAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, bool bInterruptible);
	bool IsTicketValid(struct FAITicketHandle& TicketHandle);
	void ClearTicket(struct FAITicketHandle& TicketHandle, float HoldDuration);
	void ClearAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float HoldDuration);
	bool CanUseAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, bool bInterruptible);
	bool AddAITicket(struct FAITicketHandle* OutTicketHandle, class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible);
};

// 0x2818 (0x2840 - 0x28)
// Class GbxAI.AIGroupState
class UAIGroupState : public UObject
{
public:
	uint8                                        Pad_8F6[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpawnerLinkComponent*                 LinkComponent;                                     // 0x40(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAITicketManager                      TicketManager;                                     // 0x48(0x2718)(Edit, EditConst, NativeAccessSpecifierPrivate)
	struct FAICommunicationManager               CommunicationManager;                              // 0x2760(0x48)(Edit, EditConst, NativeAccessSpecifierPrivate)
	struct FAIPlanManager                        PlanManager;                                       // 0x27A8(0x80)(Edit, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FTargetPersistentNotes>        TargetPersistentNotes;                             // 0x2828(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8F9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIGroupState* GetDefaultObj();

	void OnThreatActorDied(class AActor* DamageReceiver, class AActor* DamageCauser);
};

// 0x40 (0x498 - 0x458)
// Class GbxAI.AINode
class AAINode : public AActor
{
public:
	class UAINodeComponent*                      AINodeComponent;                                   // 0x458(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPawnArrivedNode;                                 // 0x460(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPawnDepartedNode;                                // 0x470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_908[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAINode* GetDefaultObj();

	void OnPawnDepartedNodeCB(class AActor* NodeActor, class APawn* DepartedPawn);
	void OnPawnArrivedNodeCB(class AActor* NodeActor, class APawn* ArrivedPawn);
};

// 0x0 (0x28 - 0x28)
// Class GbxAI.AINodeBlueprintLibrary
class UAINodeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAINodeBlueprintLibrary* GetDefaultObj();

	class AActor* FindNearestNode(class UObject* WorldContextObject, struct FVector& Location, bool bIncludeDisabled);
	void FindAllNodes(TArray<class AActor*>* OutputNodes, class UObject* WorldContextObject, bool bIncludeDisabled);
	class AActor* ChooseRandomNode(class UObject* WorldContextObject, bool bIncludeDisabled);
};

// 0x98 (0x788 - 0x6F0)
// Class GbxAI.AINodeComponent
class UAINodeComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_9A7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnabled;                                          // 0x6F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRouteSystem;                                   // 0x6F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RouteFindNavHeight;                                // 0x6FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawRouteFindNavHeight;                           // 0x700(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArrivalThreshold;                                  // 0x704(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrivalHeightThreshold;                            // 0x708(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToGround;                                     // 0x70C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSnapDistance;                                   // 0x710(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAINodeLink>                   LinksTo;                                           // 0x718(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        EditCache;                                         // 0x728(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UAINodeComponent*>              LinksFrom;                                         // 0x738(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPawnArrivedNode;                                 // 0x748(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPawnDepartedNode;                                // 0x758(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bLinkOnAltDrag;                                    // 0x768(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bVisualizeWhileUnlinked;                           // 0x769(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRouteSelected;                                    // 0x76A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSelected;                                         // 0x76B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9B0[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAINodeComponent* GetDefaultObj();

	class AActor* SelectNextNode();
	bool HasLinkTo(class AActor* Node);
	bool HasLinkFrom(class AActor* Node);
	bool HasArrived(const struct FVector& Point, float Error);
	int32 GetLinkedNodeNum();
	class AActor* GetLinkedNode(int32 I);
	void CreateLinkTo(class AActor* Node, float Weight);
	bool BreakLinkTo(class AActor* Node);
};

// 0x90 (0xC0 - 0x30)
// Class GbxAI.AIPlanData
class UAIPlanData : public UGbxDataAsset
{
public:
	struct FGbxParam                             MaxNumberOfInstances;                              // 0x30(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FPlanRoleRequirements>         RoleRequirements;                                  // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAIPlanData* GetDefaultObj();

};

// 0x68 (0x100 - 0x98)
// Class GbxAI.AISense_Proximity
class UAISense_Proximity : public UAISense
{
public:
	uint8                                        Pad_9BE[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense_Proximity* GetDefaultObj();

};

// 0x88 (0x120 - 0x98)
// Class GbxAI.AISense_Threat
class UAISense_Threat : public UAISense
{
public:
	uint8                                        Pad_9C6[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTargetingComponent*>           TargetingComponents;                               // 0x108(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                        UpdatePeriod;                                      // 0x118(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9C8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense_Threat* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class GbxAI.AISenseConfig_Proximity
class UAISenseConfig_Proximity : public UAISenseConfig
{
public:
	float                                        SenseEnemyDistance;                                // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAISenseConfig_Proximity* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class GbxAI.AISenseConfig_Threat
class UAISenseConfig_Threat : public UAISenseConfig
{
public:
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UAISense_Threat>           Implementation;                                    // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAISenseConfig_Threat* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class GbxAI.AIStanceData
class UAIStanceData : public UStanceData
{
public:
	class UHavokPathFindingData*                 AIPathFindData;                                    // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxStrafeType                    AIStrafeType;                                      // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9D0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIStanceData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.AITargetingBlueprintLibrary
class UAITargetingBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAITargetingBlueprintLibrary* GetDefaultObj();

	bool IsThreatenedByInfo(class AActor* AIActor, struct FTargetActorInfo& TargetInfo);
	bool IsThreatenedBy(class AActor* AIActor, class AActor* Target);
	float GetTargetSenseAge(struct FTargetActorInfo& TargetInfo, TSubclassOf<class UAISense> Sense);
	int32 GetNumTargetsInRange(class AActor* AIActor, float Radius);
	struct FVector GetBestKnownLocation(class AActor* AIActor, class AActor* TargetActor, class FName Socket);
	bool CalcTargetGroupLocation(class AActor* AIActor, float GroupDistance, struct FVector* Result);
	void ApplyTargetScoringBoost(class AActor* TargetActor, class FName BoostName, enum class EAITargetScoringBoost ScoringBoost, float DurationInSeconds);
	void AISetTargetInBlackboard(class AActor* AIActor, struct FGbxBlackboardKeySelector& Key, int32 TargetIndex);
	void AISetScriptedTarget(class AActor* AIActor, class AActor* TargetActor);
	void AISendCommunication(class AActor* AIActor, float Radius);
	void AIProvokeSpecificSense(class AActor* AITarget, class AActor* Source, TSubclassOf<class UAISense> SenseType, const struct FVector& StimulusLocation);
	void AIProvoke(class AActor* AITarget, class AActor* Source);
	void AIPlayerProvoke(class AActor* AITarget);
	class AActor* AIGetScriptedTarget(class AActor* AIActor);
	bool AICanCommunicate(class AActor* AIActor, float Radius, float MinSenseAgeDelta);
};

// 0x40 (0xB0 - 0x70)
// Class GbxAI.AITask_UseLookAtPoint
class UAITask_UseLookAtPoint : public UAITask
{
public:
	uint8                                        Pad_A4A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULookAtPointComponent*                 LookAtPointComponent;                              // 0x80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULookAtPointTag*                       Tag;                                               // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAITask_MoveTo*                        MoveToTask;                                        // 0x90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A4D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESmartObjectTaskState             State;                                             // 0xA8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A4E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_UseLookAtPoint* GetDefaultObj();

};

// 0x40 (0xB0 - 0x70)
// Class GbxAI.AITask_UsePerch
class UAITask_UsePerch : public UAITask
{
public:
	uint8                                        Pad_A52[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPerchComponent*                       PerchComponent;                                    // 0x80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPerchTag*                             Tag;                                               // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A53[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAITask_MoveTo*                        MoveToTask;                                        // 0xA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESmartObjectTaskState             State;                                             // 0xA8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A55[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_UsePerch* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class GbxAI.AITask_UseSmartObject
class UAITask_UseSmartObject : public UAITask
{
public:

	static class UClass* StaticClass();
	static class UAITask_UseSmartObject* GetDefaultObj();

};

// 0x110 (0x140 - 0x30)
// Class GbxAI.AITicketDataAsset
class UAITicketDataAsset : public UGbxDataAsset
{
public:
	struct FGbxParam                             MaxValue;                                          // 0x30(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             DefaultMaxHoldTime;                                // 0xB0(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bPerActor;                                         // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActorBlackboardKeyName;                            // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAITicketDataAsset* GetDefaultObj();

};

// 0x38 (0x1B0 - 0x178)
// Class GbxAI.AIUsableComponent
class UAIUsableComponent : public UActorComponent
{
public:
	bool                                         bEnabled;                                          // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USmartObjectComponent*                 SmartObjectComponent;                              // 0x180(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAIUseSlotComponent*>           UseSlots;                                          // 0x188(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A71[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIUsableComponent* GetDefaultObj();

};

// 0x160 (0x2D8 - 0x178)
// Class GbxAI.AIUseComponent
class UAIUseComponent : public UActorComponent
{
public:
	uint8                                        Pad_A96[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  ReserveEvent;                                      // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  UnreserveEvent;                                    // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  BeginEvent;                                        // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  InterruptEvent;                                    // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  SuccessEvent;                                      // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class APawn*                                 CachedPawn;                                        // 0x1D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxAIController*                      CachedController;                                  // 0x1D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                   CachedActionComponent;                             // 0x1E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FActionUseState                       UseState;                                          // 0x1E8(0xC0)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bInitializingAction;                               // 0x2A8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A9D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionCooldownInfo>           GlobalCooldowns;                                   // 0x2B0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A9E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIUseComponent* GetDefaultObj();

	void StopUse(bool bSucceeded);
	bool RequestUse(class AActor* SmartObject, const struct FGameplayTag& ActionName, bool bAbortExisting, bool bUntilInterrupted);
	void OnUseCompleted(class UAITask* Task, enum class ESmartObjectTaskResult Result);
	class AActor* GetCurrentObject();
};

// 0x60 (0x750 - 0x6F0)
// Class GbxAI.AIUseSlotComponent
class UAIUseSlotComponent : public UPrimitiveComponent
{
public:
	bool                                         bEnabled;                                          // 0x6F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToGround;                                     // 0x6F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlotAlignRule                    AlignRule;                                         // 0x6F2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpOnArrival;                                  // 0x6F3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpRotationOnArrival;                          // 0x6F4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpOnArrivalTime;                               // 0x6F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESmartObjectLookAtRule            LookAtRule;                                        // 0x6FC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideLookAtRule;                               // 0x6FD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LookAtSocket;                                      // 0x700(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActionTypes;                                       // 0x708(0x20)(Edit, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x728(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaxUsers;                                         // 0x72C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxUsers;                                          // 0x730(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceUsePhysNoneWithRootMotion;                   // 0x734(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AController*>                   Users;                                             // 0x738(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ABF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIUseSlotComponent* GetDefaultObj();

	void GetAvailableSocketNames(TArray<class FName>* Array);
};

// 0x738 (0x8B0 - 0x178)
// Class GbxAI.AIWeaponUserComponent
class UAIWeaponUserComponent : public UActorComponent
{
public:
	uint8                                        Pad_AD7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  ReloadEvent;                                       // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BeginFiringEvent;                                  // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class AGbxAIController*                      AIController;                                      // 0x1A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGbxCharacter*                         GbxCharacter;                                      // 0x1A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ADE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FireConeAngle;                                     // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AE1[0x2C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWeaponUserInterface> WeaponUser;                                        // 0x1F0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TScriptInterface<class IWeaponInterface>     Weapon;                                            // 0x200(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UDamageComponent*                      DamageComponent;                                   // 0x210(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCoverUserComponent*                   CoverUserComponent;                                // 0x218(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x220(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetingComponent*                   TargetingComponent;                                // 0x230(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCondition*                         CanFireIf;                                         // 0x238(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIWeaponUseSettings                  Settings;                                          // 0x240(0x238)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIWeaponUseSettings                  SettingsOverride;                                  // 0x478(0x238)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bSuppressingFireTimeExpired;                       // 0x6B0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             BurstCountOverride;                                // 0x6B8(0x80)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bOverrideBurstCount;                               // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             BurstDelayOverride;                                // 0x740(0x80)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bOverrideBurstDelay;                               // 0x7C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AFB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             AccuracyOverride;                                  // 0x7C8(0x80)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAccuracy;                                 // 0x848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AFD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNumericRange                         DesiredRangeOverride;                              // 0x84C(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bOverrideDesiredRange;                             // 0x854(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B01[0x5B];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIWeaponUserComponent* GetDefaultObj();

	bool WantsToFire();
	void OnWeaponUsed();
};

// 0x8 (0x38 - 0x30)
// Class GbxAI.AnimNotify_SmartObject
class UAnimNotify_SmartObject : public UAnimNotifyState
{
public:
	enum class ESmartObjectNotify                Action;                                            // 0x30(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B0D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_SmartObject* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxAI.AnimNotify_UseSmartAction
class UAnimNotify_UseSmartAction : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_UseSmartAction* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxAI.BlackboardKeyType_SmartAction
class UBlackboardKeyType_SmartAction : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_SmartAction* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class GbxAI.BTComposite_Random
class UBTComposite_Random : public UBTComposite_Selector
{
public:
	TArray<struct FBTRandomEntrySettings>        Entries;                                           // 0x90(0x10)(Edit, EditFixedSize, ZeroConstructor, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTComposite_Random* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class GbxAI.BTDecorator_AIAction
class UBTDecorator_AIAction : public UBTDecorator
{
public:

	static class UClass* StaticClass();
	static class UBTDecorator_AIAction* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class GbxAI.UBTDecorator_AITicket
class UUBTDecorator_AITicket : public UBTDecorator
{
public:

	static class UClass* StaticClass();
	static class UUBTDecorator_AITicket* GetDefaultObj();

};

// 0x128 (0x190 - 0x68)
// Class GbxAI.BTDecorator_GbxLoop
class UBTDecorator_GbxLoop : public UBTDecorator
{
public:
	struct FGbxParam                             LoopCount;                                         // 0x68(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLoopCount;                                     // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B40[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             LoopTime;                                          // 0xF0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLoopTime;                                      // 0x170(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B43[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBTGbxLoopConditionData               LoopCondition;                                     // 0x178(0x10)(Edit, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseLoopCondition;                                 // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B45[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_GbxLoop* GetDefaultObj();

};

// 0x80 (0x110 - 0x90)
// Class GbxAI.BTDecorator_IsInRange
class UBTDecorator_IsInRange : public UBTDecorator_BlackboardBase
{
public:
	struct FGbxParam                             Range;                                             // 0x90(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTDecorator_IsInRange* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class GbxAI.BTService_GameFocus
class UBTService_GameFocus : public UBTService_DefaultFocus
{
public:

	static class UClass* StaticClass();
	static class UBTService_GameFocus* GetDefaultObj();

};

// 0x0 (0xF8 - 0xF8)
// Class GbxAI.BTService_GbxRunEQS
class UBTService_GbxRunEQS : public UBTService_RunEQS
{
public:

	static class UClass* StaticClass();
	static class UBTService_GbxRunEQS* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class GbxAI.BTTask_AIAction_Custom
class UBTTask_AIAction_Custom : public UBTTask_AIAction
{
public:
	class UAIAction*                             Action;                                            // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_AIAction_Custom* GetDefaultObj();

};

// 0x58 (0xC8 - 0x70)
// Class GbxAI.BTTask_LookAt
class UBTTask_LookAt : public UBTTaskNode
{
public:
	float                                        AngleThresholdDegrees;                             // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B93[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                TargetActorKey;                                    // 0x78(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FBlackboardKeySelector                TurnSpeedKey;                                      // 0xA0(0x28)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBTTask_LookAt* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class GbxAI.BTTask_MoveToComponent
class UBTTask_MoveToComponent : public UBTTask_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowStrafe;                                      // 0x9C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopOnOverlap;                                    // 0x9D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowPartialPath;                                 // 0x9E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bProjectGoalLocation;                              // 0x9F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBTTask_MoveToComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxAI.BTTask_MoveToNode
class UBTTask_MoveToNode : public UBTTask_MoveTo
{
public:

	static class UClass* StaticClass();
	static class UBTTask_MoveToNode* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class GbxAI.BTTask_UseCover
class UBTTask_UseCover : public UBTTaskNode
{
public:

	static class UClass* StaticClass();
	static class UBTTask_UseCover* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class GbxAI.BTTask_UseSmartObject
class UBTTask_UseSmartObject : public UBTTaskNode
{
public:

	static class UClass* StaticClass();
	static class UBTTask_UseSmartObject* GetDefaultObj();

};

// 0xB8 (0x510 - 0x458)
// Class GbxAI.Cover
class ACover : public AActor
{
public:
	struct FSoftObjectPath                       DefaultCoverSlotName;                              // 0x458(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoverSlotData*                        SlotType;                                          // 0x470(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SlotInterval;                                      // 0x478(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TotalWidth;                                        // 0x47C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSlotsAlwaysVisible;                               // 0x480(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDrawLineOfSight;                                  // 0x481(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDrawAreas;                                        // 0x482(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDrawInvalidViews;                                 // 0x483(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDrawLocationTests;                                // 0x484(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BD3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCoverSlotComponent*>           Slots;                                             // 0x488(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAutoAdjust;                               // 0x498(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BDA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverAdjustParams                    AutoAdjustParamsOverride;                          // 0x49C(0x40)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BDE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetTestActor;                                   // 0x4E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                HostileTestActor;                                  // 0x4E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoAdjust;                                       // 0x4F0(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BE2[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACover* GetDefaultObj();

	void SetEnabled(bool bEnabled);
	bool IsEnabled();
};

// 0x150 (0x840 - 0x6F0)
// Class GbxAI.CoverSlotComponent
class UCoverSlotComponent : public UPrimitiveComponent
{
public:
	class UCoverSlotData*                        SlotType;                                          // 0x6F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x6F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoDetect;                                       // 0x6F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bValid;                                            // 0x6FA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C04[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCoverSlotViewData>            Views;                                             // 0x700(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCoverSlotViewFailData>        FailedViews;                                       // 0x710(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	enum class ECoverSlotHeight                  SlotHeight;                                        // 0x720(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C0B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCoverSlotComponent*>           OverlappingSlots;                                  // 0x728(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C0C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverLineOfSightData                 ExposedLosData;                                    // 0x740(0xB0)(NativeAccessSpecifierPrivate)
	class APawn*                                 SlotOwnerUsing;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APawn*                                 SlotOwnerClaimed;                                  // 0x7F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C0E[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCoverSlotComponent* GetDefaultObj();

	void SetEnabled(bool bNewEnabled);
	bool IsEnabled();
};

// 0x98 (0xC8 - 0x30)
// Class GbxAI.CoverSlotData
class UCoverSlotData : public UGbxDataAsset
{
public:
	float                                        SlotWidth;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlotHeightLow;                                     // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlotHeightHigh;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffGroundCover;                                   // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C20[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverLineOfSightParams               ExposedParams;                                     // 0x40(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCheckExposure;                                    // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C22[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverAdjustParams                    AutoAdjustParams;                                  // 0x6C(0x40)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C25[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCoverViewData*>                Views;                                             // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FColor                                ValidColor;                                        // 0xC0(0x4)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NavSearchRadius;                                   // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCoverSlotData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxAI.CoverStyleData
class UCoverStyleData : public UGbxDataAsset
{
public:
	enum class ECoverStyleAnimType               AnimType;                                          // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCoverViewData*                        View;                                              // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowLookAts;                                     // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowAimOffsets;                                  // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceFiring;                                      // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C33[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCoverStyleData* GetDefaultObj();

};

// 0x60 (0xA8 - 0x48)
// Class GbxAI.GbxCoverTransitionTable
class UGbxCoverTransitionTable : public UGbxAnimTable
{
public:
	class UGbxAnimSet*                           AnimSet;                                           // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCoverTransitionFilters               Filters;                                           // 0x50(0x50)(Edit, NativeAccessSpecifierPrivate)
	float                                        DefaultHeight;                                     // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C44[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCoverTransitionTable* GetDefaultObj();

};

// 0x798 (0x910 - 0x178)
// Class GbxAI.CoverUserComponent
class UCoverUserComponent : public UActorComponent
{
public:
	uint8                                        Pad_C8E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCoverStateChanged;                               // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C93[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverAction                          DesiredAction;                                     // 0x1E0(0x130)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FCoverAction                          CurrentAction;                                     // 0x310(0x130)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FCoverAction                          PreviousAction;                                    // 0x440(0x130)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	enum class ECoverUserState                   State;                                             // 0x570(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECoverUserState                   DesiredState;                                      // 0x571(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C9D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TransitionName;                                    // 0x578(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                SkelMeshComponent;                                 // 0x580(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxCharacter*                         GbxCharacter;                                      // 0x588(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxAIController*                      GbxAIController;                                   // 0x590(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDamageComponent*                      DamageComponent;                                   // 0x598(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      GbxNavComponent;                                   // 0x5A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStanceComponent*                      StanceComponent;                                   // 0x5A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetingComponent*                   TargetingComponent;                                // 0x5B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIWeaponUserComponent*                WeaponUserComponent;                               // 0x5B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavCharacterMovementComponent*     MovementComponent;                                 // 0x5C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSavedCollision                       SavedCollision;                                    // 0x5C8(0x20)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CB0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCoverClientData                      ClientData;                                        // 0x5F0(0x28)(Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bFlanked;                                          // 0x618(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CB3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxVerticalNavDistance;                            // 0x61C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxHorizontalNavDistance;                          // 0x620(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDeltaLocationThreshold;                         // 0x624(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDeltaRotationThreshold;                         // 0x628(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExitInterpSearchDistance;                          // 0x62C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TransitionBetweenTraceHeight;                      // 0x630(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WidthAdjustment;                                   // 0x634(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HeightAdjustment;                                  // 0x638(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableFootIk;                                    // 0x63C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCoverStyleUserData>           Styles;                                            // 0x640(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FString>                        FireToIdleStates;                                  // 0x650(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGbxParam                             DefaultIdleTime;                                   // 0x660(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             DefaultFireTime;                                   // 0x6E0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             DefaultWaitTimeBeforeSeekingBetterCover;           // 0x760(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAITicketUseData                      TicketForAdvancingToBetterCover;                   // 0x7E0(0x108)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FCoverFaceDirections                  FaceDirections;                                    // 0x8E8(0x3)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CCE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UHitReactionLayer>         HitReactionLayer;                                  // 0x8F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TransitionBlendTime;                               // 0x8F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        NearCoverDistance;                                 // 0x8FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCoverTransitionTable*              EnterTransitionTable;                              // 0x900(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCoverTransitionTable*              BetweenTransitionTable;                            // 0x908(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCoverUserComponent* GetDefaultObj();

	void SetEnterTransitionTable(class UGbxCoverTransitionTable* NewTable);
	void OnRep_ClientData();
	void OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	class UCoverStyleData* GetStyle();
};

// 0x48 (0x78 - 0x30)
// Class GbxAI.CoverViewData
class UCoverViewData : public UGbxDataAsset
{
public:
	enum class ECoverSlotHeight                  SlotHeight;                                        // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ViewOffset;                                        // 0x34(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverLineOfSightParams               TargetParams;                                      // 0x40(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ForwardCheckDistance;                              // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ForwardCheckExtent;                                // 0x6C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCoverViewData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.EnvQueryContext_AllTargets
class UEnvQueryContext_AllTargets : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_AllTargets* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.EnvQueryContext_Friendlies
class UEnvQueryContext_Friendlies : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Friendlies* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.EnvQueryContext_Target
class UEnvQueryContext_Target : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Target* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.EnvQueryContext_TargetActualLocation
class UEnvQueryContext_TargetActualLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_TargetActualLocation* GetDefaultObj();

};

// 0xA0 (0x100 - 0x60)
// Class GbxAI.EnvQueryGenerator_AINodes
class UEnvQueryGenerator_AINodes : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x68(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FActorTagCompositeQuery               TagQuery;                                          // 0x98(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class AActor>>          AllowedTypes;                                      // 0xA8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bUseAllowedTypes : 1;                              // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_83 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D18[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class AActor>>          DisallowedTypes;                                   // 0xC0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bUseDisallowedTypes : 1;                           // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_84 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D1C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        AllowedTypesCache;                                 // 0xD8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UClass*>                        DisallowedTypesCache;                              // 0xE8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_D20[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_AINodes* GetDefaultObj();

};

// 0x50 (0xB0 - 0x60)
// Class GbxAI.EnvQueryGenerator_Cover
class UEnvQueryGenerator_Cover : public UEnvQueryGenerator
{
public:
	TArray<class UCoverSlotData*>                SlotTypes;                                         // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x70(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCoverSlotData*                        SlotType;                                          // 0xA8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Cover* GetDefaultObj();

};

// 0x160 (0x200 - 0xA0)
// Class GbxAI.EnvQueryGenerator_DynamicPoints
class UEnvQueryGenerator_DynamicPoints : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0xA0(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0xD0(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEQSDynamicPointRange                 PointsPerRing;                                     // 0x100(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEQSDynamicPointRange                 NumberOfRings;                                     // 0x110(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FEQSDynamicPointRange                 NumberOfLayers;                                    // 0x120(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             TopLayerHeight;                                    // 0x130(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             BottomLayerHeight;                                 // 0x160(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bUseLayers : 1;                                    // Mask: 0x1, PropSize: 0x10x190(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_86 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D4C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfPointsMin;                                 // 0x194(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfPointsMax;                                 // 0x198(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D51[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvDirection                         ArcDirection;                                      // 0x1A0(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x1C0(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x1F0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_87 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D55[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UEnvQueryContext>          Center;                                            // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_DynamicPoints* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class GbxAI.EnvQueryGenerator_FindLookAtPoint
class UEnvQueryGenerator_FindLookAtPoint : public UEnvQueryGenerator
{
public:
	enum class ELookAtPointType                  LookAtPointType;                                   // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D68[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x68(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_FindLookAtPoint* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class GbxAI.EnvQueryGenerator_FindPerch
class UEnvQueryGenerator_FindPerch : public UEnvQueryGenerator
{
public:
	class UPerchType*                            PerchType;                                         // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x68(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_FindPerch* GetDefaultObj();

};

// 0xE8 (0x148 - 0x60)
// Class GbxAI.EnvQueryGenerator_SmartAction
class UEnvQueryGenerator_SmartAction : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderBoolValue              CombatActions;                                     // 0x60(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              PassiveActions;                                    // 0x90(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<TSoftClassPtr<class AActor>>          ActorTypes;                                        // 0xC0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        ActorTypesCache;                                   // 0xD0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D81[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ActionNames;                                       // 0xE8(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x108(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSubclassOf<class UEnvQueryContext>          SearchCenter;                                      // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETerritoryType                    TerritoryArea;                                     // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseTerritoryArea;                                 // 0x141(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D8A[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_SmartAction* GetDefaultObj();

};

// 0x10 (0xB0 - 0xA0)
// Class GbxAI.EnvQueryGenerator_SmartGrid
class UEnvQueryGenerator_SmartGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TArray<struct FSmartGridSearchSet>           SearchSets;                                        // 0xA0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_SmartGrid* GetDefaultObj();

};

// 0x70 (0x110 - 0xA0)
// Class GbxAI.EnvQueryGenerator_Territory
class UEnvQueryGenerator_Territory : public UEnvQueryGenerator_ProjectedPoints
{
public:
	enum class ETerritoryType                    TerritoryArea;                                     // 0xA0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xA8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             EverywhereRadius;                                  // 0xD8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class ETerritoryMovementType            MovementType;                                      // 0x108(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtentX;                                           // 0x10C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Territory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxAI.EnvQueryItemType_SmartAction
class UEnvQueryItemType_SmartAction : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_SmartAction* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class GbxAI.EnvQueryTest_ActorHealth
class UEnvQueryTest_ActorHealth : public UEnvQueryTest
{
public:
	bool                                         bHealthPercentage;                                 // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHealthConsumed;                                   // 0x1D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC7[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_ActorHealth* GetDefaultObj();

};

// 0x38 (0x210 - 0x1D8)
// Class GbxAI.EnvQueryTest_AITicket
class UEnvQueryTest_AITicket : public UEnvQueryTest
{
public:
	class UAITicketDataAsset*                    AITicket;                                          // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             Value;                                             // 0x1E0(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryTest_AITicket* GetDefaultObj();

};

// 0x108 (0x2E0 - 0x1D8)
// Class GbxAI.EnvQueryTest_Angle
class UEnvQueryTest_Angle : public UEnvQueryTest
{
public:
	struct FEnvDirection                         LineA;                                             // 0x1D8(0x20)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             LineAHeadingOffset;                                // 0x1F8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             LineAPitchOffset;                                  // 0x228(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FEnvDirection                         LineB;                                             // 0x258(0x20)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             LineBHeadingOffset;                                // 0x278(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue             LineBPitchOffset;                                  // 0x2A8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bTestHeading;                                      // 0x2D8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTestPitch;                                        // 0x2D9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DFA[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_Angle* GetDefaultObj();

};

// 0x68 (0x310 - 0x2A8)
// Class GbxAI.EnvQueryTest_ArcTrace
class UEnvQueryTest_ArcTrace : public UEnvQueryTest_Trace
{
public:
	struct FAIDataProviderFloatValue             ArcSpeed;                                          // 0x2A8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ArcAnglePercent;                                   // 0x2D8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        NumSegments;                                       // 0x308(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E19[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_ArcTrace* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxAI.EnvQueryTest_AttackerCountAgainstTarget
class UEnvQueryTest_AttackerCountAgainstTarget : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_AttackerCountAgainstTarget* GetDefaultObj();

};

// 0x10 (0x1E8 - 0x1D8)
// Class GbxAI.EnvQueryTest_BlackboardKey
class UEnvQueryTest_BlackboardKey : public UEnvQueryTest
{
public:
	struct FGbxBlackboardKeySelector             BlackboardKey;                                     // 0x1D8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_BlackboardKey* GetDefaultObj();

};

// 0x30 (0x208 - 0x1D8)
// Class GbxAI.EnvQueryTest_Boundary
class UEnvQueryTest_Boundary : public UEnvQueryTest
{
public:
	struct FAIDataProviderFloatValue             Distance;                                          // 0x1D8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Boundary* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxAI.EnvQueryTest_CoverCurrent
class UEnvQueryTest_CoverCurrent : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_CoverCurrent* GetDefaultObj();

};

// 0x38 (0x210 - 0x1D8)
// Class GbxAI.EnvQueryTest_CoverExposure
class UEnvQueryTest_CoverExposure : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              DoExposureTest;                                    // 0x1E0(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_CoverExposure* GetDefaultObj();

};

// 0x38 (0x210 - 0x1D8)
// Class GbxAI.EnvQueryTest_CoverView
class UEnvQueryTest_CoverView : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              DoViewTest;                                        // 0x1E0(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_CoverView* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxAI.EnvQueryTest_CurrentTarget
class UEnvQueryTest_CurrentTarget : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_CurrentTarget* GetDefaultObj();

};

// 0x20 (0x1F8 - 0x1D8)
// Class GbxAI.EnvQueryTest_CustomScoringBoost
class UEnvQueryTest_CustomScoringBoost : public UEnvQueryTest
{
public:
	float                                        ReductionExtreme;                                  // 0x1D8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReductionModerate;                                 // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReductionLight;                                    // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoBoostWeighting;                                  // 0x1E4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmplificationLight;                                // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmplificationModerate;                             // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmplificationExtreme;                              // 0x1F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_CustomScoringBoost* GetDefaultObj();

};

// 0x10 (0x1E8 - 0x1D8)
// Class GbxAI.EnvQueryTest_DirectPath
class UEnvQueryTest_DirectPath : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseEnoughDistance;                               // 0x1E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F04[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_DirectPath* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class GbxAI.EnvQueryTest_GbxPath
class UEnvQueryTest_GbxPath : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryTest_GbxPath* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxAI.EnvQueryTest_IsInGodMode
class UEnvQueryTest_IsInGodMode : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_IsInGodMode* GetDefaultObj();

};

// 0x28 (0x200 - 0x1D8)
// Class GbxAI.EnvQueryTest_MyMasterIsAttackingTarget
class UEnvQueryTest_MyMasterIsAttackingTarget : public UEnvQueryTest
{
public:
	float                                        DecayRate;                                         // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F31[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_MyMasterIsAttackingTarget* GetDefaultObj();

};

// 0x10 (0x1E8 - 0x1D8)
// Class GbxAI.EnvQueryTest_PetModifier
class UEnvQueryTest_PetModifier : public UEnvQueryTest
{
public:
	struct FGameplayTag                          PetTag;                                            // 0x1D8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          BossTag;                                           // 0x1E0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_PetModifier* GetDefaultObj();

};

// 0x38 (0x210 - 0x1D8)
// Class GbxAI.EnvQueryTest_PetOwnerDistance
class UEnvQueryTest_PetOwnerDistance : public UEnvQueryTest
{
public:
	struct FAIDataProviderFloatValue             MaxDistanceToOwner;                                // 0x1D8(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          AnyDistanceTag;                                    // 0x208(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_PetOwnerDistance* GetDefaultObj();

};

// 0x158 (0x330 - 0x1D8)
// Class GbxAI.EnvQueryTest_StandardCover
class UEnvQueryTest_StandardCover : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          FriendliesContext;                                 // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UEnvQueryContext>          TargetContext;                                     // 0x1E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UEnvQueryContext>          ExposureContext;                                   // 0x1E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             TargetDistanceMinPriorToTakingCover;               // 0x1F0(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             TargetDistanceMaxPriorToTakingCover;               // 0x220(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        TargetDistanceMinMultiplierAfterTakingCover;       // 0x250(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TargetDistanceMaxMultiplierAfterTakingCover;       // 0x254(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             QuerierMaxDistance;                                // 0x258(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              DoViewTest;                                        // 0x288(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderBoolValue              DoExposureTest;                                    // 0x2B8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDataProviderFloatValue             FriendlyDistance;                                  // 0x2E8(0x30)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        ScoringWeight_AlreadyAtCover;                      // 0x318(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ScoringWeight_DistanceToQuerier;                   // 0x31C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ScoringWeight_DistanceToTarget;                    // 0x320(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ScoringWeight_DistanceToFriendlies;                // 0x324(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ScoringWeight_CoverView;                           // 0x328(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ScoringWeight_CoverExposure;                       // 0x32C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_StandardCover* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class GbxAI.EnvQueryTest_TacticalCover
class UEnvQueryTest_TacticalCover : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>          Context;                                           // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEnvQueryTest_TacticalCover* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class GbxAI.EnvQueryTest_TargetIsAttackingMyMaster
class UEnvQueryTest_TargetIsAttackingMyMaster : public UEnvQueryTest
{
public:
	float                                        DecayRate;                                         // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F97[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_TargetIsAttackingMyMaster* GetDefaultObj();

};

// 0x80 (0x258 - 0x1D8)
// Class GbxAI.EnvQueryTest_TargetIsCloseToMyMaster
class UEnvQueryTest_TargetIsCloseToMyMaster : public UEnvQueryTest
{
public:
	struct FGbxParam                             DistanceThreshold;                                 // 0x1D8(0x80)(Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnvQueryTest_TargetIsCloseToMyMaster* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxAI.EnvQueryTest_TargetIsExposed
class UEnvQueryTest_TargetIsExposed : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_TargetIsExposed* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class GbxAI.EnvQueryTest_TargetIsHurtingMe
class UEnvQueryTest_TargetIsHurtingMe : public UEnvQueryTest
{
public:
	float                                        DecayRate;                                         // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FC7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_TargetIsHurtingMe* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxAI.EnvQueryTest_TargetIsThreat
class UEnvQueryTest_TargetIsThreat : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_TargetIsThreat* GetDefaultObj();

};

// 0x10 (0x1E8 - 0x1D8)
// Class GbxAI.EnvQueryTest_TargetIsCompanionThreat
class UEnvQueryTest_TargetIsCompanionThreat : public UEnvQueryTest
{
public:
	bool                                         bFilterByDistance;                                 // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxThreatDistance;                                 // 0x1DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         MaxThreatDistanceCheckCondition;                   // 0x1E0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryTest_TargetIsCompanionThreat* GetDefaultObj();

};

// 0x28 (0x200 - 0x1D8)
// Class GbxAI.EnvQueryTest_TargetSensed
class UEnvQueryTest_TargetSensed : public UEnvQueryTest
{
public:
	class FString                                DevLabel;                                          // 0x1D8(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UAISense>>          SensesToTestFor;                                   // 0x1E8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        TimeToCareAboutStimuli;                            // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_TargetSensed* GetDefaultObj();

};

// 0x18 (0x2C0 - 0x2A8)
// Class GbxAI.EnvQueryTest_UberTrace
class UEnvQueryTest_UberTrace : public UEnvQueryTest_Trace
{
public:
	TArray<struct FExtendedTraceInfo>            TracesToPerform;                                   // 0x2A8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bWantsTracesToHit;                                 // 0x2B8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1011[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_UberTrace* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class GbxAI.EnvQueryTest_WithinTerritory
class UEnvQueryTest_WithinTerritory : public UEnvQueryTest
{
public:
	enum class ETerritoryType                    TerritoryArea;                                     // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1028[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_WithinTerritory* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxAI.AIResource_ScriptedAction
class UAIResource_ScriptedAction : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass();
	static class UAIResource_ScriptedAction* GetDefaultObj();

};

// 0x58 (0xC0 - 0x68)
// Class GbxAI.GameplayTask_ScriptedAction
class UGameplayTask_ScriptedAction : public UGameplayTask
{
public:
	uint8                                        Pad_108D[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGbxAIController*>              Controllers;                                       // 0x80(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class AGbxAIController*>              AbortingControllers;                               // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UAIAction*                             ScriptedAIAction;                                  // 0xA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1092[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedAction* GetDefaultObj();

	void OnActorSpawned(class ASpawner* Spawner, class AActor* Actor);
};

// 0x28 (0xE8 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedCover
class UGameplayTask_ScriptedCover : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnArrived;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCoverSlotComponent*                   CoverSlot;                                         // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCoverUserComponent*                   CoverUser;                                         // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10CB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedCover* GetDefaultObj();

	void TaskScriptedCoverDelegate__DelegateSignature();
	void EndScriptedCover(class AActor* User);
	class UGameplayTask_ScriptedCover* BeginScriptedCover(class AActor* User, class ACover* Cover);
};

// 0x20 (0xE0 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedFollow
class UGameplayTask_ScriptedFollow : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnStopped;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                ActorToFollow;                                     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStanceDataProvider*                   StanceProvider;                                    // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedFollow* GetDefaultObj();

	void TaskScriptedMoveDelegate__DelegateSignature();
	class UGameplayTask_ScriptedFollow* BeginScriptedFollow(class AActor* Follower, class AActor* ActorToFollow, class UStanceDataProvider* OptionalStance);
};

// 0x20 (0xE0 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedLand
class UGameplayTask_ScriptedLand : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnAborted;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedLand* GetDefaultObj();

	void TaskScriptedLandDelegate__DelegateSignature();
	class UGameplayTask_ScriptedLand* BeginScriptedLand(class AActor* Lander);
};

// 0x38 (0xF8 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedLead
class UGameplayTask_ScriptedLead : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnAborted;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                DestNode;                                          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                ActorToLead;                                       // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStanceDataProvider*                   StanceProvider;                                    // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedLead* GetDefaultObj();

	void TaskScriptedLeadDelegate__DelegateSignature();
	class UGameplayTask_ScriptedLead* BeginScriptedLead(class AActor* Leader, class AActor* DestAINode, class AActor* ActorToLead, class UStanceDataProvider* OptionalStance);
};

// 0x40 (0x100 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedMove
class UGameplayTask_ScriptedMove : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnAborted;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                AINode;                                            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStanceDataProvider*                   StanceProvider;                                    // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                LookAtActor;                                       // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTeleportOnFail;                                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedMove* GetDefaultObj();

	void TaskScriptedMoveDelegate__DelegateSignature();
	class UGameplayTask_ScriptedMove* BeginScriptedMoveActor(class AAIController* Target, class AActor* StartNode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor);
	class UGameplayTask_ScriptedMove* BeginScriptedMove2(class AActor* User, class AActor* StartAINode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor);
	class UGameplayTask_ScriptedMove* BeginScriptedMove(class AActor* Target, class AActor* StartNode, enum class EScriptedActionRule SuccessRule, enum class EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, bool bTeleportOnFail);
};

// 0x60 (0x120 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedMoveSpline
class UGameplayTask_ScriptedMoveSpline : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnAborted;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                      SplineComponent;                                   // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStanceDataProvider*                   StanceProvider;                                    // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                LookAtActor;                                       // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UAIAction>                 OptionalAIAction;                                  // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxSpawner*                           DropOffSpawner;                                    // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                NextSpline;                                        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1252[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedMoveSpline* GetDefaultObj();

	void TaskScriptedMoveDelegate__DelegateSignature(class AActor* Targeted);
	class UGameplayTask_ScriptedMoveSpline* BeginScriptedMoveOnSpline(class AActor* Target, class AActor* StartSpline, enum class EScriptedActionRule SuccessRule, enum class EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, TSubclassOf<class UAIAction> OptionalAIAction);
};

// 0x0 (0xFA0 - 0xFA0)
// Class GbxAI.AIAction_MoveToLevelSequence
class UAIAction_MoveToLevelSequence : public UAIAction_GoToPoint
{
public:

	static class UClass* StaticClass();
	static class UAIAction_MoveToLevelSequence* GetDefaultObj();

};

// 0xA0 (0x160 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedMoveToLevelSequence
class UGameplayTask_ScriptedMoveToLevelSequence : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnActorArrived;                                    // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActorFailedToArrive;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllActorsArrived;                                // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailed;                                          // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxLevelSequenceActor*                LevelSequenceActor;                                // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12B4[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceDataProvider*                   StanceProvider;                                    // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedMoveToLevelSequence* GetDefaultObj();

	void TaskScriptedMoveDelegate__DelegateSignature();
	void TaskScriptedMoveActorsDelegate__DelegateSignature();
	void TaskScriptedMoveActorDelegate__DelegateSignature(class AActor* Actor);
	void OnLevelSequenceStopped();
	void OnLevelSequenceFinished();
	class UGameplayTask_ScriptedMoveToLevelSequence* BeginScriptedMoveToLevelSequenceMulti(TArray<class AActor*>& Targets, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance);
	class UGameplayTask_ScriptedMoveToLevelSequence* BeginScriptedMoveToLevelSequence(class AActor* Target, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance);
};

// 0x30 (0xF0 - 0xC0)
// Class GbxAI.GameplayTask_ScriptedRoute
class UGameplayTask_ScriptedRoute : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnAborted;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                AINode;                                            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStanceDataProvider*                   StanceProvider;                                    // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayTask_ScriptedRoute* GetDefaultObj();

	void TaskScriptedMoveDelegate__DelegateSignature();
	class UGameplayTask_ScriptedRoute* BeginScriptedRoute2(class AActor* Target, class AActor* FirstAINode, enum class EScriptedActionRule SuccessRule, enum class EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance);
	class UGameplayTask_ScriptedRoute* BeginScriptedRoute(class AActor* User, class AActor* FirstAINode, class UStanceDataProvider* OptionalStance);
};

// 0x80 (0x140 - 0xC0)
// Class GbxAI.GameplayTask_SmartAction
class UGameplayTask_SmartAction : public UGameplayTask_ScriptedAction
{
public:
	UMulticastDelegateProperty_                  OnReserve;                                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUnreserve;                                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBegin;                                           // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInterrupt;                                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSmartActionInfoContext               Action;                                            // 0x110(0x30)(NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayTask_SmartAction* GetDefaultObj();

	void UnreserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void SuccessCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void ReserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void InterruptCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void EndSmartAction(class AActor* User);
	class UGameplayTask_SmartAction* BeginSmartAction(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void BeginCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
	void AITaskEvent__DelegateSignature();
};

// 0x18 (0xD0 - 0xB8)
// Class GbxAI.GbxAction_CoverHitReaction
class UGbxAction_CoverHitReaction : public UGbxAction_SimpleAnim
{
public:
	TArray<struct FCoverHitReactionItem>         Styles;                                            // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAction_CoverHitReaction* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class GbxAI.GbxAction_CoverTransition
class UGbxAction_CoverTransition : public UGbxAction
{
public:

	static class UClass* StaticClass();
	static class UGbxAction_CoverTransition* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class GbxAI.GbxAction_Navigation
class UGbxAction_Navigation : public UGbxAction_SimpleAnim
{
public:
	bool                                         bMaintainRootVelocity;                             // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1392[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_Navigation* GetDefaultObj();

	struct FVector K2_GetExitLocation();
	struct FVector K2_GetEntryLocation();
};

// 0xE8 (0x1A8 - 0xC0)
// Class GbxAI.GbxAction_NavAnim
class UGbxAction_NavAnim : public UGbxAction_Navigation
{
public:
	float                                        EntryTime;                                         // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_139E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimSlot;                                          // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimMeshList                         NavAnimations;                                     // 0xD8(0x78)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bLerpLocation;                                     // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLerpRotation;                                     // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseStretchy;                                      // 0x152(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13A8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStretchBonesSettings                 StretchBonesSettings;                              // 0x158(0x30)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     NavAnim;                                           // 0x188(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimActionDef                        NavAnimation;                                      // 0x190(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAction_NavAnim* GetDefaultObj();

};

// 0x228 (0x2E8 - 0xC0)
// Class GbxAI.GbxAction_NavJump
class UGbxAction_NavJump : public UGbxAction_Navigation
{
public:
	struct FStretchBonesSettings                 StretchBonesSettings;                              // 0xC0(0x30)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RotationTime;                                      // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCancelRotationOnActionStop;                       // 0xF4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyRotationOnStart;                             // 0xF5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendInTime;                                       // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendOutTime;                                      // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AnimSlot;                                          // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimMeshList                         JumpEnterAnims;                                    // 0x108(0x78)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAnimMeshList                         JumpExitAnims;                                     // 0x180(0x78)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAnimMeshList                         JumpIdleAnims;                                     // 0x1F8(0x78)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class ENavJumpRotation                  RotationDirective;                                 // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLockRotation;                                     // 0x271(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavJumpStage                     DisablePhysicsStage;                               // 0x272(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENavJumpStage                     EnablePhysicsStage;                                // 0x273(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ArcSpeed;                                          // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ArcAnglePercent;                                   // 0x278(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxPrediction;                                     // 0x27C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ArcTimeScale;                                      // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLimitHitReactions;                                // 0x284(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     JumpEnter;                                         // 0x288(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                     JumpExit;                                          // 0x290(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                     JumpIdle;                                          // 0x298(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimActionDef                        JumpEnterAnim;                                     // 0x2A0(0x18)(Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAnimActionDef                        JumpExitAnim;                                      // 0x2B8(0x18)(Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAnimActionDef                        JumpIdleAnim;                                      // 0x2D0(0x18)(Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAction_NavJump* GetDefaultObj();

	void OnIdle(class AActor* Actor);
	void OnExit(class AActor* Actor);
};

// 0x8 (0x2F0 - 0x2E8)
// Class GbxAI.GbxAction_NavHomingJump
class UGbxAction_NavHomingJump : public UGbxAction_NavJump
{
public:
	float                                        MaxHomingDistance;                                 // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13EC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_NavHomingJump* GetDefaultObj();

};

// 0x28 (0xE8 - 0xC0)
// Class GbxAI.GbxAction_NavLerp
class UGbxAction_NavLerp : public UGbxAction_Navigation
{
public:
	bool                                         bWaitForDistance;                                  // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxHorizontalDistance;                             // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxVerticalDistance;                               // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWaitForVelocity;                                  // 0xCC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1400[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxVelocity;                                       // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCallAlmostDone;                                   // 0xD4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1402[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlmostedDoneTime;                                  // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSpecifyLerpTime;                                  // 0xDC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1405[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LerpTime;                                          // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bVisible;                                          // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1406[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_NavLerp* GetDefaultObj();

	void OnAlmostDone(class AActor* Actor);
};

// 0x0 (0x28 - 0x28)
// Class GbxAI.GbxAIBlueprintLibrary
class UGbxAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxAIBlueprintLibrary* GetDefaultObj();

	void SetPerceivableToAllAI(class AActor* Actor, bool bPerceivable);
	void SetAIPathFindingData(class AActor* InActor, class UHavokPathFindingData* PathFindingData);
	void SetAINavAreaData(class AActor* InActor, class UGbxNavAreaData* NavAreaData);
	void ResetTeamForAllAIChildren(class AActor* Actor);
	bool IsActorThreatened(class AActor* InActor);
	bool GetValueAsActorAndLocation(class UBlackboardComponent* Blackboard, struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location);
	bool GetBlackboardValueAsActorAndLocation(class UBTNode* BTNode, struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location);
	void AIScriptedUseWeapon(class AActor* Actor, bool bUseWeapon);
	void AIScriptedAction(class AActor* Actor, TSubclassOf<class UAIAction> Action);
	bool AIIsWithinTerritory(class AActor* AIActor, enum class ETerritoryType Zone);
};

// 0x128 (0x6C0 - 0x598)
// Class GbxAI.GbxAIController
class AGbxAIController : public AAIController
{
public:
	uint8                                        Pad_1624[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxCharacter*                         GbxCharacter;                                      // 0x5C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               SpawnLocation;                                     // 0x5D0(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1628[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCharacterMovementComponent*        MovementComponent;                                 // 0x5E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetingComponent*                   TargetingComponent;                                // 0x5E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetableComponent*                  TargetableComponent;                               // 0x5F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTeamComponent*                        TeamComponent;                                     // 0x5F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1634[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIActionComponent*                    AIActionComponent;                                 // 0x608(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTerritoryComponent*                   DefaultTerritory;                                  // 0x610(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTerritoryComponent*                   CurrentTerritory;                                  // 0x618(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxSpawnerComponent*                  SpawnerComponent;                                  // 0x620(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxNavComponent*                      GbxNavComponent;                                   // 0x628(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIUseComponent*                       AIUseComponent;                                    // 0x630(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAIWeaponUserComponent*>        WeaponUserComponents;                              // 0x638(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                   GbxActionComponent;                                // 0x648(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        ChildActors;                                       // 0x650(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_163F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnAggro;                                           // 0x668(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnDeAggro;                                         // 0x678(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1641[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxLevelSequencePlayer*               LevelSequencePlayerController;                     // 0x6B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGbxAIController* GetDefaultObj();

	void SetTerritory(class UTerritoryComponent* Territory);
	void SetTeam(class UTeam* Team);
	void SetObstacleAvoidanceLock(bool bDisable, class FName& Reason);
	void ResetTerritoryToDefault();
	void OnMyWeaponHitSomething(class AActor* HitActor, const struct FVector& HitLocation);
	class UAIWeaponUserComponent* GetWeaponUserComponent();
	class UAIUseComponent* GetUseComponent();
	class UTerritoryComponent* GetTerritory();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	class USpawnerComponent* GetSpawnerComponent();
	class ASpawner* GetSpawner();
	class UAIPerceptionComponent* GetPerceptionComponent();
	int32 GetNumChildActors();
	class UGbxNavComponent* GetNavComponent();
	class UGbxCharacterMovementComponent* GetMovementComponent();
	class UAIGroupState* GetGroupState();
	class AGbxCharacter* GetGbxCharacter();
	class UGbxActionComponent* GetGbxActionComponent();
	TArray<class AActor*> GetChildActors();
	class UBlackboardComponent* GetBlackboardComponent();
	class UBlackboardData* GetBlackboardAsset();
	int32 GetAIGroupSize();
	void GetAIGroupList(TArray<class AActor*>* AIGroupList, bool bIncludeSelf, float InRadius);
	class UAIActionComponent* GetAIActionComponent();
	void ChildDestroyed(class AActor* DestroyedActor);
	void CheckPauseWhileFalling(class ACharacter* TheCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void AddChildActors(TArray<class AActor*>& NewChildren);
	void AddChildActor(class AActor* NewChild);
};

// 0x8 (0x440 - 0x438)
// Class GbxAI.GbxAINavSystem
class UGbxAINavSystem : public UGbxNavSystem
{
public:
	uint8                                        Pad_167B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAINavSystem* GetDefaultObj();

	void OnPostApplyLevelOffset(class ULevel* InLevel, class UWorld* InWorld, struct FVector& InOffset, bool bWorldShift);
};

// 0x10 (0x140 - 0x130)
// Class GbxAI.GbxAISystem
class UGbxAISystem : public UGbxAISystemBase
{
public:
	class UAIActionManager*                      AIActionManager;                                   // 0x130(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIGroupState*                         PlayerAIGroupState;                                // 0x138(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAISystem* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class GbxAI.GbxAnimStateManager_Cover
class UGbxAnimStateManager_Cover : public UGbxAnimStateManager
{
public:
	enum class ECoverUserAnimState               Type;                                              // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCoverStyleData*                       Style;                                             // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoverViewData*>                Views;                                             // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UGbxCoverTransitionTable*              TransitionTable;                                   // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCoverUserComponent*                   CoverUser;                                         // 0x60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterAnimInstance*             GbxCharAnimInstance;                               // 0x68(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterMovementComponent*        GbxCharMoveComponent;                              // 0x70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequence*                         AnimSequence;                                      // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_Cover* GetDefaultObj();

	void Owner_PostBeginPlay();
};

// 0x0 (0x328 - 0x328)
// Class GbxAI.GbxBehaviorTreeComponent
class UGbxBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:

	static class UClass* StaticClass();
	static class UGbxBehaviorTreeComponent* GetDefaultObj();

};

// 0x98 (0x120 - 0x88)
// Class GbxAI.GbxCondition_AI_IsInRange
class UGbxCondition_AI_IsInRange : public UGbxCondition
{
public:
	struct FGbxBlackboardKeySelector             Target;                                            // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             Range;                                             // 0x98(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInvertRange;                                      // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_AI_IsInRange* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxAI.GbxCondition_AI_IsMoving
class UGbxCondition_AI_IsMoving : public UGbxCondition
{
public:
	float                                        SpeedThreshold;                                    // 0x88(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_AI_IsMoving* GetDefaultObj();

};

// 0x108 (0x190 - 0x88)
// Class GbxAI.GbxCondition_AIHasNearbyAllies
class UGbxCondition_AIHasNearbyAllies : public UGbxCondition
{
public:
	struct FGbxParam                             AllyCount;                                         // 0x88(0x80)(Edit, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             Distance;                                          // 0x108(0x80)(Edit, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUseDistance;                                      // 0x188(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1704[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_AIHasNearbyAllies* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class GbxAI.GbxCondition_BlackboardKey
class UGbxCondition_BlackboardKey : public UGbxCondition
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x88(0x10)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bInvertResult;                                     // 0x98(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1717[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_BlackboardKey* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_CanFidgetNow
class UGbxCondition_CanFidgetNow : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_CanFidgetNow* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_HasEnemyTarget
class UGbxCondition_HasEnemyTarget : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_HasEnemyTarget* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_HasFriendlyTarget
class UGbxCondition_HasFriendlyTarget : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_HasFriendlyTarget* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_HasPlayerTarget
class UGbxCondition_HasPlayerTarget : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_HasPlayerTarget* GetDefaultObj();

};

// 0x100 (0x188 - 0x88)
// Class GbxAI.GbxCondition_HasTargetsInRange
class UGbxCondition_HasTargetsInRange : public UGbxCondition
{
public:
	struct FGbxParam                             Range;                                             // 0x88(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             NumTargets;                                        // 0x108(0x80)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxCondition_HasTargetsInRange* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_IsActorThreatened
class UGbxCondition_IsActorThreatened : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_IsActorThreatened* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_IsAttachedToOtherActor
class UGbxCondition_IsAttachedToOtherActor : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_IsAttachedToOtherActor* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_IsCloaked
class UGbxCondition_IsCloaked : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_IsCloaked* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxAI.GbxCondition_IsInCover
class UGbxCondition_IsInCover : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_IsInCover* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class GbxAI.GbxCondition_IsInStance
class UGbxCondition_IsInStance : public UGbxCondition
{
public:
	class UStanceType*                           StanceToMatch;                                     // 0x88(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        OptionalSpeedThreshold;                            // 0x90(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17A0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_IsInStance* GetDefaultObj();

};

// 0x30 (0x9D0 - 0x9A0)
// Class GbxAI.GbxEqsTestingPawn
class AGbxEqsTestingPawn : public AEQSTestingPawn
{
public:
	class UGbxCharacterMovementComponent*        GbxCharacterMovement;                              // 0x9A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetableComponent*                  TargetableComponent;                               // 0x9A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageComponent*                      DamageComponent;                                   // 0x9B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageCauserComponent*                DamageCauserComponent;                             // 0x9B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayTagContainerComponent*        GameplayTagContainerComponent;                     // 0x9C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseAimHeight;                                     // 0x9C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimHeightFromGround;                               // 0x9CC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGbxEqsTestingPawn* GetDefaultObj();

};

// 0x10 (0x468 - 0x458)
// Class GbxAI.SmartObject
class ASmartObject : public AActor
{
public:
	class USmartObjectComponent*                 SmartObjectComponent;                              // 0x458(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                   GbxActionComponent;                                // 0x460(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ASmartObject* GetDefaultObj();

	class USmartObjectComponent* GetSmartObjectComponent();
	class UGbxActionComponent* GetGbxActionComponent();
};

// 0x0 (0x468 - 0x468)
// Class GbxAI.GbxSmartObject
class AGbxSmartObject : public ASmartObject
{
public:

	static class UClass* StaticClass();
	static class AGbxSmartObject* GetDefaultObj();

};

// 0x48 (0x630 - 0x5E8)
// Class GbxAI.GbxSpawner
class AGbxSpawner : public ASpawner
{
public:
	uint8                                        Pad_1848[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnThreatened;                                      // 0x600(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGbxSpawnerComponent*                  GbxSpawnerComponent;                               // 0x610(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnNodeComponent*                   SpawnNodeComponent;                                // 0x618(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBalanceStateComponent*                BalanceStateComponent;                             // 0x620(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayTasksComponent*               GameplayTasksComponent;                            // 0x628(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AGbxSpawner* GetDefaultObj();

	class UGameplayTasksComponent* GetGameplayTasksComponent();
	class UAINodeComponent* GetAINodeComponent();
	class UAIGroupState* GetAIGroupState();
	bool DEPRECATED_IsThreatened();
};

// 0x30 (0x9D8 - 0x9A8)
// Class GbxAI.GbxSpawnerComponent
class UGbxSpawnerComponent : public USpawnerComponent
{
public:
	class AGbxSpawner*                           GbxSpawner;                                        // 0x9A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGbxSpawner*                           GroupGbxSpawner;                                   // 0x9B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 AdditionalGameplayTags;                            // 0x9B8(0x20)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxSpawnerComponent* GetDefaultObj();

};

// 0x8 (0x4E0 - 0x4D8)
// Class GbxAI.GbxSpawnPoint
class AGbxSpawnPoint : public ASpawnPoint
{
public:
	class USpawnNodeComponent*                   SpawnNodeComponent;                                // 0x4D8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AGbxSpawnPoint* GetDefaultObj();

	bool HasNavNearSpawnPointFor(class USpawnPointComponent* SpawnPointComp, class USpawnOptionData* SpawnOptions);
};

// 0x8 (0x460 - 0x458)
// Class GbxAI.LookAtPoint
class ALookAtPoint : public AActor
{
public:
	class ULookAtPointComponent*                 LookAtPointComponent;                              // 0x458(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ALookAtPoint* GetDefaultObj();

};

// 0x1A0 (0x890 - 0x6F0)
// Class GbxAI.LookAtPointComponent
class ULookAtPointComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_18DE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULookAtPointTag*                       LookAtPointTag;                                    // 0x6F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x700(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSearchDataOverride;                               // 0x701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SearchHeightOverride;                              // 0x704(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SearchRadiusOverride;                              // 0x708(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUsageTimeOverride;                                // 0x70C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             UsageTimeOverride;                                 // 0x710(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUserCooldownTimeOverride;                         // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             UserCooldownTimeOverride;                          // 0x798(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class AController*, float>              CooldownMap;                                       // 0x818(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FSmartObjectUseRequest>        UserList;                                          // 0x868(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18F5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULookAtPointComponent* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class GbxAI.LookAtPointTag
class ULookAtPointTag : public UGbxDataAsset
{
public:
	enum class ELookAtPointType                  LookAtPointType;                                   // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFacingChannel                    FacingStyle;                                       // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1910[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ActionType;                                        // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SearchHeight;                                      // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SearchRadius;                                      // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             UseChance;                                         // 0x48(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxCondition*                         UseCondition;                                      // 0xC8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetInCloser;                                      // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1922[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UseRadius;                                         // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             UsageTime;                                         // 0xD8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             UserCooldownTime;                                  // 0x158(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bMaxUsers;                                         // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxUsers;                                          // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULookAtPointTag* GetDefaultObj();

};

// 0x8 (0x460 - 0x458)
// Class GbxAI.Perch
class APerch : public AActor
{
public:
	class UPerchComponent*                       PerchComponent;                                    // 0x458(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APerch* GetDefaultObj();

};

// 0x250 (0x940 - 0x6F0)
// Class GbxAI.PerchComponent
class UPerchComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_195B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPerchTag*                             PerchTag;                                          // 0x6F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x700(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_195E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SearchRadius;                                      // 0x704(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SearchHeight;                                      // 0x708(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UseRadius;                                         // 0x70C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUsageTimeOverride;                                // 0x710(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1973[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             UsageTimeOverride;                                 // 0x718(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bCooldownTimeOverride;                             // 0x798(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1979[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             CooldownTimeOverride;                              // 0x7A0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUserCooldownTimeOverride;                         // 0x820(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             UserCooldownTimeOverride;                          // 0x828(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FSmartObjectUseRequest                Claimant;                                          // 0x8A8(0x28)(Transient, NativeAccessSpecifierPrivate)
	float                                        CooldownTime;                                      // 0x8D0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1990[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AAIController*, float>            CooldownMap;                                       // 0x8D8(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1995[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPerchComponent* GetDefaultObj();

};

// 0x190 (0x1C0 - 0x30)
// Class GbxAI.PerchTag
class UPerchTag : public UGbxDataAsset
{
public:
	class UPerchType*                            PerchType;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActionType;                                        // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             UsageTime;                                         // 0x40(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             CooldownTime;                                      // 0xC0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             UserCooldownTime;                                  // 0x140(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPerchTag* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxAI.PerchType
class UPerchType : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UPerchType* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.ScriptedBehaviorTreeLibrary
class UScriptedBehaviorTreeLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UScriptedBehaviorTreeLibrary* GetDefaultObj();

	void PerformScriptedAbort(class AActor* Target, bool bStopImmediately);
	void BeginScriptedWait(class AActor* Target, class UStanceDataProvider* OptionalStance);
	void BeginScriptedLook(class AActor* Target, class AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, class UStanceDataProvider* OptionalStance);
};

// 0x2A0 (0x2D0 - 0x30)
// Class GbxAI.SmartObjectAction
class USmartObjectAction : public UGbxDataAsset
{
public:
	bool                                         bPassiveAction;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCombatAction;                                     // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A99[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             UseChance;                                         // 0x38(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxCondition*                         UseCondition;                                      // 0xB8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsageTime;                                        // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             UsageTime;                                         // 0xC8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bMaxUsers;                                         // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxUsers;                                          // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             ActionCooldownTime;                                // 0x150(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             LocalUserCooldownTime;                             // 0x1D0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             GlobalUserCooldownTime;                            // 0x250(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USmartObjectAction* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxAI.AIResource_SmartObject
class UAIResource_SmartObject : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass();
	static class UAIResource_SmartObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.SmartObjectInterface
class ISmartObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISmartObjectInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.SmartObjectBlueprintLibrary
class USmartObjectBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USmartObjectBlueprintLibrary* GetDefaultObj();

	bool UseSmartObject(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag, bool bAbortExisting, bool bUntilInterrupted);
	void AbortSmartObjectUse(class AActor* User);
};

// 0x350 (0x4C8 - 0x178)
// Class GbxAI.SmartObjectComponent
class USmartObjectComponent : public UActorComponent
{
public:
	uint8                                        Pad_1D1C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActionReserved;                                  // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActionUsageBegan;                                // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnObjectActionEnded;                               // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActionUsageEnded;                                // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bUseInRoutes;                                      // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESmartObjectLookAtRule            LookAtRule;                                        // 0x1C9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D26[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LookAtSocket;                                      // 0x1D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxParam                             UseLookAtQuery;                                    // 0x1D8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             LookAtQueryDuration;                               // 0x258(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             LookAtQueryForgetDuration;                         // 0x2D8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             LookAtQueryPeriod;                                 // 0x358(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       LookAtQuery;                                       // 0x3D8(0xB8)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSmartObjectActionState>       Actions;                                           // 0x490(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UAIUseSlotComponent*>           UseSlots;                                          // 0x4A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectComponent* GetDefaultObj();

	void UnreserveEventSignature(class APawn* User);
	void ToggleActionSet(const struct FSmartObjectActionSet& ActionSet);
	void SuccessEventSignature(class APawn* User);
	void ReserveEventSignature(class APawn* User);
	void OnActionEnded(enum class EGbxActionEndState EndState, const struct FGameplayTag& ActionName, class AController* User);
	void InterruptEventSignature(class APawn* User);
	void GetAvailableSocketNames(TArray<class FName>* Array);
	void GetActionUsers(const struct FGameplayTag& ActionTag, TArray<class APawn*>* OutUsers);
	void EnableAllActions();
	void EnableAction(const struct FGameplayTag& ActionTag);
	void DisableAllActions();
	void DisableAction(const struct FGameplayTag& ActionTag);
	void BeginEventSignature(class APawn* User);
};

// 0x48 (0x830 - 0x7E8)
// Class GbxAI.SmartObjectPreviewComponent
class USmartObjectPreviewComponent : public UPreviewComponent
{
public:
	TArray<struct FSmartObjectPreviewState>      PreviewList;                                       // 0x7E8(0x10)(ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        ActiveAISlotIdx;                                   // 0x7F8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                PreviewAction;                                     // 0x800(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoCycle;                                        // 0x808(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxTriggerProperty                   CycleActor;                                        // 0x809(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowAction;                                       // 0x80A(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRepeatAction;                                     // 0x80B(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxTriggerProperty                   ReplayAction;                                      // 0x80C(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGbxActionComponent>    ActionComponent;                                   // 0x810(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D97[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectPreviewComponent* GetDefaultObj();

	void OnReplayAction();
	void OnCycleActor(enum class ECycleDirection Direction);
};

// 0x0 (0x28 - 0x28)
// Class GbxAI.SmartObjectUser
class ISmartObjectUser : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISmartObjectUser* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAI.SpawnBlueprintLibrary
class USpawnBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USpawnBlueprintLibrary* GetDefaultObj();

	void SetSpawnOptions(class AActor* SpawnerActor, class USpawnOptionData* SpawnOptions);
	class ASpawner* GenerateSpawnerByRadius(class AActor* Instigator, class USpawnerStyle* Style, float Radius, enum class ETeamAttitude MinRequiredAttitude);
	class ASpawner* GenerateSpawnerByOwningSpawner(class AActor* Instigator, class USpawnerStyle* Style);
};

// 0x8 (0x790 - 0x788)
// Class GbxAI.SpawnNodeComponent
class USpawnNodeComponent : public UAINodeComponent
{
public:
	enum class EInitialPathAction                InitialPathAction;                                 // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E33[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnNodeComponent* GetDefaultObj();

};

// 0x8 (0x460 - 0x458)
// Class GbxAI.Territory
class ATerritory : public AInfo
{
public:
	class UTerritoryComponent*                   TerritoryComponent;                                // 0x458(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ATerritory* GetDefaultObj();

	class UTerritoryComponent* GetTerritoryComponent();
};

}


