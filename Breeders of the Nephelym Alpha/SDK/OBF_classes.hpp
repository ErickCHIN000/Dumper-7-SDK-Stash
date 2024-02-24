#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// Class OBF.SexyAIController
class ASexyAIController : public AAIController
{
public:
	class UAISenseConfig_Sight*                  SightConfig;                                       // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyAIController* GetDefaultObj();

};

// 0x10 (0x340 - 0x330)
// Class OBF.SexyAI_Roamer
class ASexyAI_Roamer : public ASexyAIController
{
public:
	class ASexyRoamingCharacter*                 RoamingCharacter;                                  // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRoaming;                                          // 0x338(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyAI_Roamer* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class OBF.SexyAICrowdManager
class USexyAICrowdManager : public UCrowdManager
{
public:

	static class UClass* StaticClass();
	static class USexyAICrowdManager* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class OBF.SexyAITask
class USexyAITask : public UBTTask_BlackboardBase
{
public:

	static class UClass* StaticClass();
	static class USexyAITask* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class OBF.SexyAICuteAction
class USexyAICuteAction : public USexyAITask
{
public:

	static class UClass* StaticClass();
	static class USexyAICuteAction* GetDefaultObj();

};

// 0x78 (0x110 - 0x98)
// Class OBF.SexyAIDecideRoamingAction
class USexyAIDecideRoamingAction : public USexyAITask
{
public:
	struct FBlackboardKeySelector                RoamingActionKey;                                  // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                WalkKey;                                           // 0xC0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                WantsBreederKey;                                   // 0xE8(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyAIDecideRoamingAction* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class OBF.SexyAIDumbAction
class USexyAIDumbAction : public USexyAITask
{
public:

	static class UClass* StaticClass();
	static class USexyAIDumbAction* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OBF.SexyAIHotSpotManager
class USexyAIHotSpotManager : public UAIHotSpotManager
{
public:

	static class UClass* StaticClass();
	static class USexyAIHotSpotManager* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class OBF.SexyAIMoveTo
class USexyAIMoveTo : public USexyAITask
{
public:
	struct FBlackboardKeySelector                MoveTargetKey;                                     // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyAIMoveTo* GetDefaultObj();

};

// 0x0 (0x130 - 0x130)
// Class OBF.SexyAIPerceptionSystem
class USexyAIPerceptionSystem : public UAIPerceptionSystem
{
public:

	static class UClass* StaticClass();
	static class USexyAIPerceptionSystem* GetDefaultObj();

};

// 0x50 (0xE8 - 0x98)
// Class OBF.SexyAISeekBreeder
class USexyAISeekBreeder : public USexyAITask
{
public:
	struct FBlackboardKeySelector                MoveTargetKey;                                     // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                WalkKey;                                           // 0xC0(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyAISeekBreeder* GetDefaultObj();

};

// 0x78 (0x110 - 0x98)
// Class OBF.SexyAISeekMate
class USexyAISeekMate : public USexyAITask
{
public:
	struct FBlackboardKeySelector                MoveTargetKey;                                     // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                WalkKey;                                           // 0xC0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                RoamingKey;                                        // 0xE8(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyAISeekMate* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class OBF.SexyAITrySeduce
class USexyAITrySeduce : public USexyAITask
{
public:
	struct FBlackboardKeySelector                WantsBreederKey;                                   // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyAITrySeduce* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class OBF.SexyAITrySurpriseSex
class USexyAITrySurpriseSex : public USexyAITask
{
public:
	struct FBlackboardKeySelector                WantsBreederKey;                                   // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyAITrySurpriseSex* GetDefaultObj();

};

// 0x58 (0xF0 - 0x98)
// Class OBF.SexyAIWander
class USexyAIWander : public USexyAITask
{
public:
	struct FBlackboardKeySelector                MoveTargetKey;                                     // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                WalkKey;                                           // 0xC0(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyAIWander* GetDefaultObj();

};

// 0x50 (0x270 - 0x220)
// Class OBF.SexyWorldNode
class ASexyWorldNode : public AActor
{
public:
	struct FGameplayTag                          NodeType;                                          // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  NodeDisplayName;                                   // 0x228(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class ASexyProceduralCharacter*>      CharacterProxies;                                  // 0x240(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class UMaterialBillboardComponent*           SelectorWidget;                                    // 0x250(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialBillboardComponent*           RootWidget;                                        // 0x258(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      MasterArea;                                        // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipThisNodeForWorldStateOnce;                    // 0x268(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyWorldNode* GetDefaultObj();

	void Reset();
	void OnSetWorldState();
	void Notify(bool bFromActivation, enum class EWorldNodeNotify Type, const struct FConditions& GameFlags, class FText Message, const struct FGameplayTag& Item, int32 ItemCount);
	class ASexyBreederCharacter* GetBreeder();
	bool CheckGameFlags(const struct FConditions& GameFlags);
};

// 0x30 (0x2A0 - 0x270)
// Class OBF.SexyASOG
class ASexyASOG : public ASexyWorldNode
{
public:
	bool                                         bActive;                                           // 0x270(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                MeshComponent;                                     // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     CollisionCapsule;                                  // 0x280(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x288(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              SwirlyParticleComponent;                           // 0x290(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       ActiveAnimation;                                   // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyASOG* GetDefaultObj();

};

// 0x348 (0x7C0 - 0x478)
// Class OBF.SexyAssetManager
class USexyAssetManager : public UAssetManager
{
public:
	struct FRegistry                             Registry;                                          // 0x478(0x330)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FTimerHandle                          LoadingScreenTimer;                                // 0x7A8(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyAssetManager* GetDefaultObj();

};

// 0x768 (0xC20 - 0x4B8)
// Class OBF.SexyBaseCharacter
class ASexyBaseCharacter : public ACharacter
{
public:
	bool                                         bManual;                                           // 0x4B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProcedural;                                       // 0x4B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRoamer;                                           // 0x4BA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVagrant;                                          // 0x4BB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBreeder;                                          // 0x4BC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInFrustum;                                        // 0x4BD(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickAnimation;                                    // 0x4BE(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickAnimationCorrections;                         // 0x4BF(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickBlinking;                                     // 0x4C0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickFluidEmitters;                                // 0x4C1(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickMotion;                                       // 0x4C2(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBusy;                                             // 0x4C3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFemale;                                           // 0x4C4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFuta;                                             // 0x4C5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMale;                                             // 0x4C6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNaked;                                            // 0x4C7(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTalking;                                          // 0x4C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentDailyToy;                                  // 0x4C9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToGround;                                     // 0x4CA(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_439[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastRenderTime;                                    // 0x4CC(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraDistance;                                    // 0x4D0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallTime;                                          // 0x4D4(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedScalar;                                       // 0x4D8(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterPhysicsFlags                PhysicsFlags;                                      // 0x4DC(0x6)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, DuplicateTransient, Interp, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStagger                              Stagger;                                           // 0x4E4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BellyPhysicsBlend;                                 // 0x4F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BellyPhysicsBlend2;                                // 0x4F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastPhysicsBlend;                                // 0x4F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreastPhysicsBlend2;                               // 0x4FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtPhysicsBlend;                                  // 0x500(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtPhysicsBlend2;                                 // 0x504(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThighPhysicsBlend;                                 // 0x508(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThighPhysicsBlend2;                                // 0x50C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DickPhysicsBlend;                                  // 0x510(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairDynamics;                                      // 0x514(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairDynamicsTarget;                                // 0x518(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TailDynamics;                                      // 0x51C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TailDynamicsTarget;                                // 0x520(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WingsDynamics;                                     // 0x524(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WingsDynamicsTarget;                               // 0x528(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_450[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USexyCharacterAssets*                  DefaultAssets;                                     // 0x530(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCapsuleComponent*>             DetectionComponents;                               // 0x538(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterComponent*>       CharacterComponents;                               // 0x548(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterFurComponent*>    CharacterFurComponents;                            // 0x558(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>               TransformNodeComponents;                           // 0x568(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             FluidComponents;                                   // 0x578(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     PhaseEffectComponent;                              // 0x588(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialBillboardComponent*           OverheadStatusComponent;                           // 0x590(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AudioComponent;                                    // 0x598(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  HeldObjectComponent;                               // 0x5A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              OverheadStatusMaterial;                            // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent*                      DialogueSessionCamera;                             // 0x5B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     ProximityCapsule;                                  // 0x5B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterMovement*                MovementComponent;                                 // 0x5C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFaceOther;                                        // 0x5C8(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoesNotFaceOthers;                                // 0x5C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoesNotHeadLook;                                  // 0x5CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockProximityEntrance;                            // 0x5CB(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockProximityExit;                                // 0x5CC(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRBJ;                                              // 0x5CD(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPussyStuffed;                                     // 0x5CE(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSexSceneCooldown;                                 // 0x5CF(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveSeconds;                                     // 0x5D0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventLookAt;                                    // 0x5D4(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_478[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          BlinkTimer;                                        // 0x5D8(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlinkSpeed;                                        // 0x5E0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BlinkFloor;                                        // 0x5E4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlinkBlend;                                        // 0x5F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeHaze;                                           // 0x5F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArmWings;                                         // 0x5F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlink;                                            // 0x5F9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanFly;                                           // 0x5FA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseEyes;                                        // 0x5FB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDickInheritBaseAnim;                              // 0x5FC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDynamicScale;                                     // 0x5FD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceTPose;                                       // 0x5FE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeadLook;                                         // 0x5FF(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJumped;                                           // 0x600(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockDickToVagina;                                 // 0x601(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMovementInput;                                    // 0x602(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoving;                                           // 0x603(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSprint;                                     // 0x604(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldWalk;                                       // 0x605(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShrinkDickToFit;                                  // 0x606(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipHandTransformL;                               // 0x607(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipHandTransformR;                               // 0x608(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopping;                                         // 0x609(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PhysicsHold;                                       // 0x60C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransitionIdle;                                   // 0x610(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRoamerSSex;                                     // 0x611(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEndlessDaze;                                      // 0x612(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHardLanding;                                      // 0x613(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B2[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimationCorrections                 Corrections;                                       // 0x620(0x4A0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, DuplicateTransient, Interp, NativeAccessSpecifierPublic)
	float                                        ClimaxBlend;                                       // 0xAC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentSpeed;                                      // 0xAC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadLookBlendTime;                                 // 0xAC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastSizeLocationOffset;                            // 0xACC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationRate;                                      // 0xAD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementForwardAxis;                               // 0xAD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementLateralAxis;                               // 0xAD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationBlend;                                  // 0xADC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationRate;                                      // 0xAE0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationRateY;                                     // 0xAE4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunRotationRate;                                   // 0xAE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunSpeed;                                          // 0xAEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleRate;                                         // 0xAF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimpleHandBlend;                                   // 0xAF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintRotationRate;                                // 0xAF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintSpeed;                                       // 0xAFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkRotationRate;                                  // 0xB00(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkSpeed;                                         // 0xB04(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawValue;                                          // 0xB08(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchValue;                                        // 0xB0C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XAxisInput;                                        // 0xB10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YAxisInput;                                        // 0xB14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThrustReceive;                                     // 0xB18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ControlRotation;                                   // 0xB1C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              HeadLookRotation;                                  // 0xB28(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LastKnownRotation;                                 // 0xB34(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              LastVelocityRotation;                              // 0xB40(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               HandSocketLockL;                                   // 0xB4C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandSocketLockR;                                   // 0xB58(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HeadLookTarget;                                    // 0xB64(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastAirVelocityVector;                             // 0xB70(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VelocityVector;                                    // 0xB7C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BreedingPhase;                                     // 0xB88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         ClimaxAnimation;                                   // 0xB90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         PenetrationAnimation;                              // 0xB98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyBaseCharacter*                    OtherCharacter;                                    // 0xBA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyWorldNode*                        FocusedNode;                                       // 0xBA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      CurrentArea;                                       // 0xBB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionAnimations                 CurrentExpression;                                 // 0xBB8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, DuplicateTransient, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CurrentExpressionState;                            // 0xBF0(0x8)(Edit, BlueprintVisible, Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 CharacterFlags;                                    // 0xBF8(0x20)(Edit, BlueprintVisible, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         bInSexScene;                                       // 0xC18(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHarvesting;                                       // 0xC19(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSpeak;                                         // 0xC1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_532[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyBaseCharacter* GetDefaultObj();

	void Teleport(const struct FTransform& Destination);
	void Reset();
	void ProximityCapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ProximityCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnStartSex();
	void OnSexEnd();
	void OnSetWorldState();
	void OnNoLongerDailyToy();
	void OnBlink();
	void OnBecameDailyToy();
	void EnableCollision();
	void DisableCollision();
	bool CheckGameFlags(const struct FConditions& GameFlags);
};

// 0x8 (0x2C0 - 0x2B8)
// Class OBF.SexyBaseCharacterAnimation
class USexyBaseCharacterAnimation : public UAnimInstance
{
public:
	bool                                         bPostProcessGraph;                                 // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_577[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimationSpeed;                                    // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyBaseCharacterAnimation* GetDefaultObj();

	void NotifyFluidBurst(int32 Type);
};

// 0x80 (0x2F0 - 0x270)
// Class OBF.SexyBlessedSexNode
class ASexyBlessedSexNode : public ASexyWorldNode
{
public:
	struct FGameplayTagContainer                 BlessedSessionTags;                                // 0x270(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FConditions                           RequiredGameFlags;                                 // 0x290(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class USexySemenPoolComponent*               MonsterSemenPool;                                  // 0x2D0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexySemenPoolComponent*               OtherSemenPool;                                    // 0x2D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USexySemenPoolComponent*>       SemenPoolComponents;                               // 0x2E0(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyBlessedSexNode* GetDefaultObj();

};

// 0x7148 (0x7D68 - 0xC20)
// Class OBF.SexyProceduralCharacter
class ASexyProceduralCharacter : public ASexyBaseCharacter
{
public:
	uint8                                        Pad_5A7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDebugAnimCorrections;                             // 0xC28(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaterialsBuilt;                                   // 0xC29(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSummoned;                                         // 0xC2A(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0xC2B(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReceiver;                                       // 0xC2C(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingBaseBodyForAttachment;                       // 0xC2D(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickCumBalloon;                                   // 0xC2E(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTreadingWater;                                    // 0xC2F(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterData                        CharacterData;                                     // 0xC30(0x37D8)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterVariant                     CachedVariant;                                     // 0x4410(0x35F0)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	float                                        BodySplatterBuffer;                                // 0x7A00(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GenitalSplatterBuffer;                             // 0x7A04(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouthSplatterBuffer;                               // 0x7A08(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiverFemaleScene;                                 // 0x7A0C(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickCI;                                           // 0x7A0D(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CBFillBuffer;                                      // 0x7A10(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CILastColor;                                       // 0x7A14(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CILastGlow;                                        // 0x7A24(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentDickIKTarget;                               // 0x7A34(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentHandSize;                                   // 0x7A3C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent*                      CharacterCamera;                                   // 0x7A40(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              BodyMaterial;                                      // 0x7A48(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              SlimeBodyMaterial;                                 // 0x7A50(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ClawsMaterial;                                     // 0x7A58(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              EyelashesMaterial;                                 // 0x7A60(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              EyeLMaterial;                                      // 0x7A68(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              EyeRMaterial;                                      // 0x7A70(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              FingerNailsMaterial;                               // 0x7A78(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              HairMaterial;                                      // 0x7A80(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              MawMaterial;                                       // 0x7A88(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              TeethMaterial;                                     // 0x7A90(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ToeNailsMaterial;                                  // 0x7A98(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              BlurSheathMaterial;                                // 0x7AA0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     AmbientParticleComponent;                          // 0x7AA8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointLightComponent*                  AmbientLightComponent;                             // 0x7AB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCameraTether*                     CameraTether;                                      // 0x7AB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterBodyComponent*           AskComponent;                                      // 0x7AC0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterBodyComponent*           EmblaComponent;                                    // 0x7AC8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               AccessoryComponent;                                // 0x7AD0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               ArmsComponent;                                     // 0x7AD8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               BootsComponent;                                    // 0x7AE0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               CollarComponent;                                   // 0x7AE8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               DickComponent;                                     // 0x7AF0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               EarsComponent;                                     // 0x7AF8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               HairComponent;                                     // 0x7B00(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               HeadComponent;                                     // 0x7B08(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               HeadExtraComponent;                                // 0x7B10(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               LegsComponent;                                     // 0x7B18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               LowerClothingComponent;                            // 0x7B20(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               TailComponent;                                     // 0x7B28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               TorsoComponent;                                    // 0x7B30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               UnderwearComponent;                                // 0x7B38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               UpperClothingComponent;                            // 0x7B40(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterComponent*               WingComponent;                                     // 0x7B48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            ArmsFurComponent;                                  // 0x7B50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            DickFurComponent;                                  // 0x7B58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            EarsFurComponent;                                  // 0x7B60(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            HeadFurComponent;                                  // 0x7B68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            LegsFurComponent;                                  // 0x7B70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            PubicHairComponent;                                // 0x7B78(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            TailFurComponent;                                  // 0x7B80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            TorsoFurComponent;                                 // 0x7B88(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            WingFurComponent;                                  // 0x7B90(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                      DickSpline;                                        // 0x7B98(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyProceduralCharacterAnimation*     CharacterAnimation;                                // 0x7BA0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyProceduralCharacterAnimation*     PostCharacterAnimation;                            // 0x7BA8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyTentacleNode*                     CurrentTentacleNode;                               // 0x7BB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpineAdjustScalar;                                 // 0x7BB8(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDickOffsetScalar;                              // 0x7BBC(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendSpaceRate;                                    // 0x7BC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AbdomenGirth;                                      // 0x7BC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PelvicGirth;                                       // 0x7BC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HipGirth;                                          // 0x7BCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BustGirth;                                         // 0x7BD0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HairRestBlend;                                     // 0x7BD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MotionAxisValue;                                   // 0x7BD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaseDickScale;                                     // 0x7BDC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaseDickOffset;                                    // 0x7BE8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GroinBellyDickAdjust;                              // 0x7BF4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BellyBaseAdjust;                                   // 0x7C00(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BreastDeform;                                      // 0x7C0C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BreastPosition;                                    // 0x7C18(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BreastScale;                                       // 0x7C24(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ButtDeform;                                        // 0x7C30(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ButtPosition;                                      // 0x7C3C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ButtScale;                                         // 0x7C48(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BellyScale;                                        // 0x7C54(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EarScale;                                          // 0x7C60(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HairBack;                                          // 0x7C6C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HairScale;                                         // 0x7C78(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandIKPosition_L;                                  // 0x7C84(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HandIKPosition_R;                                  // 0x7C90(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LegSpread;                                         // 0x7C9C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ScrotumScale;                                      // 0x7CA8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ShoulderOffset;                                    // 0x7CB4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpineAdjust;                                       // 0x7CC0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TailScale;                                         // 0x7CCC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WingsScale;                                        // 0x7CD8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HeadScale;                                         // 0x7CE4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArmScale_0;                                        // 0x7CF0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArmScale_1;                                        // 0x7CFC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArmScale_2;                                        // 0x7D08(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArmScale_3;                                        // 0x7D14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArmScale_4;                                        // 0x7D20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArmScale_5;                                        // 0x7D2C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipMaleArms;                                     // 0x7D38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_670[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DickCorrectionHold;                                // 0x7D3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       CurrentMotionBlendSpace;                           // 0x7D40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    DickTransforms;                                    // 0x7D48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, Interp, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       DickThrustOffsets;                                 // 0x7D58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, Interp, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyProceduralCharacter* GetDefaultObj();

};

// 0x18 (0x7D80 - 0x7D68)
// Class OBF.SexyBreederCharacter
class ASexyBreederCharacter : public ASexyProceduralCharacter
{
public:
	class UAIPerceptionStimuliSourceComponent*   StimuliComponent;                                  // 0x7D68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFocusActorAcquired;                               // 0x7D70(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BE[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyBreederCharacter* GetDefaultObj();

};

// 0x48 (0x5B8 - 0x570)
// Class OBF.SexyBreederController
class ASexyBreederController : public APlayerController
{
public:
	class ASexyBreederCharacter*                 BreederCharacter;                                  // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCameraPan;                                        // 0x578(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCameraRotate;                                     // 0x579(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCameraZoom;                                       // 0x57A(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoveLock;                                         // 0x57B(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockPan;                                          // 0x57C(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          WorldAction;                                       // 0x580(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookRate;                                          // 0x588(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomValue;                                         // 0x58C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PanValue;                                          // 0x590(0xC)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingZoom;                                      // 0x59C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomMin;                                           // 0x5A0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomMax;                                           // 0x5A4(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PanMin;                                            // 0x5A8(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PanMax;                                            // 0x5AC(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnlockControllerTests;                            // 0x5B0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyBreederController* GetDefaultObj();

	void OnZoom(float AxisValue);
	void OnYawAxis(float AxisValue);
	void OnWriteShapeData();
	void OnWriteAppearanceData();
	void OnWalk();
	void OnToggleUnderwear();
	void OnToggleUI();
	void OnToggleShirt();
	void OnTogglePants();
	void OnToggleClothing();
	void OnToggleBoots();
	void OnTest5();
	void OnTest4();
	void OnTest3();
	void OnTest2();
	void OnTest1();
	void OnStopWalk();
	void OnStopSprint();
	void OnStopRotateCamera();
	void OnStopPanCamera();
	void OnSprint();
	void OnSpiritForm();
	void OnShowCommandLine();
	void OnShowAdventureCursor();
	void OnRotateCamera();
	void OnResetResolution();
	void OnPitchAxis(float AxisValue);
	void OnPanCamera();
	void OnMoveUp(float Value);
	void OnMoveRight(float Value);
	void OnMoveForward(float Value);
	void OnJumpRelease();
	void OnJump();
	void OnHideAdventureCursor();
	void OnFastTravelMenu();
	void OnDumpWhateverJSON();
	void OnBack();
	void OnAction();
};

// 0x40 (0x2B0 - 0x270)
// Class OBF.SexyRanchBuilding
class ASexyRanchBuilding : public ASexyWorldNode
{
public:
	class ACameraActor*                          ActionCamera;                                      // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ExteriorAssets;                                    // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAcquired;                                         // 0x288(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_808[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x290(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              SwirlyParticleComponent;                           // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  SwirlyMeshComponent;                               // 0x2A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointLightComponent*                  LightComponent;                                    // 0x2A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyRanchBuilding* GetDefaultObj();

};

// 0x8 (0x2B8 - 0x2B0)
// Class OBF.SexyBreederHouse
class ASexyBreederHouse : public ASexyRanchBuilding
{
public:
	struct FTimerHandle                          SleepTimer;                                        // 0x2B0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyBreederHouse* GetDefaultObj();

	void TransitionDay();
};

// 0x0 (0x3A8 - 0x3A8)
// Class OBF.SexyBreederInput
class USexyBreederInput : public UPlayerInput
{
public:

	static class UClass* StaticClass();
	static class USexyBreederInput* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class OBF.SexySystem
class ASexySystem : public AInfo
{
public:
	bool                                         bEnableMouseCamera;                                // 0x220(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasInputFocus;                                    // 0x221(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_833[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentStatus;                                     // 0x224(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCameraTether*                     FocusedCameraArm;                                  // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexySystem* GetDefaultObj();

};

// 0x40 (0x270 - 0x230)
// Class OBF.SexyBreederRanch
class ASexyBreederRanch : public ASexySystem
{
public:
	TArray<class ASexyMonsterBarn*>              MonsterBarns;                                      // 0x230(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              AssistantNPC;                                      // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                    CumBalloon;                                        // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       CBFillAnimation;                                   // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CBMaterial;                                        // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASexyVagrantCharacter*>         Vagrants;                                          // 0x260(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyBreederRanch* GetDefaultObj();

};

// 0x38E8 (0x3B18 - 0x230)
// Class OBF.SexyBreedingSystem
class ASexyBreedingSystem : public ASexySystem
{
public:
	uint8                                        Pad_85C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 GiverID;                                           // 0x238(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReceiverID;                                        // 0x248(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GiverSize;                                         // 0x258(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ReceiverSize;                                      // 0x260(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterData                        OffspringData;                                     // 0x268(0x37D8)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class ASexyBreedingYard*                     FocusedYard;                                       // 0x3A40(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyMonsterInventory*                 OffspringBuffer;                                   // 0x3A48(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClimaxTriggered;                                  // 0x3A50(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGallery;                                          // 0x3A51(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGalleryGiverFemaleScene;                          // 0x3A52(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGalleryFxFScene;                                  // 0x3A53(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffspringWasProduced;                             // 0x3A54(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrgasmTriggered;                                  // 0x3A55(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPenetrationTriggered;                             // 0x3A56(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostSexFinishedTriggered;                         // 0x3A57(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuickBreed;                                       // 0x3A58(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSexFinishedTriggered;                             // 0x3A59(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Incest;                                            // 0x3A5A(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCooldown;                                       // 0x3A5B(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSSFutaFemG;                                       // 0x3A5C(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_873[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SexFinishedTimer;                                  // 0x3A60(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastBreederLocation;                               // 0x3A68(0xC)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_878[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    GiverFluidMaterial;                                // 0x3A78(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReceiverFluidMaterial;                             // 0x3A80(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         PropMesh;                                          // 0x3A88(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  GiverScene;                                        // 0x3A90(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  ReceiverScene;                                     // 0x3A98(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          SessionCooldownTimer;                              // 0x3AA0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDebugStats                           GiverStats;                                        // 0x3AA8(0x38)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FDebugStats                           ReceiverStats;                                     // 0x3AE0(0x38)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyBreedingSystem* GetDefaultObj();

	void ReleaseCooldown();
	void PostSexFinished();
};

// 0x90 (0x340 - 0x2B0)
// Class OBF.SexyBreedingYard
class ASexyBreedingYard : public ASexyRanchBuilding
{
public:
	TArray<class AActor*>                        SessionNodes;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                GiverNode;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReceiverNode;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OffspringNode;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TwinOffspringNode;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              GiverProxy;                                        // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              ReceiverProxy;                                     // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              OffspringProxy;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              TwinOffspringProxy;                                // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexySemenPoolComponent*               GiverSemenPool;                                    // 0x300(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexySemenPoolComponent*               ReceiverSemenPool;                                 // 0x308(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USexySemenPoolComponent*>       SemenPoolComponents;                               // 0x310(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USexyPropComponent*                    GiverPropComponent;                                // 0x320(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyPropComponent*                    ReceiverPropComponent;                             // 0x328(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USexyPropComponent*>            PropComponents;                                    // 0x330(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyBreedingYard* GetDefaultObj();

};

// 0x50 (0x2860 - 0x2810)
// Class OBF.SexyCameraManager
class ASexyCameraManager : public APlayerCameraManager
{
public:
	class ACameraActor*                          MainMenuCamera;                                    // 0x2810(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams           ViewTargetTransition;                              // 0x2818(0x10)(Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       ShakeClass;                                        // 0x2828(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMatineeCameraShake>       ShakeLargeClass;                                   // 0x2830(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       MusicComponent;                                    // 0x2838(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            MusicBuffer;                                       // 0x2840(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          MusicTimer;                                        // 0x2848(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicStartTime;                                    // 0x2850(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C7[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyCameraManager* GetDefaultObj();

	void SwitchMusic();
};

// 0x98 (0x290 - 0x1F8)
// Class OBF.SexyCameraTether
class USexyCameraTether : public USceneComponent
{
public:
	float                                        TargetArmLength;                                   // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SocketOffset;                                      // 0x1FC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x208(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProbeSize;                                         // 0x214(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ProbeChannel;                                      // 0x218(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDoCollisionTest : 1;                              // Mask: 0x1, PropSize: 0x10x21C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_65 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_8E0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUpdateTether;                                     // 0x220(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableCameraLag : 1;                              // Mask: 0x1, PropSize: 0x10x224(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraRotationLag : 1;                      // Mask: 0x2, PropSize: 0x10x224(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCameraLagSubstepping : 1;                      // Mask: 0x4, PropSize: 0x10x224(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDrawDebugLagMarkers : 1;                          // Mask: 0x8, PropSize: 0x10x224(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6A : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_8F2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraLagSpeed;                                    // 0x228(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraRotationLagSpeed;                            // 0x22C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraLagMaxTimeStep;                              // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraLagMaxDistance;                              // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F8[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyCameraTether* GetDefaultObj();

};

// 0xC0 (0xF88 - 0xEC8)
// Class OBF.SexyCharacterComponent
class USexyCharacterComponent : public USkeletalMeshComponent
{
public:
	struct FCharacterAttachment                  AttachmentData;                                    // 0xEC8(0x80)(Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              AttachmentMaterial;                                // 0xF48(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              SlimeAttachmentMaterial;                           // 0xF50(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttached;                                         // 0xF58(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSlime;                                            // 0xF59(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_910[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASexyProceduralCharacter*              CurrentMaster;                                     // 0xF60(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkeletalParent;                                    // 0xF68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttachmentHelper                     Helper;                                            // 0xF70(0x10)(Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	class USexyCharacterAssets*                  DefaultAssets;                                     // 0xF80(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyCharacterComponent* GetDefaultObj();

};

// 0x58 (0xFE0 - 0xF88)
// Class OBF.SexyCharacterBodyComponent
class USexyCharacterBodyComponent : public USexyCharacterComponent
{
public:
	TMap<enum class EBodyPointType, struct FBodyPoint> BodyPoints;                                        // 0xF88(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         bTickIKHelpers;                                    // 0xFD8(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_920[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyCharacterBodyComponent* GetDefaultObj();

};

// 0x128 (0x10B0 - 0xF88)
// Class OBF.SexyCharacterFurComponent
class USexyCharacterFurComponent : public USexyCharacterComponent
{
public:
	uint8                                        Pad_92B[0xD8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USexyCharacterFur*                     FurData;                                           // 0x1060(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DetailModeCompressionRate;                         // 0x1068(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NearDistanceCompressionRate;                       // 0x106C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LastFrameTransform;                                // 0x1070(0x30)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ActiveShellCount;                                  // 0x10A0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateMorphs;                                     // 0x10A4(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_934[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyCharacterFurComponent* GetDefaultObj();

};

// 0x0 (0xAF0 - 0xAF0)
// Class OBF.SexyCharacterMovement
class USexyCharacterMovement : public UCharacterMovementComponent
{
public:

	static class UClass* StaticClass();
	static class USexyCharacterMovement* GetDefaultObj();

};

// 0x6DF8 (0x7028 - 0x230)
// Class OBF.SexyCharacterSystem
class ASexyCharacterSystem : public ASexySystem
{
public:
	TArray<class FString>                        DefaultPresetFiles;                                // 0x230(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class FString>                        UserPresetFiles;                                   // 0x240(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                        Pad_948[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, bool>              TraitEditFlags;                                    // 0x270(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FCharacterAppearance                  PresetCopyBuffer;                                  // 0x2C0(0x31A0)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         bCopied;                                           // 0x3460(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUserPresetFileOverflow;                           // 0x3461(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASexyBaseCharacter*                    FocusedCharacter;                                  // 0x3468(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyCreationNode*                     CreationNode;                                      // 0x3470(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyBreedingYard*                     GalleryBreedingYard;                               // 0x3478(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyMonsterInventory*                 GalleryInventory;                                  // 0x3480(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              CachedEditCharacter;                               // 0x3488(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEditorLinkMode;                                   // 0x3490(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_958[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TestVertexCycleTimer;                              // 0x3498(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PresetPoolSize;                                    // 0x34A0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VariantPoolSize;                                   // 0x34A4(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          AnimationNames;                                    // 0x34A8(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class FName>                          TraitNames;                                        // 0x34B8(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class USexyCharacterAssets*                  DefaultAssets;                                     // 0x34C8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                CommonTraits;                                      // 0x34D0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                BronzeTraits;                                      // 0x34E0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                SilverTraits;                                      // 0x34F0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                GoldTraits;                                        // 0x3500(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                BronzeAppearanceTraits;                            // 0x3510(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                SilverAppearanceTraits;                            // 0x3520(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                GoldAppearanceTraits;                              // 0x3530(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleTrait>                MechanicalTraits;                                  // 0x3540(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FPossibleStat>                 PossibleStats;                                     // 0x3550(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FCharacterData                        SpiritForm;                                        // 0x3560(0x37D8)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        FluidFallFX;                                       // 0x6D38(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, class FName>                     DickTargets;                                       // 0x6D40(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TMap<int32, class FName>                     DickTargetsMouth;                                  // 0x6D90(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         bDickTargetsSet;                                   // 0x6DE0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_975[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LastPresetName;                                    // 0x6DE4(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_978[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTagContainer>         FemaleVariants;                                    // 0x6DF0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         FutaVariants;                                      // 0x6E00(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         MaleVariants;                                      // 0x6E10(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         bAlwaysReproduce;                                  // 0x6E20(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GiverName;                                         // 0x6E28(0x10)(ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiverName;                                      // 0x6E38(0x10)(ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FDisplayedTrait> TraitDisplay;                                      // 0x6E48(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FDisplayedTrait> RankedTraitDisplay;                                // 0x6E98(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	int32                                        TraitRankPreview;                                  // 0x6EE8(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_981[0x13C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyCharacterSystem* GetDefaultObj();

};

// 0x8 (0x278 - 0x270)
// Class OBF.SexyCreationNode
class ASexyCreationNode : public ASexyWorldNode
{
public:
	class ASexyProceduralCharacter*              CharacterProxy;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyCreationNode* GetDefaultObj();

};

// 0x60 (0x350 - 0x2F0)
// Class OBF.SexyDailyToy
class ASexyDailyToy : public ASexyBlessedSexNode
{
public:
	class UCapsuleComponent*                     BoundingVolume;                                    // 0x2F0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     CollisionCapsule;                                  // 0x2F8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                StocksMesh;                                        // 0x300(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyManualCharacter*                  Toy;                                               // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastToyIndex;                                      // 0x310(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BB[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LastToyTransform;                                  // 0x320(0x30)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyDailyToy* GetDefaultObj();

	void OnSetToy();
};

// 0x10 (0x40 - 0x30)
// Class OBF.SexyData
class USexyData : public UPrimaryDataAsset
{
public:
	struct FPrimaryAssetType                     AssetType;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExposeToRegistry;                                 // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyData* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class OBF.ToySensationPreset
class UToySensationPreset : public USaveGame
{
public:
	class FName                                  PresetName;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Rule;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Strength;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Time;                                              // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UToySensationPreset* GetDefaultObj();

};

// 0x80 (0xC0 - 0x40)
// Class OBF.SexyCharacterAttachment
class USexyCharacterAttachment : public USexyData
{
public:
	struct FCharacterAttachment                  Attachment;                                        // 0x40(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyCharacterAttachment* GetDefaultObj();

};

// 0xF0 (0x130 - 0x40)
// Class OBF.SexyCharacterDecor
class USexyCharacterDecor : public USexyData
{
public:
	TArray<class UTexture2D*>                    FaceDecor;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Eyebrows;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Lips;                                              // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    FacialHair;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    Eyes;                                              // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    EyeRims;                                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    BodyDecor;                                         // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    BodyMarks;                                         // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDecorTextures>                AdditionalMaterials;                               // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      HairAttachments;                                   // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      PubicHairAttachments;                              // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      UpperClothing;                                     // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      LowerClothing;                                     // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      Underwear;                                         // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USexyCharacterAttachment*>      Footwear;                                          // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyCharacterDecor* GetDefaultObj();

};

// 0x258 (0x298 - 0x40)
// Class OBF.SexyCharacterAssets
class USexyCharacterAssets : public USexyData
{
public:
	class USkeletalMesh*                         MPCMesh;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyProceduralCharacterAnimation> MPCAnimation;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         EmblaMesh;                                         // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         AskMesh;                                           // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         CharacterProxyMesh;                                // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         BlurSheathF;                                       // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         BlurSheathM;                                       // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DildoMesh;                                         // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DildoMaterial;                                     // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    NullMaterial;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseDickMaterial;                                  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseSlimeDickMaterial;                             // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseAttachmentMaterial;                            // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseSlimeAttachmentMaterial;                       // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseFurMaterial;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseHairMaterial;                                  // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BaseClawMaterial;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FeralEyelashes;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    SlimeBody;                                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OverheadStatusMaterial;                            // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    BlurSheathMaterial;                                // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DefaultDickRelaxedAnimation;                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DefaultTailWagAnimation;                           // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DefaultWingsHoverAnimation;                        // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DefaultIdleAnimationF;                             // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DefaultIdleAnimationM;                             // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         DefaultTPoseAnimation;                             // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            NullMask;                                          // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            NullMaskFullAlpha;                                 // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            NullLighting;                                      // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            FlatNormalMap;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            WhiteColorMap;                                     // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            EmblaDetailMask;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            EmblaNormals;                                      // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            EmblaMasksA;                                       // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            EmblaMasksB;                                       // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            EmblaSkinFadeMask;                                 // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AskDetailMask;                                     // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AskNormals;                                        // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AskMasksA;                                         // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AskMasksB;                                         // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AskSkinFadeMask;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttachmentHelper>             AttachmentHelpers;                                 // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                       NullParticles;                                     // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NullSystem;                                        // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyGlobalFaceTargets*                FaceTargetsF;                                      // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyGlobalFaceTargets*                FaceTargetsM;                                      // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*          SettingsMaterialParams;                            // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        PhaseOutEffect;                                    // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            FootstepSound;                                     // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            JumpSoundF;                                        // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            JumpSoundM;                                        // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            LandSoundF;                                        // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            LandSoundM;                                        // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class USoundBase*> DialogueEmotes;                                    // 0x1F8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundBase*                            SexyMoan;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            SexyMoan2;                                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Orgasm;                                            // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            OrgasmLoop;                                        // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            GoddessAvatarSound;                                // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            MainMenuTheme;                                     // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            OverworldTheme0;                                   // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            OverworldTheme1;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            OverworldTheme2;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            SexTheme0;                                         // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyCharacterAssets* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class OBF.SexyWaterAssets
class USexyWaterAssets : public USexyData
{
public:
	class UStaticMesh*                           MeshAsset1;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           MeshAsset2;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           MeshAsset3;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           MeshAsset4;                                        // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ImpactRippleMaterial;                              // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       WaterFoam;                                         // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       WaterRipple;                                       // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     ColorCurve;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyWaterAssets* GetDefaultObj();

};

// 0x31D0 (0x3210 - 0x40)
// Class OBF.SexyCharacterScheme
class USexyCharacterScheme : public USexyData
{
public:
	class FString                                NameID;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Variant;                                           // 0x50(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterAppearance                  Scheme;                                            // 0x70(0x31A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyCharacterScheme* GetDefaultObj();

};

// 0x31E0 (0x3208 - 0x28)
// Class OBF.SexyCharacterPreset
class USexyCharacterPreset : public USaveGame
{
public:
	class FName                                  PresetName;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Variant;                                           // 0x30(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterAppearance                  Scheme;                                            // 0x50(0x31A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        bCommon;                                           // 0x31F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bUncommon;                                         // 0x31F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bRare;                                             // 0x31F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bUnique;                                           // 0x31FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bLegendary;                                        // 0x3200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A60[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyCharacterPreset* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class OBF.SexyGlobalFaceTargets
class USexyGlobalFaceTargets : public USexyData
{
public:
	TArray<struct FCharacterMorph>               FaceShapes;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyGlobalFaceTargets* GetDefaultObj();

};

// 0x5D0 (0x610 - 0x40)
// Class OBF.SexyVariantSexScene
class USexyVariantSexScene : public USexyData
{
public:
	struct FGameplayTagContainer                 Variant;                                           // 0x40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 VariantSceneTags;                                  // 0x60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GiverSize;                                         // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ReceiverSize;                                      // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyBreedingMontage>      Montage;                                           // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FBodyFluidFX> OrgasmFluidFX;                                     // 0x98(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSexToyCommandContext                 ToyPenetration;                                    // 0xE8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSexToyCommandContext                 ToyOrgasm;                                         // 0x128(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUseProp;                                          // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScalePropDynamically;                             // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A75[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimationCorrections                 Corrections;                                       // 0x170(0x4A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyVariantSexScene* GetDefaultObj();

};

// 0x35F0 (0x3630 - 0x40)
// Class OBF.SexyCharacterVariant
class USexyCharacterVariant : public USexyData
{
public:
	struct FCharacterVariant                     Variant;                                           // 0x40(0x35F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyCharacterVariant* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class OBF.SexyNameRegistry
class USexyNameRegistry : public USexyData
{
public:
	TArray<class FString>                        FemaleNames;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        MaleNames;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyNameRegistry* GetDefaultObj();

};

// 0xE0 (0x120 - 0x40)
// Class OBF.SexyRanchUpgrade
class USexyRanchUpgrade : public USexyData
{
public:
	struct FRanchUpgrade                         Upgrade;                                           // 0x40(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyRanchUpgrade* GetDefaultObj();

};

// 0xB8 (0xF8 - 0x40)
// Class OBF.SexyBreedingMontage
class USexyBreedingMontage : public USexyData
{
public:
	struct FBreedingAnimationMontage             Montage;                                           // 0x40(0xB8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyBreedingMontage* GetDefaultObj();

};

// 0x130 (0x170 - 0x40)
// Class OBF.SexyBreedingSession
class USexyBreedingSession : public USexyData
{
public:
	struct FBreedingSession                      SessionData;                                       // 0x40(0x130)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyBreedingSession* GetDefaultObj();

};

// 0x170 (0x1B0 - 0x40)
// Class OBF.SexyItem
class USexyItem : public USexyData
{
public:
	struct FGameplayTag                          ItemType;                                          // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayNamePlural;                                 // 0x60(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayType;                                       // 0x78(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x90(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0xA8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          CardColor;                                         // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CardGradientColor;                                 // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseValue;                                         // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quality;                                           // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterStats                       StatMods;                                          // 0x158(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LikedDesireMod;                                    // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DislikedDesireMod;                                 // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bListedInStore;                                    // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsable;                                           // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        ApplicationEffect;                                 // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyItem* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class OBF.SexyStore
class USexyStore : public USexyData
{
public:
	struct FStore                                Store;                                             // 0x40(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyStore* GetDefaultObj();

};

// 0x130 (0x170 - 0x40)
// Class OBF.SexyDialogueSession
class USexyDialogueSession : public USexyData
{
public:
	struct FDialogueSession                      SessionData;                                       // 0x40(0x130)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyDialogueSession* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class OBF.SexyDialogueResponse
class USexyDialogueResponse : public USexyData
{
public:
	TArray<struct FResponseDialogue>             ResponseData;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyDialogueResponse* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class OBF.SexyDialogueGroup
class USexyDialogueGroup : public USexyData
{
public:
	struct FGameplayTagContainer                 SpeakerTags;                                       // 0x40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueSession>      DefaultSession;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USexyDialogueSession>      GreetingSession;                                   // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDialogueEntry>                Entries;                                           // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyDialogueGroup* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class OBF.SexyQuest
class USexyQuest : public USexyData
{
public:
	struct FQuest                                Quest;                                             // 0x40(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyQuest* GetDefaultObj();

};

// 0xB80 (0xBC0 - 0x40)
// Class OBF.SexyBlessedSceneAsset
class USexyBlessedSceneAsset : public USexyData
{
public:
	struct FBlessedSexScene                      Scene;                                             // 0x40(0xB80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyBlessedSceneAsset* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class OBF.SexyASOGRegistry
class USexyASOGRegistry : public USexyData
{
public:
	TArray<class FName>                          People;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyASOGRegistry* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class OBF.SexyTextRegistry
class USexyTextRegistry : public USexyData
{
public:
	TArray<class FText>                          TextEntries;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyTextRegistry* GetDefaultObj();

};

// 0x3AA0 (0x3AC8 - 0x28)
// Class OBF.SexySaveGame
class USexySaveGame : public USaveGame
{
public:
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PlayerUniqueID;                                    // 0x2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                PlayerWealth;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, int32>             PlayerItems;                                       // 0x50(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FCharacterData>                PlayerMonsters;                                    // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCharacterData>                OffspringBuffer;                                   // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuest>                        PlayerQuests;                                      // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  PlayerSexPositions;                                // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PlayerConciousness;                                // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerSpirit;                                      // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterData                        PlayerSpiritForm;                                  // 0xE8(0x37D8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         PlayerObtainedVariants;                            // 0x38C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         PlayerSeenVariants;                                // 0x38D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameFlags;                                         // 0x38E0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSexyWorldState                       WorldState;                                        // 0x3900(0x128)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FBlessedInteractionStats> BlessedStats;                                      // 0x3A28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FGuid>      Vagrants;                                          // 0x3A78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexySaveGame* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class OBF.SexySavedGameActions
class USexySavedGameActions : public USaveGame
{
public:
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSavedKeyConfiguration>        GameActions;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexySavedGameActions* GetDefaultObj();

};

// 0x30 (0x2A0 - 0x270)
// Class OBF.SexyDazeShrine
class ASexyDazeShrine : public ASexyWorldNode
{
public:
	struct FGameplayTag                          ShrineTag;                                         // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x278(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x280(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       BreederSpawnNode;                                  // 0x288(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       SexSceneNode;                                      // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ReaperSpawnNode;                                   // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyDazeShrine* GetDefaultObj();

	void OnDeactivate();
	void OnActivate();
};

// 0x40 (0x270 - 0x230)
// Class OBF.SexyDazeSystem
class ASexyDazeSystem : public ASexySystem
{
public:
	TArray<class ASexyDazeShrine*>               Shrines;                                           // 0x230(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class ASexyDazeShrine*                       FocusedShrine;                                     // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResurrecting;                                     // 0x248(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B09[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ResurrectTimer;                                    // 0x250(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyManualCharacter*                  Reaper;                                            // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyBlessedSexNode*                   ReaperSexNode;                                     // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      PreviousArea;                                      // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyDazeSystem* GetDefaultObj();

	void PostResurrect();
	void PostInitiateResurrect();
};

// 0x40 (0x270 - 0x230)
// Class OBF.SexyDialogueSystem
class ASexyDialogueSystem : public ASexySystem
{
public:
	uint8                                        Pad_B0F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASexyBaseCharacter*                    CurrentSpeaker;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyDialogueSession*                  CurrentSession;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyDialogueResponse*                 CurrentGroupedResponses;                           // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          WriteTimer;                                        // 0x258(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentLineIndex;                                  // 0x260(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoAdvanceDelay;                                  // 0x264(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          DialogueTimer;                                     // 0x268(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyDialogueSystem* GetDefaultObj();

	void PostWrite();
	void Advance();
};

// 0x168 (0x3D8 - 0x270)
// Class OBF.SexyEventMarker
class ASexyEventMarker : public ASexyWorldNode
{
public:
	bool                                         bCanActivate;                                      // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggerWhenActivated;                             // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckSecondary;                                   // 0x272(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDialogueTrigger;                                  // 0x273(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B28[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASexyManualCharacter*                  DialogueSpeaker;                                   // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ActivateMessage;                                   // 0x280(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           ActivateRequirements;                              // 0x298(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           ActivateRequirementsSecondary;                     // 0x2D8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           RequiredGameFlags;                                 // 0x318(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           RequiredGameFlagsSecondary;                        // 0x358(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditions                           AlterGameFlags;                                    // 0x398(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyEventMarker* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void OnBlock(bool bFromActivation);
};

// 0x188 (0x1C8 - 0x40)
// Class OBF.SexyCharacterFur
class USexyCharacterFur : public USexyData
{
public:
	bool                                         bSingleInstance;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B56[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFurAppearance                        FurAppearance;                                     // 0x48(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFurPhysics                           FurPhysics;                                        // 0xA8(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         FurGrowthMesh;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialID;                                        // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5D[0xE4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyCharacterFur* GetDefaultObj();

};

// 0x8 (0x1B0 - 0x1A8)
// Class OBF.SexyGameInstance
class USexyGameInstance : public UGameInstance
{
public:
	bool                                         bShuttingDown;                                     // 0x1A8(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B61[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyGameInstance* GetDefaultObj();

};

// 0x68 (0x328 - 0x2C0)
// Class OBF.SexyGameMode
class ASexyGameMode : public AGameModeBase
{
public:
	TArray<class ASexySystem*>                   GameSystems;                                       // 0x2C0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CurrentGameState;                                  // 0x2D0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LastGameState;                                     // 0x2D8(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameFlags;                                         // 0x2E0(0x20)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  SexPositions;                                      // 0x300(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class APlayerStart*                          BreederHomeStart;                                  // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BreederSpirit;                                     // 0x318(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BreederConciousness;                               // 0x31C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGameRunning;                                      // 0x320(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemsBuilt;                                     // 0x321(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpiritForm;                                       // 0x322(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfiniteLust;                                     // 0x323(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfiniteSpirit;                                   // 0x324(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWinSurpriseSex;                                   // 0x325(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6B[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyGameMode* GetDefaultObj();

};

// 0x0 (0x360 - 0x360)
// Class OBF.SexyGameViewportClient
class USexyGameViewportClient : public UGameViewportClient
{
public:

	static class UClass* StaticClass();
	static class USexyGameViewportClient* GetDefaultObj();

};

// 0x40 (0x2B0 - 0x270)
// Class OBF.SexyGuruPortal
class ASexyGuruPortal : public ASexyWorldNode
{
public:
	struct FGameplayTag                          PositionTag;                                       // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Prompt;                                            // 0x278(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       GuruSpawnNode;                                     // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyManualCharacter*                  Guru;                                              // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x2A8(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B76[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyGuruPortal* GetDefaultObj();

	void OnDeactivate();
	void OnActivate();
};

// 0x58 (0x2C8 - 0x270)
// Class OBF.SexyHarvestNode
class ASexyHarvestNode : public ASexyWorldNode
{
public:
	struct FGameplayTagContainer                 HarvestSessionTags;                                // 0x270(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  HarvestProp;                                       // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                FluidContainer;                                    // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        StaticAssets;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       FillAnimation;                                     // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillContainerOnClimax;                            // 0x2B8(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FillTimer;                                         // 0x2C0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyHarvestNode* GetDefaultObj();

	void OnFillComplete();
};

// 0x60 (0x280 - 0x220)
// Class OBF.SexyItemInventory
class ASexyItemInventory : public AInfo
{
public:
	uint8                                        Pad_B86[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyItemInventory* GetDefaultObj();

};

// 0x10 (0x240 - 0x230)
// Class OBF.SexyItemSystem
class ASexyItemSystem : public ASexySystem
{
public:
	class ASexyItemInventory*                    BreederInventory;                                  // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyItemSystem* GetDefaultObj();

};

// 0x120 (0x350 - 0x230)
// Class OBF.SexyLovenseSystem
class ASexyLovenseSystem : public ASexySystem
{
public:
	class FString                                Platform;                                          // 0x230(0x10)(ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FLovenseToyData>  ConnectedToys;                                     // 0x240(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TMap<enum class ESexToyIndex, struct FSexToyCommandContext> LastToyCommand;                                    // 0x290(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TMap<enum class ESexToyIndex, class FString> CurrentToy;                                        // 0x2E0(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class FString>                        UserPresetFiles;                                   // 0x330(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	int32                                        PresetPoolSize;                                    // 0x340(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LastPresetName;                                    // 0x344(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyLovenseSystem* GetDefaultObj();

};

// 0x250 (0xE70 - 0xC20)
// Class OBF.SexyManualCharacter
class ASexyManualCharacter : public ASexyBaseCharacter
{
public:
	struct FCharacterStats                       Stats;                                             // 0xC20(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 CharacterType;                                     // 0xC60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVariantDisplayName                   DisplayName;                                       // 0xC80(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FBlessedSexScene>              BlessedSexScenes;                                  // 0xCD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBlessedSexScene>              BlessedSexScenesFuta;                              // 0xCE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         ClothedMesh;                                       // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         ClothedMesh_Futa;                                  // 0xCF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SexyMesh;                                          // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SexyMesh_Futa;                                     // 0xD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFurAForSexyMode;                               // 0xD10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFurBForSexyMode;                               // 0xD11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFurAForClothedMode;                            // 0xD12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFurBForClothedMode;                            // 0xD13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyFutaWhenBreederFemale;                        // 0xD14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingFutaScene;                                   // 0xD15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanNeverBeFuta;                                   // 0xD16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 bAnimationState;                                   // 0xD18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEligibleForDailyToy;                              // 0xD28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConditions                           DailyToyRequiredFlags;                             // 0xD30(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ToyStocksScale;                                    // 0xD70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    BreastMilkMaterial;                                // 0xD74(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    SemenMaterial;                                     // 0xDA0(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, struct FExpressionAnimations> FullBodyExpressions;                               // 0xDD0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FurMaterialA;                                      // 0xE20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FurMaterialB;                                      // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFur*                     FurAssetA;                                         // 0xE30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFur*                     FurAssetB;                                         // 0xE38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    SourceBodyMaterial;                                // 0xE40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              SexyBodyMaterial;                                  // 0xE48(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            FurComponentA;                                     // 0xE50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyCharacterFurComponent*            FurComponentB;                                     // 0xE58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyManualCharacterAnimation*         CharacterAnimation;                                // 0xE60(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyManualCharacter* GetDefaultObj();

};

// 0x10 (0x2D0 - 0x2C0)
// Class OBF.SexyManualCharacterAnimation
class USexyManualCharacterAnimation : public USexyBaseCharacterAnimation
{
public:
	class ASexyManualCharacter*                  CharacterOwner;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyManualCharacterAnimation* GetDefaultObj();

	void NotifyStartPenetration();
	void NotifyOnOrgasm();
	void NotifyAdvanceSexDialogue();
};

// 0x80 (0x2B0 - 0x230)
// Class OBF.SexyMerchantSystem
class ASexyMerchantSystem : public ASexySystem
{
public:
	uint8                                        Pad_BC3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CurrentBuyUpgrade;                                 // 0x238(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SellMonsterID;                                     // 0x240(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TradeCountBuffer;                                  // 0x250(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASexyItemInventory*                    CurrentMerchantItemInventory;                      // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class ASexyItemInventory*> ItemInventoryPool;                                 // 0x260(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyMerchantSystem* GetDefaultObj();

};

// 0xD8 (0x388 - 0x2B0)
// Class OBF.SexyMonsterBarn
class ASexyMonsterBarn : public ASexyRanchBuilding
{
public:
	class AActor*                                ActionNode;                                        // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                BreederOffspringNode;                              // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LoveNode;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyRoamerSpawnNode*                  VagrantSpawnNode;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestMilkNodeT;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestMilkNodeS;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestMilkNodeN;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestMilkNodeL;                                  // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestMilkNodeH;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestMilkNodeM;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestSemenNodeT;                                 // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestSemenNodeS;                                 // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestSemenNodeN;                                 // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestSemenNodeL;                                 // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestSemenNodeH;                                 // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      HarvestSemenNodeM;                                 // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          HousedMonsterType;                                 // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ManageActionMessage;                               // 0x338(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Capacity;                                          // 0x350(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VagrantID;                                         // 0x354(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ASexyRoamerSpawnNode*>          VagrantNodes;                                      // 0x368(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              MonsterProxy;                                      // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyVagrantCharacter*                 VagrantProxy;                                      // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyMonsterBarn* GetDefaultObj();

};

// 0x50 (0x270 - 0x220)
// Class OBF.SexyMonsterInventory
class ASexyMonsterInventory : public AInfo
{
public:
	uint8                                        Pad_BDB[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyMonsterInventory* GetDefaultObj();

};

// 0x220 (0x450 - 0x230)
// Class OBF.SexyMonsterSystem
class ASexyMonsterSystem : public ASexySystem
{
public:
	uint8                                        Pad_BE7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 MonsterID;                                         // 0x238(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 BathMonsterID;                                     // 0x248(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyBlessedSexNode*                   CurrentBlessedSexNode;                             // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyHarvestNode*                      CurrentHarvestNode;                                // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyManualCharacter*                  CurrentBlessedMonster;                             // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyMonsterBarn*                      FocusedBarn;                                       // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyMonsterInventory*                 BreederInventory;                                  // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              CurrentOtherCharacter;                             // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              Harvester;                                         // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClimaxTriggered;                                  // 0x290(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHarvestClimaxTriggered;                           // 0x291(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHarvestStimulateTriggered;                        // 0x292(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLullTriggered;                                    // 0x293(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrgasmTriggered;                                  // 0x294(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPenetrationTriggered;                             // 0x295(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostSexFinishedTriggered;                         // 0x296(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSexFinishedTriggered;                             // 0x297(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingAssistant;                                   // 0x298(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingCumBalloon;                                  // 0x299(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillComplete;                                     // 0x29A(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromResurrection;                                 // 0x29B(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLBJ;                                              // 0x29C(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBreederReceiving;                                 // 0x29D(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllDailyToys;                                     // 0x29E(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CurrentBarnAction;                                 // 0x2A0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LastBarnAction;                                    // 0x2A8(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 HarvestMonsterType;                                // 0x2B0(0x20)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class FString                                MonsterRaceName;                                   // 0x2D0(0x10)(ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          SexFinishedTimer;                                  // 0x2E0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LastBlessedMonsterTransform;                       // 0x2F0(0x30)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LastOtherTransform;                                // 0x320(0x30)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class ASexyBlessedSexNode*>           BlessedSexNodeRegistry;                            // 0x350(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  GiverHarvestScene;                                 // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  ReceiverHarvestScene;                              // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    GiverFluidMaterial;                                // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReceiverFluidMaterial;                             // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    GiverParticleMaterial;                             // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReceiverParticleMaterial;                          // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         ObtainedVariants;                                  // 0x390(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         SeenVariants;                                      // 0x3A0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TMap<struct FGuid, float>                    PregnantCharacterAlphas;                           // 0x3B0(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TMap<struct FGuid, class ASexyProceduralCharacter*> PregnantCharacters;                                // 0x400(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyMonsterSystem* GetDefaultObj();

	void PostSexFinished();
};

// 0x8 (0x238 - 0x230)
// Class OBF.SexyNameGenerator
class ASexyNameGenerator : public ASexySystem
{
public:
	class USexyNameRegistry*                     NameRegistry;                                      // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyNameGenerator* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class OBF.SexyNavArea
class USexyNavArea : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class USexyNavArea* GetDefaultObj();

};

// 0x30 (0x408 - 0x3D8)
// Class OBF.SexyNPCNode
class ASexyNPCNode : public ASexyEventMarker
{
public:
	struct FGameplayTagContainer                 NPCVariant;                                        // 0x3D8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              NPCProxy;                                          // 0x3F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetRandomScheme;                                  // 0x400(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C13[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyNPCNode* GetDefaultObj();

};

// 0xF0 (0x360 - 0x270)
// Class OBF.SexyOverworldInterface
class ASexyOverworldInterface : public ASexyWorldNode
{
public:
	class ADirectionalLight*                     SunLight;                                          // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkyLight*                             SkyLight;                                          // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APostProcessVolume*                    GlobalPostProcess;                                 // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AExponentialHeightFog*                 GlobalFog;                                         // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexySky*                              Sky;                                               // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Moon1;                                             // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWindDirectionalSource*                WindSource;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APostProcessVolume*                    CharacterEditorPostProcess;                        // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      CreatorBackground;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyDailyToy*                         DailyToy;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBreederInVolume;                                  // 0x2C0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C44[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStaticMeshActor*                      BreaksAreaVolume;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      CavernAreaVolume;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      CoveAreaVolume;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      CragAreaVolume;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      GardenAreaVolume;                                  // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      GladeAreaVolume;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      HedonAreaVolume;                                   // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      HomesteadAreaVolume;                               // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      JungleAreaVolume;                                  // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      LustwoodAreaVolume;                                // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      PasturesAreaVolume;                                // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      PeakAreaVolume;                                    // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      SandsAreaVolume;                                   // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      HeavensAreaVolume;                                 // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AStaticMeshActor*>              AreaVolumes;                                       // 0x338(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class FName                                  ZoneName;                                          // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LevelLoadedEvent;                                  // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyOverworldInterface* GetDefaultObj();

	void OnLevelReleased(class AStaticMeshActor* Area);
	void OnLevelLoaded(class AStaticMeshActor* Area);
	void OnEnterZone(class AStaticMeshActor* Area);
	class ASexyProceduralCharacter* GetBreederCharacter();
	bool GameStateIs(const struct FGameplayTag& State);
	void BindLevelEvents();
	void AreaVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x10 (0x2D0 - 0x2C0)
// Class OBF.SexyProceduralCharacterAnimation
class USexyProceduralCharacterAnimation : public USexyBaseCharacterAnimation
{
public:
	class ASexyProceduralCharacter*              CharacterOwner;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C76[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyProceduralCharacterAnimation* GetDefaultObj();

	void NotifyOnStep();
	void NotifyOnOrgasm();
	void NotifyOnLand();
	void NotifyOnJump();
	void NotifyOnClimax();
	void NotifyMoan();
	void NotifyCameraShake();
	void NotifyAdvanceSexDialogue();
};

// 0x8 (0xED0 - 0xEC8)
// Class OBF.SexyPropComponent
class USexyPropComponent : public USkeletalMeshComponent
{
public:
	uint8                                        Pad_C7D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyPropComponent* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class OBF.SexyQueryFilter_Follower
class USexyQueryFilter_Follower : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class USexyQueryFilter_Follower* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class OBF.SexyQueryFilter_Roamer
class USexyQueryFilter_Roamer : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class USexyQueryFilter_Roamer* GetDefaultObj();

};

// 0x90 (0x300 - 0x270)
// Class OBF.SexyRoamerSpawnNode
class ASexyRoamerSpawnNode : public ASexyWorldNode
{
public:
	struct FGameplayTagContainer                 VariantFilter;                                     // 0x270(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              NodeParticleComponent;                             // 0x290(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       PhaseInEffect;                                     // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          ParticleTimer;                                     // 0x2A0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasUsed;                                          // 0x2A8(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C90[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class ASexyRoamingCharacter*>           Users;                                             // 0x2B0(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyRoamerSpawnNode* GetDefaultObj();

	void PostPhaseIn();
};

// 0x88 (0x7DF0 - 0x7D68)
// Class OBF.SexyRoamingCharacter
class ASexyRoamingCharacter : public ASexyProceduralCharacter
{
public:
	class ASexyAI_Roamer*                        RoamerController;                                  // 0x7D68(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class ASexyRoamingCharacter*>           OtherRoamers;                                      // 0x7D70(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class ASexyRoamerSpawnNode*>          PotentialNodes;                                    // 0x7DC0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	bool                                         bBreederInProximity;                               // 0x7DD0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRoamerInProximity;                                // 0x7DD1(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectingMate;                                    // 0x7DD2(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTerminatingRoaming;                               // 0x7DD3(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecentlySpawned;                                  // 0x7DD4(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasJustFocused;                                   // 0x7DD5(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondsRoaming;                                    // 0x7DD8(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNavigationInvokerComponent*           NavigationInvoker;                                 // 0x7DE0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyRoamerSpawnNode*                  SourceNode;                                        // 0x7DE8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyRoamingCharacter* GetDefaultObj();

};

// 0x4080 (0x42B0 - 0x230)
// Class OBF.SexyRoamingSystem
class ASexyRoamingSystem : public ASexySystem
{
public:
	uint8                                        Pad_CAE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterData                        OffspringData;                                     // 0x248(0x37D8)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              GiverCharacter;                                    // 0x3A20(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              ReceiverCharacter;                                 // 0x3A28(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              CameraTargetCharacter;                             // 0x3A30(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyRoamingCharacter*                 CatchCharacter;                                    // 0x3A38(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyRoamingCharacter*                 CurrentRoamer;                                     // 0x3A40(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyRoamingCharacter*                 LockedFocusRoamer;                                 // 0x3A48(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyRoamingZone*                      CurrentZone;                                       // 0x3A50(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAF[0x700];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bBreederCame;                                      // 0x4158(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClimaxTriggered;                                  // 0x4159(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatesSameSize;                                    // 0x415A(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffspringWasProduced;                             // 0x415B(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrgasmTriggered;                                  // 0x415C(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPenetrationTriggered;                             // 0x415D(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostSexFinishedTriggered;                         // 0x415E(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSexFinishedTriggered;                             // 0x415F(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockSurprise;                                     // 0x4160(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGaveFavoriteItem;                                 // 0x4161(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotEnoughRoom;                                    // 0x4162(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCatching;                                         // 0x4163(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWillDaze;                                         // 0x4164(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LustResult;                                        // 0x4168(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FertilityResult;                                   // 0x416C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AptitudeResult;                                    // 0x4170(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CurrentAction;                                     // 0x4174(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreederClimaxBuffer;                               // 0x417C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          SexFinishedTimer;                                  // 0x4180(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          SurpriseCooldownTimer;                             // 0x4188(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LastBreederTransform;                              // 0x4190(0x30)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class ASexyRoamingZone*>              Zones;                                             // 0x41C0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    GiverFluidMaterial;                                // 0x41D0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReceiverFluidMaterial;                             // 0x41D8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  GiverScene;                                        // 0x41E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  ReceiverScene;                                     // 0x41E8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class ASexyRoamingCharacter*>           PotentialTargetRoamers;                            // 0x41F0(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FDebugStats                           GiverStats;                                        // 0x4240(0x38)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FDebugStats                           ReceiverStats;                                     // 0x4278(0x38)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyRoamingSystem* GetDefaultObj();

	void OnSurpriseCooldownExpire();
};

// 0xC0 (0x330 - 0x270)
// Class OBF.SexyRoamingZone
class ASexyRoamingZone : public ASexyWorldNode
{
public:
	TArray<struct FGameplayTagContainer>         Inhabitants;                                       // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      ZoneVolume;                                        // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASexyRoamingCharacter*>         RoamerProxies;                                     // 0x288(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	int32                                        RoamerCount;                                       // 0x298(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RoamerOffset;                                      // 0x29C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FRoamingNodes>    RoamingNodes;                                      // 0x2A0(0x50)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class UAnimSequence*                         StatuePulseAnimation;                              // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         StatueOffAnimation;                                // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              StatueParticleComponent;                           // 0x300(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointLightComponent*                  StatueLightComponentA;                             // 0x308(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPointLightComponent*                  StatueLightComponentB;                             // 0x310(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                StatueComponent;                                   // 0x318(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       AudioComponent;                                    // 0x320(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     BoundingVolume;                                    // 0x328(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyRoamingZone* GetDefaultObj();

	void VolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// 0x37F8 (0x3A28 - 0x230)
// Class OBF.SexySaveSystem
class ASexySaveSystem : public ASexySystem
{
public:
	int32                                        SlotCount;                                         // 0x230(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SaveSlotBuffer;                                    // 0x234(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSaveSlotBuffer;                                // 0x238(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SaveVersion;                                       // 0x23C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexySaveGame*                         LoadedSave;                                        // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewGame;                                          // 0x248(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD8[0x37DF];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexySaveSystem* GetDefaultObj();

};

// 0x50 (0x530 - 0x4E0)
// Class OBF.SexySemenPoolComponent
class USexySemenPoolComponent : public UStaticMeshComponent
{
public:
	float                                        EnlargeRate;                                       // 0x4E0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnlargeSemenPool;                                 // 0x4E4(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDB[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x4F0(0x30)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDC[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexySemenPoolComponent* GetDefaultObj();

};

// 0x168 (0x398 - 0x230)
// Class OBF.SexySettingsSystem
class ASexySettingsSystem : public ASexySystem
{
public:
	int32                                        WildSex;                                           // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Futanari;                                          // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExoticFemales;                                     // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Pregnancy;                                         // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Incest;                                            // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MixOffspring;                                      // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CumInflation;                                      // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickBulge;                                         // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Physics;                                           // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThemedFluids;                                      // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VagrantPregnancy;                                  // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InvertMouse;                                       // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CameraShake;                                       // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputMethod;                                       // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SystemLookSpeed;                                   // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SystemZoomSpeed;                                   // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SystemPanSpeed;                                    // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSensitivity;                                  // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyConfiguration>             GameActions;                                       // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE4[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GraphicsQuality;                                   // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WindowMode;                                        // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Resolution;                                        // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DickSheathMode;                                    // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VSync;                                             // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LovenseMode;                                       // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToyStrengthMax;                                    // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MobileDeviceIP;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MobileDevicePort;                                  // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           MasterSoundClass;                                  // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           MusicSoundClass;                                   // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           EffectsSoundClass;                                 // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           VocalSoundClass;                                   // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           DaySFXSoundClass;                                  // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundClass*                           NightSFXSoundClass;                                // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundMix*                             MasterSoundMix;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MasterVolume;                                      // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicVolume;                                       // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectsVolume;                                     // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VocalVolume;                                       // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SaveOnSleep;                                       // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AutoplayDialogue;                                  // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Language;                                          // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastNightSFXVolume;                                // 0x364(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastDaySFXVolume;                                  // 0x368(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentKeybind;                                    // 0x36C(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Creator;                                           // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEE[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexySettingsSystem* GetDefaultObj();

};

// 0xD0 (0x340 - 0x270)
// Class OBF.SexySky
class ASexySky : public ASexyWorldNode
{
public:
	class UStaticMeshComponent*                  SphereMesh;                                        // 0x270(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              SkyMaterial;                                       // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SunHeight;                                         // 0x280(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloudSpeed;                                        // 0x284(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SunRotationCurve;                                  // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SunBrightnessCurve;                                // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           AmbientLightCurve;                                 // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     AmbientColorCurve;                                 // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     HorizonColorCurve;                                 // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     ZenithColorCurve;                                  // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     CloudColorCurve;                                   // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     OverallColorCurve;                                 // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     SunColorCurve;                                     // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           FogDensityCurve;                                   // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     FogColorCurve;                                     // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                          Moon1PositionCurve;                                // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StarsBrightnessCurve;                              // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DaySoundCurve;                                     // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           NightSoundCurve;                                   // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SunRotationTarget;                                 // 0x300(0xC)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              SunCurrentRotation;                                // 0x30C(0xC)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Moon1LocationTarget;                               // 0x318(0xC)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Moon1CurrentLocation;                              // 0x324(0xC)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CurrentSunColor;                                   // 0x330(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexySky* GetDefaultObj();

};

// 0x20 (0x290 - 0x270)
// Class OBF.SexyTaskBoard
class ASexyTaskBoard : public ASexyWorldNode
{
public:
	bool                                         bActive;                                           // 0x270(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  MeshComponent;                                     // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     CollisionCapsule;                                  // 0x280(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x288(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyTaskBoard* GetDefaultObj();

};

// 0x10 (0x2D0 - 0x2C0)
// Class OBF.SexyTentacleAnimation
class USexyTentacleAnimation : public USexyBaseCharacterAnimation
{
public:
	class ASexyTentacleNode*                     TentacleNode;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AnimationPhase;                                    // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USexyTentacleAnimation* GetDefaultObj();

	void NotifyState(int32 State);
};

// 0xF0 (0x360 - 0x270)
// Class OBF.SexyTentacleNode
class ASexyTentacleNode : public ASexyWorldNode
{
public:
	class UCapsuleComponent*                     BoundingVolume;                                    // 0x270(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     ProximityVolume;                                   // 0x278(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     OuterProximityVolume;                              // 0x280(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                TentacleMesh;                                      // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyTentacleAnimation*                TentacleAnimation;                                 // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         ClimaxAnimation;                                   // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         PenetrationAnimation;                              // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyProceduralCharacter*              TargetCharacter;                                   // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockProximity;                                    // 0x2B0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x2B1(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmerging;                                         // 0x2B2(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBusy;                                             // 0x2B3(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWillDaze;                                         // 0x2B4(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D48[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ActiveTimer;                                       // 0x2B8(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          ClimaxTimer;                                       // 0x2C0(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveTimeMin;                                     // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveTimeMax;                                     // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmergeChance;                                      // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SexChance;                                         // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyFluidMaterial                    SemenMaterial;                                     // 0x2D8(0x2C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClimaxTriggered;                                  // 0x304(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrgasmTriggered;                                  // 0x305(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPenetrationTriggered;                             // 0x306(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostSexFinishedTriggered;                         // 0x307(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSexFinishedTriggered;                             // 0x308(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USexyVariantSexScene*                  TentacleScene;                                     // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyVariantSexScene*                  ReceiverScene;                                     // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReceiverFluidMaterial;                             // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    TentacleFluidMaterial;                             // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LastTargetCharacterTransform;                      // 0x330(0x30)(Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyTentacleNode* GetDefaultObj();

	void Submerge();
	void ResetCooldown();
	void ProximityEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ProximityBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OuterProximityBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnSexFinished();
	void OnClimax();
};

// 0x60 (0x350 - 0x2F0)
// Class OBF.SexyToySensationNode
class ASexyToySensationNode : public ASexyBlessedSexNode
{
public:
	struct FSexToyCommandContext                 Command;                                           // 0x2F0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x330(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                     ProximityCapsule;                                  // 0x338(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          CooldownTimer;                                     // 0x340(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCooldown;                                       // 0x348(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSceneOnCooldown;                                  // 0x349(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyToySensationNode* GetDefaultObj();

	void TriggerCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ResetCooldown();
	void ProximityCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x38 (0x2A8 - 0x270)
// Class OBF.SexyTravelShrine
class ASexyTravelShrine : public ASexyWorldNode
{
public:
	struct FGameplayTag                          ShrineTag;                                         // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShrineName;                                        // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x288(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       BreederSpawnNode;                                  // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       WardenSpawnNode;                                   // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyTravelShrine* GetDefaultObj();

	void OnDeactivate();
	void OnActivate();
};

// 0x40 (0x270 - 0x230)
// Class OBF.SexyTravelSystem
class ASexyTravelSystem : public ASexySystem
{
public:
	TArray<class ASexyTravelShrine*>             Shrines;                                           // 0x230(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class ASexyTravelShrine*                     FocusedShrine;                                     // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraversing;                                       // 0x248(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TravelTimer;                                       // 0x250(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyManualCharacter*                  PortalWarden;                                      // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyBlessedSexNode*                   WardenSexNode;                                     // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      PreviousArea;                                      // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyTravelSystem* GetDefaultObj();

	void PostTravel();
	void PostInitiateTravel();
};

// 0x140 (0x170 - 0x30)
// Class OBF.SexyLoadingScreenStyle
class USexyLoadingScreenStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSexyUILoadingScreen                  Style;                                             // 0x30(0x140)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyLoadingScreenStyle* GetDefaultObj();

};

// 0x29F8 (0x2A28 - 0x30)
// Class OBF.SexyCoreStyle
class USexyCoreStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSexyUICore                           Style;                                             // 0x30(0x29F8)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyCoreStyle* GetDefaultObj();

};

// 0x378 (0x3A8 - 0x30)
// Class OBF.SexyFontStyle
class USexyFontStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSexyUIFonts                          Style;                                             // 0x30(0x378)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyFontStyle* GetDefaultObj();

};

// 0x3308 (0x3338 - 0x30)
// Class OBF.SexyShapeStyle
class USexyShapeStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSexyUIShapes                         Style;                                             // 0x30(0x3308)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyShapeStyle* GetDefaultObj();

};

// 0x2588 (0x25B8 - 0x30)
// Class OBF.SexyIconStyle
class USexyIconStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSexyUIIcons                          Style;                                             // 0x30(0x2588)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyIconStyle* GetDefaultObj();

};

// 0x1290 (0x12C0 - 0x30)
// Class OBF.SexyFullscreenMenuStyle
class USexyFullscreenMenuStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSexyUIFullscreenMenu                 Style;                                             // 0x30(0x1290)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USexyFullscreenMenuStyle* GetDefaultObj();

};

// 0x270 (0x580 - 0x310)
// Class OBF.SexyUI
class ASexyUI : public AHUD
{
public:
	uint8                                        Pad_DEA[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          MenuFadeTimer;                                     // 0x368(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          MenuAddTimer;                                      // 0x370(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          MenuRemoveTimer;                                   // 0x378(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEB[0x1B0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DebugMode;                                         // 0x530(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ZoneMessageBuffer;                                 // 0x538(0x18)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	struct FTimerHandle                          ItemMessageTimer;                                  // 0x550(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          GlobalMessageTimer;                                // 0x558(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          GlobalWriteTimer;                                  // 0x560(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ValueSliderMaterial;                               // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              SaturationSliderMaterial;                          // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USexyASOGRegistry*                     ASOGRegistry;                                      // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyUI* GetDefaultObj();

	void WriteZoneMessage();
	void WriteGlobalMessage();
	void PushMenu();
	void PostFadeMenu();
	void PopMenu();
	void ClearItemMessage();
	void ClearGlobalMessage();
};

// 0x10 (0x7E00 - 0x7DF0)
// Class OBF.SexyVagrantCharacter
class ASexyVagrantCharacter : public ASexyRoamingCharacter
{
public:
	bool                                         bActiveVagrant;                                    // 0x7DF0(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ASexyMonsterBarn*                      HomeBarn;                                          // 0x7DF8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyVagrantCharacter* GetDefaultObj();

};

// 0x68 (0x2D8 - 0x270)
// Class OBF.SexyWater
class ASexyWater : public ASexyWorldNode
{
public:
	class UStaticMeshComponent*                  WaterVolume;                                       // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  WaterFog;                                          // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  WaterSurface;                                      // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  WaterSurfaceFlip;                                  // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZoneOptimized;                                    // 0x290(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowIdleEffect;                                  // 0x291(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpeedScalar;                                       // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DazeSeconds;                                       // 0x298(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DazeBuffer;                                        // 0x29C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       RippleFX;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       FoamFX;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              WaterMaterial;                                     // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              WaterMaterialOpaque;                               // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              WaterMaterialFog;                                  // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              RippleMaterial;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                     ColorCurve;                                        // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASexyWater* GetDefaultObj();

	void OnWaterVolumeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x220 (0x450 - 0x230)
// Class OBF.SexyWorldSystem
class ASexyWorldSystem : public ASexySystem
{
public:
	struct FSexyWorldState                       CurrentWorldState;                                 // 0x230(0x128)(Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class AStaticMeshActor*                      CurrentArea;                                       // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyOverworldInterface*               OverworldInterface;                                // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewDayRoughStart;                                 // 0x368(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlessedAreFutas;                                  // 0x369(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E04[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                WorldName;                                         // 0x370(0x10)(ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                GameWorld;                                         // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          SleepTimer;                                        // 0x388(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          DayTimer;                                          // 0x390(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          PostNewDayTimer;                                   // 0x398(0x8)(Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASexyManualCharacter*>          ManualCharacters;                                  // 0x3A0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class ASexyManualCharacter*>          PossibleDailyToys;                                 // 0x3B0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class ASexyGuruPortal*>               GuruPortals;                                       // 0x3C0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class ASexyProceduralCharacter*>      NPCReferences;                                     // 0x3D0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class ASexyWorldNode*>                WorldNodes;                                        // 0x3E0(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	class USexyTextRegistry*                     BreedingTaskDescriptions;                          // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagContainer>         PossibleVariants;                                  // 0x3F8(0x10)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	int32                                        SleepMinuteOffset;                                 // 0x408(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StoredSeconds;                                     // 0x40C(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StoredMinute;                                      // 0x410(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StoredHour;                                        // 0x414(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 TaskMonsterID;                                     // 0x418(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASexyManualCharacter*                  PrideTelepathy;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CharacterEditorBackground;                         // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 EssenceMonsterID;                                  // 0x438(0x10)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E08[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASexyWorldSystem* GetDefaultObj();

	void TickDay();
	void StartNewDay();
	void PostNewDay();
};

}


