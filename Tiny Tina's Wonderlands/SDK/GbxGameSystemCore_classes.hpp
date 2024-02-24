#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.StanceDataProvider
class UStanceDataProvider : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UStanceDataProvider* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class GbxGameSystemCore.StanceData
class UStanceData : public UStanceDataProvider
{
public:
	struct FStanceFloatValue                     MaxSpeed;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FStanceFloatValue                     MaxRotation;                                       // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FStanceFloatValue                     MaxAllowedAimOffset;                               // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseMaxAllowedAimOffset;                           // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_504[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStanceFloatValue                     AimRotationRate;                                   // 0x4C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseAimRotationRate;                               // 0x54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_505[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStanceFloatValue                     MaxIdleRotation;                                   // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseMaxIdleRotation;                               // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_508[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceData*                           StanceDataToShowAnimSystem;                        // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSlowdownSpeed;                            // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStanceFloatValue                     SlowdownSpeed;                                     // 0x74(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideMaxAcceleration;                          // 0x7C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAcceleration;                                   // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockDodging;                                      // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLockTurns;                                        // 0x85(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLockFootIK;                                       // 0x86(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLockHandIK;                                       // 0x87(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bThisStanceAllowsFidgetAnims;                      // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_513[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTimeBeforeFirstFidgetAnim;                     // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPhysicalAnimationProfileAsset*        PhysicalAnimation;                                 // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UHitReactionLayer>         HitReactionLayer;                                  // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHitReactionData*                      HitReactionData;                                   // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UStanceData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.GbxAnimTable
class UGbxAnimTable : public UGbxDataAsset
{
public:
	struct FGbxTriggerProperty                   TriggerAutofill;                                   // 0x30(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_52B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DataTable;                                         // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bScaleRateByMeshScale;                             // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_52C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAnimTable* GetDefaultObj();

	void Autofill();
};

// 0x38 (0x60 - 0x28)
// Class GbxGameSystemCore.GbxAction
class UGbxAction : public UObject
{
public:
	uint8                                        Pad_5B8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanUseCDO;                                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BA[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionSlotName;                                    // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionPriority                ActionPriority;                                    // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UScriptStruct*                         InstanceDataType;                                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAction* GetDefaultObj();

	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnServerBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBegin(class AActor* Actor);
	bool K2_GetVectorRegisterValue(class FName InName, struct FVector* OutVector);
	float K2_GetTimeRemaining();
	bool K2_GetObjectRegisterValue(class FName InName, class UObject** OutObject);
	bool K2_GetNameRegisterValue(class FName InName, class FName* OutName);
	float K2_GetMaxCurrentTime();
	bool K2_GetIntRegisterValue(class FName InName, int32* OutInt);
	bool K2_GetFloatRegisterValue(class FName InName, float* OutFloat);
	float K2_GetCurrentTime();
	float K2_GetCurrentNormalizedTime();
	class AActor* K2_GetActor();
};

// 0x58 (0xB8 - 0x60)
// Class GbxGameSystemCore.GbxAction_SimpleAnim
class UGbxAction_SimpleAnim : public UGbxAction
{
public:
	uint8                                        Pad_62F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bStopAI;                                           // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbortAI;                                          // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopMovement;                                     // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableHitReactions;                              // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhysNoneWithRootMotion;                        // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopLook;                                         // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopAimRotation;                                  // 0x6E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopHeadLook;                                     // 0x6F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockHeadLook;                                     // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableAvoidance;                                 // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickAndRefreshBones;                              // 0x72(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableCollision;                                 // 0x73(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ECollisionChannel>         DisableCollisionChannels;                          // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableLoopHelper;                                 // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInterruptSameSlotAnims;                        // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetDynamicsOnBegin;                             // 0x8A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsePhysicalAnimationProfile;                      // 0x8B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_63E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalAnimationProfileAsset*        PhysicalAnimationProfile;                          // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestorePreviousPhysicalAnimationProfileOnEnd;     // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseNewBoneSetFilter;                              // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_644[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxBoneSet*                           NewBoneSetFilter;                                  // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestorePreviousBoneSetFilterProfileOnEnd;         // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetBoneSetFilter;                               // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_648[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultInterruptBlendOutTime;                      // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReleaseResourceFlagsOnAnimEnd;                    // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEndActionOnBlendOut;                              // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_64B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_SimpleAnim* GetDefaultObj();

	void OnAnimEnd(class AActor* Actor);
	void K2_SetTickAndRefreshBones(bool bLockResource);
	void K2_SetPhysNoneWithRootMotion(bool bEnable);
	void K2_SetMovement(bool bDisable);
	void K2_SetLook(bool bDisable);
	void K2_SetHitReactions(bool bDisable);
	void K2_SetHeadLookLocked(bool bLock);
	void K2_SetHeadLook(bool bDisable);
	void K2_SetCollision(bool bEnable);
	void K2_SetAvoidance(bool bDisable);
	void K2_SetAIThinking(bool bDisable);
	void K2_SetAimRotation(bool bDisable);
};

// 0x8 (0x130 - 0x128)
// Class GbxGameSystemCore.GbxAISystemBase
class UGbxAISystemBase : public UAISystem
{
public:
	class UGbxQueryManager*                      GbxQueryManager;                                   // 0x128(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAISystemBase* GetDefaultObj();

};

// 0xF8 (0x7E8 - 0x6F0)
// Class GbxGameSystemCore.PreviewComponent
class UPreviewComponent : public UPrimitiveComponent
{
public:
	bool                                         bSpawnInPIE;                                       // 0x6F0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreviewEnabled;                                   // 0x6F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_66F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    PreviewActor;                                      // 0x6F8(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPreviewState                         PreviewState;                                      // 0x700(0xD8)(Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bEnabled;                                          // 0x7D8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_672[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class USkinnedMeshComponent>  SkinnedMeshComponent;                              // 0x7DC(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_673[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPreviewComponent* GetDefaultObj();

	void OnBlueprintCompiled(class Ublueprint* BP);
};

// 0xF0 (0x1A8 - 0xB8)
// Class GbxGameSystemCore.GbxAction_Anim
class UGbxAction_Anim : public UGbxAction_SimpleAnim
{
public:
	struct FAnimMeshList                         DefaultAnims;                                      // 0xB8(0x78)(Edit, NativeAccessSpecifierPublic)
	enum class EGbxActionEndCondition            DefaultEndCondition;                               // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimationSlot;                                     // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPushBlendInTime;                                  // 0x144(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultBlendOutTime;                               // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPushBlendOutTime;                                 // 0x14C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlayRate;                                          // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScalePlayrateWithCharacterScale;                  // 0x154(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6CC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SourceCameraAlpha;                                 // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MontageCameraAlpha;                                // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableFootIk;                                    // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBody1stControlsDuration;                          // 0x161(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlay1stPersonAnimationsOnRemotePlayers;           // 0x162(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6D5[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimSlot3rd;                                       // 0x168(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnimSlot1st;                                       // 0x170(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAnimSlot3rdValue;                              // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasAnimSlot1stValue;                              // 0x179(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGodMode;                                          // 0x17A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDemigodMode;                                      // 0x17B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockCrouching;                                   // 0x17C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockMantling;                                    // 0x17D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockLadders;                                     // 0x17E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableScaledRootMotion;                           // 0x17F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainRootVelocity;                             // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDuration;                                 // 0x181(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideDuration;                                  // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCount;                                    // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverrideCount;                                     // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridePlayRate;                                 // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverridePlayRate;                                  // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BlendSpaceXRegisterName;                           // 0x198(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BlendSpaceYRegisterName;                           // 0x1A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAction_Anim* GetDefaultObj();

	void K2_SetMantlingBlocked(bool bBlocked);
	void K2_SetLaddersBlocked(bool bBlocked);
	void K2_SetGodMode(bool bEnable);
	void K2_SetFootIK(bool bDisable);
	void K2_SetDemigodMode(bool bEnable);
	void K2_SetCrouchBlocked(bool bBlocked);
	void K2_Resume();
	void K2_RepProceedToNextSection();
	void K2_RepJumpToNextSection();
	void K2_ProceedToNextSection();
	void K2_Pause();
	void K2_JumpToNextSection();
};

// 0x40 (0x1B8 - 0x178)
// Class GbxGameSystemCore.TeamComponent
class UTeamComponent : public UActorComponent
{
public:
	uint8                                        Pad_76A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTeam*                                 Team;                                              // 0x180(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTeam*                                 TeamDefault;                                       // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSetTeamCollision;                                 // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIgnoreCollisionWithTeam;                          // 0x1A9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInheritSourceTeamFromInstigator;                  // 0x1AA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_773[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTeamComponent*                        SourceTeamComponent;                               // 0x1B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTeamComponent* GetDefaultObj();

	void SetTeamToDefault();
	void SetTeamCollision(bool bOn);
	void SetTeam(class UTeam* NewTeam);
	void SetSourceTeamComponent(class UTeamComponent* NewSourceTeamComponent);
	void SetCollidesWithTeam(bool bCollidesWithTeam);
	void OnRep_Team(class UTeam* OldTeam);
	void OnRep_bIgnoreCollisionWithTeam();
	bool IsNeutral(class AActor* Actor);
	bool IsHostile(class AActor* Actor);
	bool IsFriendly(class AActor* Actor);
	void InitializeTeam(class UTeam* NewTeam);
	enum class ETeamCollisionChannel GetTeamCollisionChannel();
	enum class ETeamAttitude GetTeamAttitudeTowardsTeam(class UTeam* OtherTeam);
	enum class ETeamAttitude GetTeamAttitudeTowardsActor(class AActor* Actor);
};

// 0x500 (0xDB0 - 0x8B0)
// Class GbxGameSystemCore.GbxCharacter
class AGbxCharacter : public ACharacter
{
public:
	uint8                                        Pad_8BE[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCharacterMovementComponent*        GbxCharacterMovement;                              // 0x900(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTargetableComponent*                  TargetableComponent;                               // 0x908(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDamageComponent*                      DamageComponent;                                   // 0x910(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDamageCauserComponent*                DamageCauserComponent;                             // 0x918(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxActionComponent*                   GbxAction;                                         // 0x920(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTagContainerComponent*        GameplayTagContainerComponent;                     // 0x928(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicPhysicalAnimationComponent*    DynamicPhysicalAnimationComponent;                 // 0x930(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTargetingComponent*                   TargetingComponent;                                // 0x938(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxPerceptionComponent*               PerceptionComponent;                               // 0x940(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFirstPersonComponent*                 FirstPersonComponent;                              // 0x948(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8CB[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULandingData*                          LandingData;                                       // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImpactData*                           JumpedImpact;                                      // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPlayJumpAndLandImpactsOnAllFeet;                  // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8CE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           FootstepImpact;                                    // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImpactData*                           GenericHandImpact;                                 // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImpactData*                           LadderHandImpact;                                  // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          FootstepSockets;                                   // 0x990(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          HandAccessoryTags;                                 // 0x9A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  LandingDataTriggeredDelegate;                      // 0x9B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class AGbxPlayerController*                  OwnerPlayerController;                             // 0x9C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                         OwnerAIController;                                 // 0x9C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGbxCharacter*                         PlayerMaster;                                      // 0x9D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AGbxCharacter*>                 Pets;                                              // 0x9D8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FMassSelection                        CharacterMass;                                     // 0x9E8(0x18)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSpawnCostSelection                   SpawnCostSelection;                                // 0xA00(0x18)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UGbxSkeletalMeshComponent*             GbxMesh;                                           // 0xA18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOrientEyeHeight;                                  // 0xA20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8D9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ViewSocket;                                        // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       ViewSocketComponent;                               // 0xA30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8DC[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedPawnAttachState            ReplicatedPawnAttachState;                         // 0xAE8(0x10)(Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FReplicatedPawnAttachState            PawnAttachState;                                   // 0xAF8(0x10)(Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8E0[0xAC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseAimHeight;                                     // 0xBB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomBaseAimHeight;                           // 0xBB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimHeightFromGround;                               // 0xBBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchedAimHeight;                                 // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomCrouchedAimHeight;                       // 0xBC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimEyeHeightPct;                                   // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AimSocket;                                         // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AimSocketComponent;                                // 0xBD8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFacingController                     FacingController;                                  // 0xBE8(0x110)(Net, Transient, NativeAccessSpecifierPublic)
	uint8                                        ClientTurnDelta;                                   // 0xCF8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        GbxInputComponentClass;                            // 0xD00(0x18)(Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          DefaultSchemas;                                    // 0xD18(0x10)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)
	class FName                                  DefaultContextName;                                // 0xD28(0x8)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFoleyAccessoryComponent*              GestaltFoleyAccessory;                             // 0xD30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFoleyMainComponent*                   CachedFoleyMainComponent;                          // 0xD38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTasksComponent*               GameplayTasksComponent;                            // 0xD40(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevelSequencePlayer*                  LevelSequencePlayerController;                     // 0xD48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSavedCollision                       LevelSequenceCollisionState;                       // 0xD50(0x20)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UGbxBoneSet*                           AnimGraphBoneSetFilter;                            // 0xD70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAnimGraphBoneSet>             ActiveAnimGraphBoneSetFilterList;                  // 0xD78(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UGbxBoneSet*                           SmartObjectBoneSetFilter;                          // 0xD88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxBoneSet*                           DefaultBoneSetFilter;                              // 0xD90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxBoneSet*                           ActionBoneSetFilter;                               // 0xD98(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPauseAIWhileFalling;                              // 0xDA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F8[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxCharacter* GetDefaultObj();

	void SetTeam(class UTeam* Team);
	void SetPlayerMaster(class AGbxCharacter* NewPlayerMaster);
	void SetCharacterUIName(class UGbxUIName* NewCharacterUIName);
	void SetCharacterNameFromString(const class FString& NewCharacterName);
	void SetCharacterName(class FText& NewCharacterName);
	void RotateCharacterTo(const struct FRotator& TargetRotation, float Duration, enum class EEasingFunc Easing);
	void ReceiveOwnerPlayerControllerChanged(class AGbxPlayerController* NewPlayerControllerOwner);
	void OnRep_ReplicatedPawnAttachState();
	void OnLandingDataTriggered(const struct FLandingInfo& LandingInfo, int32 Index);
	void NetMulticast_TriggerHitReactionSound(class UCharacterSoundTag* Tag);
	void NetMulticast_PlayLanded(struct FHitResult& Hit, float ImpactSpeed, bool bLandFromJump, class ULandingData* LandingDataOverride);
	void NetMulticast_PlayJumped();
	bool IsZoomed();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	class UGbxPerceptionComponent* GetPerceptionComponent();
	enum class EPawnAttachStatus GetPawnAttachStatus();
	class UPawnAttachSlotComponent* GetPawnAttachComponent();
	class AActor* GetPawnAttachActor();
	struct FVector GetLookAtLocation(float* OutWeight);
	float GetLookAt(struct FVector* HeadLocation, struct FVector* EyeLocation, float* HeadWeight);
	class USkeletalMeshComponent* GetFirstPersonMesh();
	class UFirstPersonComponent* GetFirstPersonComponent();
	class UBlackboardComponent* GetBlackboardComponent();
	class UBlackboardData* GetBlackboardAsset();
	void GetAvailableSocketNames(TArray<class FName>* Array);
	struct FVector GetAimVectorStartLocation();
	struct FRotator GetAimOffset();
	class UFirstPersonComponent* FindFirstPersonComponent();
	void DetachCharacter(enum class EDetachmentRule LocationRule);
	void ClientRotateCharacterTo(const struct FRotator& TargetRotation, float Duration, enum class EEasingFunc Easing);
	void CauseEveryoneToForgetMe();
	void AttachCharacterToComponent(class USceneComponent* Parent, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void AttachCharacterToActor(class AActor* ParentActor, class FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
};

// 0x60 (0x1D8 - 0x178)
// Class GbxGameSystemCore.BalanceStateComponent
class UBalanceStateComponent : public UActorComponent
{
public:
	uint8                                        Pad_933[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   BalanceTableRowHandle;                             // 0x180(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InheritedBalanceTableRowHandle;                    // 0x190(0x10)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_937[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GameStage;                                         // 0x1A4(0x4)(Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ExperienceLevel;                                   // 0x1A8(0x4)(Edit, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_93A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnLevelChanged;                                    // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_93B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoRefreshInheritedBalanceWhenSourceChangesLevel; // 0x1D0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBalanceStateComponent* GetDefaultObj();

	void SetGameStage(int32 NewGameStage);
	void SetExperienceLevel(int32 NewExperienceLevel);
	void OnRep_ExperienceLevel(int32 OldExperienceLevel);
	void OnInheritedBalanceSourceLevelChanged(class UBalanceStateComponent* InheritedBalanceStateSource, int32 OldExperienceLevel, int32 NewExperienceLevel);
	int32 GetGameStage();
	int32 GetExperienceLevel();
	struct FDataTableRowHandle GetBalanceTableRow();
};

// 0x20 (0x320 - 0x300)
// Class GbxGameSystemCore.GbxChildActorComponent
class UGbxChildActorComponent : public UChildActorComponent
{
public:
	uint8                                        bAutoSpawnActor : 1;                               // Mask: 0x1, PropSize: 0x10x300(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoDestroyActor : 1;                             // Mask: 0x2, PropSize: 0x10x300(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDestroyExistingChildActorOnSpawn : 1;             // Mask: 0x4, PropSize: 0x10x300(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDeferChildActorClassUpdate : 1;                   // Mask: 0x8, PropSize: 0x10x300(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bClearChildActorReferenceToMeWhenChildActorIsDetached : 1; // Mask: 0x10, PropSize: 0x10x300(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableCollisionWithOwner : 1;                    // Mask: 0x20, PropSize: 0x10x300(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_47 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_954[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnChildActorSpawned;                               // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_958[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxChildActorComponent* GetDefaultObj();

	void SpawnChildActor();
	void DespawnChildActor();
};

// 0x8 (0x40 - 0x38)
// Class GbxGameSystemCore.AnimNotify_PawnAttachSlotTransition
class UAnimNotify_PawnAttachSlotTransition : public UAnimNotify
{
public:
	uint8                                        bTriggerOnFirstPersonMesh : 1;                     // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDetach : 1;                                       // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAttach : 1;                                       // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_968[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_PawnAttachSlotTransition* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.AttributeEffectMutatorData
class UAttributeEffectMutatorData : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UAttributeEffectMutatorData* GetDefaultObj();

};

// 0xF8 (0x538 - 0x440)
// Class GbxGameSystemCore.GbxAnimInstance
class UGbxAnimInstance : public UAnimInstance
{
public:
	class UGbxSkeletalMeshComponent*             GbxSkeletalMeshComponent;                          // 0x440(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UGbxAnimStateMachineDefinition*> AnimStateMachineDefinitions;                       // 0x448(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FRuntimeStateMachineData>      RuntimeStateMachines;                              // 0x458(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class UGbxAnimTable*, struct FGbxAnimTableMapItem> AnimTableMap;                                      // 0x468(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_986[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxStateManagerRuntime               ManagerRuntime;                                    // 0x4E0(0x50)(NativeAccessSpecifierPrivate)
	bool                                         bEarlyBindBoneSetDelegates;                        // 0x530(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAnimInstance* GetDefaultObj();

	class UAnimSequence* GetAnimTableSequence(class UGbxAnimTable* AnimTable);
	bool CanUseAnimTable(class UGbxAnimTable* AnimTable);
};

// 0x68 (0x98 - 0x30)
// Class GbxGameSystemCore.ActorPartSelectionData
class UActorPartSelectionData : public UGbxDataAsset
{
public:
	class UActorPartSelectionData*               BaseSelectionData;                                 // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActorPartSetData*                     PartSetData;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 PartSetDataGuid;                                   // 0x40(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRuntimeActorPartListData             RuntimePartList;                                   // 0x50(0x28)(Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 RuntimePartListGuid;                               // 0x78(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 InheritedRuntimePartListGuid;                      // 0x88(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UActorPartSelectionData* GetDefaultObj();

};

// 0x60 (0x750 - 0x6F0)
// Class GbxGameSystemCore.GbxAreaComponent
class UGbxAreaComponent : public UPrimitiveComponent
{
public:
	TArray<class AVolume*>                       DetectionVolumes;                                  // 0x6F0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                         bWorldAreaVolume;                                  // 0x700(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_996[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DetectionRadius;                                   // 0x704(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DetectionHalfHeight;                               // 0x708(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWorldAreaRadius;                                  // 0x70C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualTest;                                       // 0x70D(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_999[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPlayerEnteredArea;                               // 0x710(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerExitedArea;                                // 0x720(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EGbxAreaDrawStyle                 DrawStyle;                                         // 0x730(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class APlayerController>> PlayersDetected;                                   // 0x738(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_99C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAreaComponent* GetDefaultObj();

	void AreaTest();
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EffectCollectionData
class UEffectCollectionData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEffectCollectionData* GetDefaultObj();

	class UWwiseEvent* StaticGetWwiseEvent(TSubclassOf<class UEffectCollectionData> Collection, class UObject* ContextObject);
	void StaticGetParticleEffectAndWwiseEvent(TSubclassOf<class UEffectCollectionData> Collection, class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
	class UParticleSystem* StaticGetParticleEffect(TSubclassOf<class UEffectCollectionData> Collection, class UObject* ContextObject);
	class UWwiseEvent* GetWwiseEvent(class UObject* ContextObject);
	void GetParticleEffectAndWwiseEvent(class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
	class UParticleSystem* GetParticleEffect(class UObject* ContextObject);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.AttributeValueResolver
class UAttributeValueResolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAttributeValueResolver* GetDefaultObj();

	bool SetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float Value);
	float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context);
};

// 0xB0 (0x110 - 0x60)
// Class GbxGameSystemCore.EnvQueryGenerator_TargetableActors
class UEnvQueryGenerator_TargetableActors : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue             DistanceMax;                                       // 0x60(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxCondition*                         TargetSkipDistanceCheckCondition;                  // 0x90(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowNonTargetableActors;                         // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDeadActors;                                  // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowQuerier;                                     // 0x9A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowHostiles;                                    // 0x9B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFriendlies;                                  // 0x9C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowNeutrals;                                    // 0x9D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         TargetCondition;                                   // 0xA0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorTagCompositeQuery               TagQuery;                                          // 0xA8(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class AActor>>          AllowedTypes;                                      // 0xB8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bUseAllowedTypes : 1;                              // Mask: 0x1, PropSize: 0x10xC8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_55 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class AActor>>          DisallowedTypes;                                   // 0xD0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bUseDisallowedTypes : 1;                           // Mask: 0x1, PropSize: 0x10xE0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_56 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9FA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        AllowedTypesCache;                                 // 0xE8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UClass*>                        DisallowedTypesCache;                              // 0xF8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_TargetableActors* GetDefaultObj();

};

// 0x260 (0x3D8 - 0x178)
// Class GbxGameSystemCore.UsableComponent
class UUsableComponent : public UActorComponent
{
public:
	struct FHoldToUseSettings                    HoldToUseSettings;                                 // 0x178(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUsabilityDataSelection*               UsabilityData;                                     // 0x190(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEnabledCondition;                              // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         EnabledCondition;                                  // 0x1A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      PrimaryUseDefSelection;                            // 0x1A8(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      PrimaryHoldUseDefSelection;                        // 0x1C8(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      SecondaryUseDefSelection;                          // 0x1E8(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      SecondaryHoldUseDefSelection;                      // 0x208(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bCanBeUsedFromVehicle : 1;                         // Mask: 0x1, PropSize: 0x10x228(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeUsedFromMech : 1;                            // Mask: 0x2, PropSize: 0x10x228(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanOnlyBeUsedByOwner : 1;                         // Mask: 0x4, PropSize: 0x10x228(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDefaultIsBackupPrimaryData : 1;                   // Mask: 0x8, PropSize: 0x10x228(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5B : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A31[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UsablePriority;                                    // 0x22C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsMaxUseCount;                                 // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A32[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxUseCount;                                       // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentUseCount;                                   // 0x238(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOneUserAtATime;                                   // 0x23C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A36[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CurrentUser;                                       // 0x240(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          RequiredComponentNames;                            // 0x248(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUseAngleRestriction;                              // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A39[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUsableAngleRestriction               AngleRestriction;                                  // 0x25C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRequiresNetAuthority;                             // 0x264(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HeaderName;                                        // 0x268(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_A3C[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnUsed;                                            // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUsedPrimary;                                     // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUnfilteredStartUse;                              // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUnfilteredStopUse;                               // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUsedPrimaryHold;                                 // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUsedSecondary;                                   // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUsedSecondaryHold;                               // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLookedAt;                                        // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLookedAwayFrom;                                  // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A42[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUsableComponent* GetDefaultObj();

	void SetUsableLocked(bool bLocked, class FName Reason);
	void SetPrimaryUseDefinition(class UUsableTypeDefinition* Def);
	void SetInteractionHeader(class FText& NewHeaderName);
	void ResetUseCount();
	class FText K2_GetOptionalErrorText();
	bool K2_CanBeUsed(struct FUsabilityQuery& Query);
	void GetValidPrimitiveComponentNames(TArray<class FName>* ComponentNames);
	class FText GetInteractionHeader();
};

// 0x1F0 (0x220 - 0x30)
// Class GbxGameSystemCore.GbxGameplayGlobals
class UGbxGameplayGlobals : public UGbxDataAsset
{
public:
	class UHealthTypeData*                       ShieldHealthType;                                  // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                             ProjectileReflectionQuery;                         // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileReflectionSpeedScale;                    // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileHitRegionRicochetSpeedScale;             // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ProjectileReflectionInaccuracy;                    // 0x48(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UImpactData*                           ProjectileReflectionImpact;                        // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ProjectileSelfReflectionImpact;                    // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUsableTypeDefinition*                 DefaultUseDefinition;                              // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          InventoryScoreValueInitializer;                    // 0x98(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseGenericPrefixByDefault;                        // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A51[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGlobalAIData*                         GlobalAIData;                                      // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionWindRadiusModifier;                       // 0xE0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinExplosionRadiusToTriggerRadialBlur;             // 0xE4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDefaultExplosionSettings>     DefaultExplosionSettings;                          // 0xE8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           ShortDurationTinnitusEvent;                        // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           MediumDurationTinnitusEvent;                       // 0x100(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           LongDurationTinnitusEvent;                         // 0x108(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionSoundStackingMaxDistanceSquared;          // 0x110(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplosionSoundStackingPreventionDelay;             // 0x114(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultFeedbackTable;                              // 0x118(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UGameStatData*> KillStatMap;                                       // 0x120(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameStatList*>                 GameStatLists;                                     // 0x170(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UChallengeList*>                GameChallengeLists;                                // 0x180(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FMantleGlobalData                     MantleGlobals;                                     // 0x190(0x90)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxGameplayGlobals* GetDefaultObj();

};

// 0x418 (0x950 - 0x538)
// Class GbxGameSystemCore.GbxCharacterAnimInstance
class UGbxCharacterAnimInstance : public UGbxAnimInstance
{
public:
	uint8                                        Pad_A68[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HeadLookAtLocation;                                // 0x540(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EyeLookAtLocation;                                 // 0x54C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadLookAtPercentage;                              // 0x558(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtWeight;                                      // 0x55C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLookAtBlinkStarted;                               // 0x560(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A69[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActiveStanceData;                                  // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActiveStanceType;                                  // 0x570(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   CombatStance;                                      // 0x578(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   PassiveStance;                                     // 0x580(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceData*                           StanceData;                                        // 0x588(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceType*                           StanceType;                                        // 0x590(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceComponent*                      StanceComponent;                                   // 0x598(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCombatStance;                                   // 0x5A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPassiveStance;                                  // 0x5A1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInAir;                                           // 0x5A2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCrouching;                                       // 0x5A3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFlying;                                         // 0x5A4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFalling;                                        // 0x5A5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenLaunched;                                  // 0x5A6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJumped;                                           // 0x5A7(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceFallingState;                                // 0x5A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A74[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWalkSpeed;                                      // 0x5AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSprintSpeed;                                    // 0x5B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWalkSpeedCrouched;                              // 0x5B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed2D;                                           // 0x5B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed2DRaw;                                        // 0x5BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityZ;                                         // 0x5C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardDirection;                                  // 0x5C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightDirection;                                    // 0x5C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpDirection;                                       // 0x5CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Acceleration;                                      // 0x5D0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Direction;                                         // 0x5DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BodyYaw;                                           // 0x5E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverseDirection;                                  // 0x5E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationalVelocity;                                // 0x5E8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               GroundLocation;                                    // 0x5F4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x600(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HipsYawCurveMultiplier;                            // 0x604(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HipsYawCurveValue;                                 // 0x608(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WantsToTurn;                                       // 0x60C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A82[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TurnAmount;                                        // 0x610(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TurnIsActive;                                      // 0x614(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxPredictedTurnDegrees;                           // 0x618(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPredictedTurnTime;                              // 0x61C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x620(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x624(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AimBlendWeight;                                    // 0x628(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AimFacingLocation;                                 // 0x62C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanAimInPassiveStance;                            // 0x638(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateFootIK;                                     // 0x639(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateHandIK;                                     // 0x63A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A89[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LeftHandIKWeight;                                  // 0x63C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightHandIKWeight;                                 // 0x640(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeftHandGripWeight;                                // 0x644(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightHandGripWeight;                               // 0x648(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLegIkBaseClass;                                // 0x64C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LeftHandWeaponIKOffset;                            // 0x650(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            RightHandWeaponIKOffset;                           // 0x680(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LeftHandWorldIKTarget;                             // 0x6B0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasLeftHandWorldIKTarget;                         // 0x6E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlueprintForceLeftHandWorldIKTarget;              // 0x6E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LeftHandIKTargetSocketName;                        // 0x6E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            RightHandWorldIKTarget;                            // 0x6F0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasRightHandWorldIKTarget;                        // 0x720(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlueprintForceRightHandWorldIKTarget;             // 0x721(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A91[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RightHandIKTargetSocketName;                       // 0x728(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LeftFootWorldIKTargetLocation;                     // 0x730(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              LeftFootWorldIKTargetRotation;                     // 0x73C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RightFootWorldIKTargetLocation;                    // 0x748(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RightFootWorldIKTargetRotation;                    // 0x754(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasFootWorldIKTargets;                            // 0x760(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AINavYaw;                                          // 0x764(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AINavTurnBlendDegrees;                             // 0x768(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AINavTransitionBlendDegrees;                       // 0x76C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             AINavHopDirection;                                 // 0x770(0x8)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AINavHopDistance;                                  // 0x778(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAnimServerData                    AINavServerData;                                   // 0x780(0xA0)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavAnimClientData                    AINavClientData;                                   // 0x820(0x1C)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AINavState_IdleAlphaTime;                          // 0x83C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AINavState_IdleAlpha;                              // 0x840(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavState_Idle;                                  // 0x844(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavState_Move;                                  // 0x845(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavState_Start;                                 // 0x846(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavState_Stop;                                  // 0x847(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavState_Turn;                                  // 0x848(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxCharacterBlendPoints          BlendPoints;                                       // 0x849(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavWantsForward;                                // 0x84A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavWantsBackward;                               // 0x84B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavWantsLeft;                                   // 0x84C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavWantsRight;                                  // 0x84D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavIsMoving2D;                                  // 0x84E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINavIsStill2D;                                   // 0x84F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AINavPreviewTableIndex;                            // 0x850(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavAnimState                     AINavPreviewDesiredState;                          // 0x854(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINav_UseDesired;                                 // 0x855(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAINav_CanStretch;                                 // 0x856(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAC[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MeshScale;                                         // 0x858(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENavAnimState                     AINavPreviewCurrentState;                          // 0x85C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAF[0x53];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTransitionTimeToEvaluate;                     // 0x8B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StopTransitionTimeToEvaluate;                      // 0x8B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningRotationTimeToEvaluate;                     // 0x8B8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxBoneSet*                           ActiveAnimBoneSetFilter;                           // 0x8C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxBoneSet*                           PrevAnimBoneSetFilter;                             // 0x8C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC2[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGaitScalingSettings                  GaitScalingSettings;                               // 0x8E8(0x38)(Edit, NativeAccessSpecifierPublic)
	float                                        FacialEmoteWeight;                                 // 0x920(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredFacialEmoteWeight;                          // 0x924(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FacialEmoteWeightAlphaSpeed;                       // 0x928(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredActionWeight;                               // 0x92C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneSetTransitionActionWeight;                     // 0x930(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneSetBlendWeight;                                // 0x934(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneSetTransitionBlendType       BoneSetTransitionBlendType;                        // 0x938(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ACC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoneSetTransitionBlendSpeed;                       // 0x93C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BoneSetBlendSpeed;                                 // 0x940(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DefaultBoneSetBlendSpeed;                          // 0x944(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DefaultBoneSetTransitionBlendSpeed;                // 0x948(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AD0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCharacterAnimInstance* GetDefaultObj();

	void SetDesiredFacialEmoteWeight(float Weight, float BlendTime);
	void OnStanceChanged();
};

// 0x210 (0x238 - 0x28)
// Class GbxGameSystemCore.DamageData
class UDamageData : public UObject
{
public:
	struct FAttributeInitializationData          Damage;                                            // 0x28(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          DamageMultiplier;                                  // 0x60(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UDamageAreaType*                       DamageAreaType;                                    // 0x98(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0xA0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0xA8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UConditionalDamageModifier*>    ConditionalDamageModifiers;                        // 0xB0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bApplyUpwardForce;                                 // 0xC0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B42[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpwardForceScalar;                                 // 0xC4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FForceSelection                       ImpactForceSelection;                              // 0xC8(0x20)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GoreModifier;                                      // 0xE8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GibModifier;                                       // 0xEC(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImpactForceFallsOff;                              // 0xF0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              HitRotationOffset;                                 // 0xF4(0xC)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSimulatedOnClients;                               // 0x100(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceNoCrit;                                      // 0x101(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTargetAsDamageEvaluationContext;               // 0x102(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeExecutedAsync;                               // 0x103(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAsyncExecutionDeferTime;                        // 0x104(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HitStartSocketOrBone;                              // 0x108(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBaseTransformComesFromActorTransform;             // 0x110(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B55[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitStartOffset;                                    // 0x114(0xC)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              HitStartRotationOffset;                            // 0x120(0xC)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttitudeDamageRules                  AttitudeDamageRules;                               // 0x12C(0x4)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnforceAttitudeRulesForHealing;                   // 0x130(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanHurtSelf;                                      // 0x131(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanHurtInstigator;                                // 0x132(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bCausesDamageOverTime : 1;                         // Mask: 0x1, PropSize: 0x10x134(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowMultipleInstances : 1;                       // Mask: 0x2, PropSize: 0x10x134(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHitEachTargetOnlyOnce : 1;                        // Mask: 0x4, PropSize: 0x10x134(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCacheSourceLocationAndRotation : 1;               // Mask: 0x8, PropSize: 0x10x134(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6B : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_B6F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDamageDuration;                                 // 0x138(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B72[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageInterval;                                    // 0x140(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCancelDamageOverTimeWhenOwnerDies;                // 0x178(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCancelDamageOverTimeWhenSourceOverrideIsDestroyed; // 0x179(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       DamageOverTimeParticleSystem;                      // 0x180(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           DamageOverTimeAudioEventStart;                     // 0x188(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           DamageOverTimeAudioEventStop;                      // 0x190(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         InstigatorFeedback;                                // 0x198(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFeedbackData*>                 TargetFeedbacks;                                   // 0x1A0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactData;                                        // 0x1B0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           CritImpactData;                                    // 0x1B8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExplosionData*                        ExplosionData;                                     // 0x1C0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       DefaultExplosionParticles;                         // 0x1C8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxSignificanceEvent                 SignificanceEvent;                                 // 0x1D0(0x8)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           DefaultAudioEvent;                                 // 0x1D8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           DefaultExplosionImpactData;                        // 0x1E0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DefaultExplosionDecalOverride;                     // 0x1E8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExplosionSizeForDecal;                         // 0x1F0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyDrawParticleIfFacingDamage;                   // 0x1F1(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B94[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScreenParticleInitParams             ScreenParticleParams;                              // 0x1F8(0x30)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           PlayerAudioEvent;                                  // 0x228(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B97[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDamageData* GetDefaultObj();

	void OnKilledEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details);
	void OnHitFriendly(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details);
	void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details);
	void OnHitAnyAttitude(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, struct FDamageDataEventDetails& Details);
};

// 0xB0 (0x228 - 0x178)
// Class GbxGameSystemCore.ProjectileHomingComponent
class UProjectileHomingComponent : public UActorComponent
{
public:
	bool                                         bMoveDirectlyToTarget;                             // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TurnSpeed;                                         // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeTurnSpeed;                                  // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FinalTurnSpeed;                                    // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnAcceleration;                                  // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrueTargetDistance;                                // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrueTargetTime;                                    // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideHomingSpeed;                               // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationScale;                                 // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HomingTarget;                                      // 0x1A0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       HomingTargetComponent;                             // 0x1A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HomingSocketOverride;                              // 0x1B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HomingTargetLocation;                              // 0x1B8(0xC)(Edit, BlueprintVisible, Net, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachDistance;                                     // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachDistanceSquared;                              // 0x1C8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HomingTargetLocalOffset;                           // 0x1CC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StopHomingDistance;                                // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStopHomingDistanceReached;                       // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnReachedTargetLocation;                           // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bHomeIn;                                           // 0x200(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BE5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x208(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                Projectile;                                        // 0x210(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bModifyDefault;                                    // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BE7[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProjectileHomingComponent* GetDefaultObj();

	void ToggleHoming();
	void SetHomeIn(bool bEnabled);
	void SetAssociatedProjectileMovement(class UProjectileMovementComponent* ProjectileMovementComponent);
	struct FVector GetHomingLocation();
};

// 0x88 (0xB8 - 0x30)
// Class GbxGameSystemCore.UIStatData
class UUIStatData : public UGbxDataAsset
{
public:
	class FText                                  Description;                                       // 0x30(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        bCanDisplayMultipleTimes : 1;                      // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBiggerIsBetter : 1;                               // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_7A : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C50[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BasePriority;                                      // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SectionName;                                       // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                IconFrameName;                                     // 0x58(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x68(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             SecondaryIcon;                                     // 0x90(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIStatData* GetDefaultObj();

	bool K2_ShouldDisplayStat(class UObject* Context);
	class FText K2_GetValueText(class UObject* Context, struct FUIStatCollector& Collector);
	float K2_GetComparisonValue(class UObject* Context, struct FUIStatCollector& Collector);
	void EnumerateSectionNames(TArray<class FName>* OutSectionNameList);
	float ComputeAttributeModification(class UGbxAttributeData* Attribute, bool bScale, bool bOnlyScale, struct FUIStatCollector& Collector);
};

// 0x1D0 (0x288 - 0xB8)
// Class GbxGameSystemCore.UIStatData_Numeric
class UUIStatData_Numeric : public UUIStatData
{
public:
	enum class EUIStatValueStyle                 ValueStyle;                                        // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStatValueSignStyle             SignStyle;                                         // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStatValueRoundingMode          RoundingMode;                                      // 0xBA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDisplayAsPercentage : 1;                          // Mask: 0x1, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisplayPercentAsFloat : 1;                        // Mask: 0x2, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisplayAsInverse : 1;                             // Mask: 0x4, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisplayPlusSign : 1;                              // Mask: 0x8, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisplayAsOneMinus : 1;                            // Mask: 0x10, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCalculateWithReductionMath : 1;                   // Mask: 0x20, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseFormatText : 1;                                // Mask: 0x40, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableValueRemapping : 1;                         // Mask: 0x80, PropSize: 0x10xBC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSupplementalStatFormatText : 1;                // Mask: 0x1, PropSize: 0x10xBD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinValueCondition : 1;                         // Mask: 0x2, PropSize: 0x10xBD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxValueCondition : 1;                         // Mask: 0x4, PropSize: 0x10xBD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMinOrMaxValueCondition : 1;                       // Mask: 0x8, PropSize: 0x10xBD(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7C : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C7F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          MinValueCondition;                                 // 0xC0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          MaxValueCondition;                                 // 0xF8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x130(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       FloatPrecision;                                    // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FormatText;                                        // 0x140(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  AbbreviatedFormatText;                             // 0x158(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FUIStatValueRemappingData             ValueRemapping;                                    // 0x170(0xE8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UUIStatData_Numeric*                   SupplementalStat;                                  // 0x258(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIStatCombinationMethod          SupplementalStatCombinationMethod;                 // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         SupplementalStatCondition;                         // 0x268(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SupplementalStatFormatText;                        // 0x270(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUIStatData_Numeric* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxGameSystemCore.HitReactionLayer
class UHitReactionLayer : public UObject
{
public:
	bool                                         bStackable;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHitReactionLayer* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GbxGameSystemCore.AttributeContextResolver
class UAttributeContextResolver : public UObject
{
public:
	TSoftClassPtr<class UActorComponent>         ComponentTypeToFurtherResolveTo;                   // 0x28(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAttributeContextResolver* GetDefaultObj();

	TArray<class UObject*> GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource);
};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.SpawnPatternData
class USpawnPatternData : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class USpawnPatternData* GetDefaultObj();

	void CalculateSpawnPoint(const struct FSpawnPatternInputs& Inputs, struct FSpawnPatternResult* Result);
};

// 0xC8 (0xF8 - 0x30)
// Class GbxGameSystemCore.PhysicsSpawnPatternData
class UPhysicsSpawnPatternData : public USpawnPatternData
{
public:
	uint8                                        bEnableSpeedRange : 1;                             // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableAngularSpeedRange : 1;                      // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplySpeedAsImpulse : 1;                          // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyAngularSpeedAsImpulse : 1;                   // Mask: 0x8, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPickRandomPointInActorBounds : 1;                 // Mask: 0x10, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleSpeedByIncomingImpulse : 1;                  // Mask: 0x20, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_80 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_CFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRelativeDirectionData                Direction;                                         // 0x40(0x50)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AngularSpeed;                                      // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngularSpeed;                                   // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRelativeDirectionData                RotationAxis;                                      // 0x98(0x50)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ActorBoundsScale;                                  // 0xE8(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D06[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPhysicsSpawnPatternData* GetDefaultObj();

};

// 0x18 (0x2C80 - 0x2C68)
// Class GbxGameSystemCore.GbxPlayerCameraManager
class AGbxPlayerCameraManager : public APlayerCameraManager
{
public:
	class AGbxPlayerController*                  GbxPCOwner;                                        // 0x2C68(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D16[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxPlayerCameraManager* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class GbxGameSystemCore.StatusEffectData
class UStatusEffectData : public UDataAsset
{
public:
	class UStatusEffectStackingStrategyData*     StackingStrategy;                                  // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAttributeEffect>              AttributeEffects;                                  // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bDoesDamageOverTime;                               // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D27[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDamageSource>             DamageSourceClass;                                 // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x60(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D2C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStatusEffectData* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class GbxGameSystemCore.CharacterAttributeContextResolver
class UCharacterAttributeContextResolver : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UCharacterAttributeContextResolver* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class GbxGameSystemCore.AttributePropertyValueResolver
class UAttributePropertyValueResolver : public UAttributeValueResolver
{
public:
	bool                                         PropertySupportsModifierRemoval;                   // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D44[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FParsedProperty                       Property;                                          // 0x30(0x80)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAttributePropertyValueResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.AchievementUtility
class UAchievementUtility : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAchievementUtility* GetDefaultObj();

};

// 0xD0 (0x130 - 0x60)
// Class GbxGameSystemCore.GbxAction_CoordinatedEffect
class UGbxAction_CoordinatedEffect : public UGbxAction
{
public:
	uint8                                        bInfiniteDuration : 1;                             // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLoop : 1;                                         // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCensored : 1;                                     // Mask: 0x4, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDestroyActorOnEnd : 1;                            // Mask: 0x8, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUnhideActorOnBegin : 1;                           // Mask: 0x10, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideActorOnEnd : 1;                               // Mask: 0x20, PropSize: 0x10x60(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_88 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGbxAction_CoordinatedEffect> NextEffect;                                        // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PermanentGroupTag;                                 // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaskMaterial;                                      // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    GlowMaterial;                                      // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCoordinatedConditionalMaterialData> ConditionalOverrideMaterials;                      // 0x90(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCoordinatedScalarParameter>   MaterialScalarParameters;                          // 0xA0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCoordinatedVectorParameter>   MaterialVectorParameters;                          // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          InheritedMaterialParameters;                       // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EMaterialParameterCopyMethod      InheritMaterialParametersMethod;                   // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInheritAllMaterialParameters : 1;                 // Mask: 0x1, PropSize: 0x10xD1(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverwriteInstancedMaterialParameters : 1;         // Mask: 0x2, PropSize: 0x10xD1(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bApplyToTranslucentMaterials : 1;                  // Mask: 0x4, PropSize: 0x10xD1(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPermanentMaterialOverride : 1;                    // Mask: 0x8, PropSize: 0x10xD1(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAlwaysRestoreMaterialParametersAtEnd : 1;         // Mask: 0x10, PropSize: 0x10xD1(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bApplyMaterialParametersToBothOverrideAndMaskGlow : 1; // Mask: 0x20, PropSize: 0x10xD1(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_89 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D8D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ExcludedMaterialStaticParameters;                  // 0xD8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCoordinatedParticleSystemData> ParticleEffects;                                   // 0xE8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCoordinatedParticleSystemParameterData> ParticleParameters;                                // 0xF8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        ParticleSpeedMultiplier;                           // 0x108(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECoordinatedOwnedParticleAction   OwnedParticleAction;                               // 0x10C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAlwaysRestoreParticleParametersAtEnd : 1;         // Mask: 0x1, PropSize: 0x10x10D(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_8A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bHideOwnedParticles;                               // 0x10E(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D98[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCoordinatedAudioData>         AudioEffects;                                      // 0x110(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCoordinatedLightParameterData> LightParameters;                                   // 0x120(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAction_CoordinatedEffect* GetDefaultObj();

	void SetConstantMaterialVectorParamValue(class FName ParamName, struct FLinearColor& Color);
};

// 0x198 (0x1F8 - 0x60)
// Class GbxGameSystemCore.GbxAction_Gib
class UGbxAction_Gib : public UGbxAction
{
public:
	int32                                        MaxGibCount;                                       // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E07[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGibData>                      Gibs;                                              // 0x68(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        GibMinScale;                                       // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GibMaxScale;                                       // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpawnPatternData*                     GibSpawnPattern;                                   // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GibMassScale;                                      // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    GibActorClass;                                     // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E1C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactResponseEffect                 GibEffect;                                         // 0xA0(0x140)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        GibEffectScale;                                    // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E1E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       GibParticle;                                       // 0x1E8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWwiseEvent*                           GibSound;                                          // 0x1F0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAction_Gib* GetDefaultObj();

};

// 0x300 (0x3B8 - 0xB8)
// Class GbxGameSystemCore.GbxAction_Loop
class UGbxAction_Loop : public UGbxAction_SimpleAnim
{
public:
	struct FAnimMeshList                         AnimStart;                                         // 0xB8(0x78)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FWeightedAnim>                 AnimLoopList;                                      // 0x130(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FAnimMeshList                         AnimStop;                                          // 0x140(0x78)(Edit, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartToLoopBlendTime;                              // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LoopToLoopBlendTime;                               // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LoopToStopBlendTime;                               // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E4C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimSlot;                                          // 0x1D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLetLoopFinish;                                    // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableClientSynchronization;                      // 0x1D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E53[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             LoopCount;                                         // 0x1E0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUseLoopCount;                                     // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E56[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxParam                             LoopTime;                                          // 0x268(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUseLoopTime;                                      // 0x2E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E58[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         LoopCondition;                                     // 0x2F0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseLoopCondition;                                 // 0x2F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoopAnimData                         AnimData3rd;                                       // 0x300(0x18)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bPlay3rd;                                          // 0x318(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E5F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoopAnimData                         AnimData1st;                                       // 0x320(0x18)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bPlay1st;                                          // 0x338(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E65[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimMeshList                         AnimLoop;                                          // 0x340(0x78)(Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAction_Loop* GetDefaultObj();

	void OnStop(class AActor* Actor);
	void OnLoop(class AActor* Actor);
	void K2_StopLooping();
};

// 0x28 (0x1D0 - 0x1A8)
// Class GbxGameSystemCore.GbxAction_PhysicalAnim
class UGbxAction_PhysicalAnim : public UGbxAction_Anim
{
public:
	enum class EPhysicalAnimationRootMotionControl RootMotionControl;                                 // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxPhysicalActionMovementLockMode MovementLockMode;                                  // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxPhysicalActionDynamicBoneActivationMode DynamicBoneActivationMode;                         // 0x1AA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E83[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneFatigueParams                    FatigueParams;                                     // 0x1AC(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGbxPhysicalActionBeginCondition  BeginCondition;                                    // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PhysicalBeginConditionFlags;                       // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PhysicalEndConditionFlags;                         // 0x1C2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxPhysicalActionEndCondition    PhysicalEndCondition;                              // 0x1C3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomForceMultiplier;                             // 0x1C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpwardForceMultiplier;                             // 0x1C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceAppliedAtLocation;                           // 0x1CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasValidHitForce;                                 // 0x1CD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E86[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_PhysicalAnim* GetDefaultObj();

	enum class EGbxPhysicalActionDynamicBodyState K2_GetDynamicBodyState(float AngularThreshold);
	void K2_FixupDynamicToKinematicIssues(float AngularThreshold);
};

// 0x30 (0x200 - 0x1D0)
// Class GbxGameSystemCore.GbxAction_PhysicalDeath
class UGbxAction_PhysicalDeath : public UGbxAction_PhysicalAnim
{
public:
	float                                        PhysicalAnimationDelayTime;                        // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapPhysicalAnimationDelayToAnimationDuration;     // 0x1D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PrematurePhysicalAnimationIgnoreBodyNames;         // 0x1D8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowPrematurePhysicalAnimation;                  // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTearOffOnDeath;                                   // 0x1E9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxRagdollTime;                                    // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxSignificanceEvent                 SignificanceEvent;                                 // 0x1F0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinRagdollSignificance;                            // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_PhysicalDeath* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.AimAssistParameters
class UAimAssistParameters : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UAimAssistParameters* GetDefaultObj();

};

// 0x1B0 (0x9E0 - 0x830)
// Class GbxGameSystemCore.GbxPlayerController
class AGbxPlayerController : public APlayerController
{
public:
	uint8                                        Pad_1113[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxCharacter*                         GbxCharacter;                                      // 0x840(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGbxCharacter*                         PrimaryCharacter;                                  // 0x848(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URecentDamageTrackingComponent*        RecentDamageTrackingComponent;                     // 0x850(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxProfile*                           CurrentProfile;                                    // 0x858(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftClassPath                        GbxPlayerInputClass;                               // 0x860(0x18)(Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftClassPath                        GbxInputComponentClass;                            // 0x878(0x18)(Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          DefaultSchemas;                                    // 0x890(0x10)(ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultContextName;                                // 0x8A0(0x8)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAimAssistStrategy>        AimAssistStrategyClass;                            // 0x8A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftClassPath                        CheatClassGbx;                                     // 0x8B0(0x18)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1124[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPrimaryCharacterChanged;                         // 0x8F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPauseChanged;                                    // 0x908(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1125[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGbxGlyphSetOption                CachedGlyphMode;                                   // 0x940(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTargetingComponent*                   TargetingComponent;                                // 0x948(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetableComponent*                  TargetableComponent;                               // 0x950(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTeamComponent*                        TeamComponent;                                     // 0x958(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxPerceptionComponent*               PerceptionComponent;                               // 0x960(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirstPersonComponent*                 FirstPersonComponent;                              // 0x968(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAimAssistStrategy*                    AimAssistStrategy;                                 // 0x970(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWwiseListenerComponent*               WwiseListener;                                     // 0x978(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FActiveTrackedFeedback>        ActiveTrackedFeedbacks;                            // 0x980(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bUsingGamepad;                                     // 0x990(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1133[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCinematicModeData*>            CinematicModeStack;                                // 0x998(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UCinematicModeData*                    CinematicMode;                                     // 0x9A8(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScreenParticleManagerComponent*       ScreenParticleManagerComponent;                    // 0x9B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114A[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxPlayerController* GetDefaultObj();

	void SetTeam(class UTeam* Team);
	void ServerRequestPawnSlotDetach(class APawn* Occupant);
	void ServerCanSplitscreenJoin(int32 ControllerId);
	void PushCinematicMode(class UCinematicModeData* InCinematicMode);
	void PopCinematicMode(class UCinematicModeData* InCinematicMode);
	void OnRep_PrimaryCharacter();
	void OnRep_CinematicMode();
	void OnPrimaryCharacterChanged__DelegateSignature(class AGbxCharacter* NewCharacter);
	void OnPausedChangedDelegate__DelegateSignature(bool bPaused);
	bool IsUsingGamepad();
	class UTeamComponent* GetTeamComponent();
	class UTeam* GetTeam();
	class UTargetingComponent* GetTargetingComponent();
	class UTargetableComponent* GetTargetableComponent();
	class AGbxCharacter* GetPrimaryCharacter();
	void GetPlayerViewportSize(int32* SizeX, int32* SizeY);
	void GetPlayerViewportOffset(int32* OffsetX, int32* OffsetY);
	class UGbxProfile* GetPlayerProfile();
	class UGbxPerceptionComponent* GetGbxPerceptionComponent();
	int32 GetCurrencyAmount(class UGbxInventoryCategoryData* CurrencyType);
	bool DeprojectViewportPositionToWorld(float ViewportX, float ViewportY, struct FVector* WorldLocation, struct FVector* WorldDirection, bool bUseForegroundProjection);
	void DebugCategory(class FName CategoryName);
	void ClientStopFeedback(class UFeedbackData* Data);
	void ClientPlayWwiseEvent(class UWwiseEvent* Event);
	void ClientPlayFeedback(class UFeedbackData* Data, float Scale, bool bLoop, class UObject* SourceContext);
	void ClientPerformFeedbackAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, bool bLoop, class UObject* SourceContext, const struct FRangedDistanceOverrides& RangedOverrides);
	void ClientPerformFeedback(class UFeedbackData* FeedbackData, class UObject* SourceContext);
	void ClientNotifyActivateCheckpoint();
	void ClientCanSplitscreenJoin(int32 ControllerId, bool bCanJoin);
	void ClientApplyDamageDataPresentation(class UDamageData* DamageData, struct FPlayerDamageDataPresentation& PlayerPresentation);
	void Client_StopGbxFeedback(class UGbxFeedbackData* Data, class UObject* SourceContext);
	void Client_PlayGbxFeedback(class UGbxFeedbackData* Data, bool bIs3D, bool bLoop, float Scale, class UObject* SourceContext, const struct FVector& SourceLocation, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
	void ClearCinematicMode();
	void ClearAndSetCinematicMode(class UCinematicModeData* InCinematicMode);
	void AddCurrencyAmount(int32 Amount, class UGbxInventoryCategoryData* CurrencyType);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.AimAssistStrategy
class UAimAssistStrategy : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAimAssistStrategy* GetDefaultObj();

};

// 0x40 (0x4F0 - 0x4B0)
// Class GbxGameSystemCore.GbxGameAssetManager
class UGbxGameAssetManager : public UGbxBaseAssetManager
{
public:
	TArray<struct FStartupAssetTypeData>         StartupAssetTypes;                                 // 0x4B0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          StartupAssetFiles;                                 // 0x4C0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_119D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGameAssetManager* GetDefaultObj();

};

// 0x230 (0x260 - 0x30)
// Class GbxGameSystemCore.AssetMappingData
class UAssetMappingData : public UGbxDataAsset
{
public:
	TMap<uint32, class FString>                  ChallengesMap;                                     // 0x30(0x50)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<uint32, class FString>                  GameStatDataMap;                                   // 0x80(0x50)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<uint32, class FString>                  CustomizationDataMap;                              // 0xD0(0x50)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<uint32, class FString>                  MissionsMap;                                       // 0x120(0x50)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<uint32, class FString>                  ObjectiveSetsMap;                                  // 0x170(0x50)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<uint32, class FString>                  InventoryCategoryMap;                              // 0x1C0(0x50)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<uint32, class FString>                  UINamesMap;                                        // 0x210(0x50)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAssetMappingData* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class GbxGameSystemCore.challenge
class UChallenge : public UObject
{
public:
	class UChallengesComponent*                  RegisteredOwner;                                   // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UChallenge>>        ParentChallenges;                                  // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  ChallengeName;                                     // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x58(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CompletedDescription;                              // 0x70(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bShared;                                           // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRepeatable;                                       // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicated;                                       // 0x8A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideInUI;                                         // 0x8B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowActivationUI;                                 // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowProgressUI;                                   // 0x8D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCompletionUI;                                 // 0x8E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAsUndiscoveredUntilProgressed;                // 0x8F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssociatedMapName;                                 // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChallengeType                    ChallengeType;                                     // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1299[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatChallengeTest>            StatChallengeTests;                                // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCompleteIfGoalValueReached;                       // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetProgressWhenGoalValueReached;                // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChallengeGoalValue>           ProgressGoalInfo;                                  // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ProgressGoalValues;                                // 0xC8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	class UChallengeCategoryData*                ChallengeCategoryData;                             // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProgressDuration;                                  // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitiallyActive;                                  // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFromCounts;                                   // 0xE5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSubChallengesAsCounts;                        // 0xE6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UChallenge>                PrerequisiteChallenge;                             // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssociatedCompletionAchievementId;                 // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssociatedProgressAchievementId;                   // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProfileChallenge;                                 // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UChallenge>>        SubChallenges;                                     // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         CompletedBySubChallenges;                          // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ActivateIfSubChallengesComplete;                   // 0x111(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncrementProgressViaSubChallenges;                // 0x112(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AA[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChallenge* GetDefaultObj();

	bool TestForCompleted(class AGbxPlayerController* PlayerToTest, class UObject* OtherObject, TArray<class FString>& EnumTag);
	void SetChallengeProgress(int32 NewProgress);
	void PlayerExitChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent);
	void PlayerEnterChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent);
	void OnLevelActorRegistered(class UChallengeLevelActorComponent* RegisteredLevelActor);
	void OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter);
	void OnChallengeActivated();
	bool IsChallengeComplete();
	bool IsChallengeActive();
	void IncrementChallengeProgressByValue(int32 Value);
	void IncrementChallengeProgress();
	void GetLevelActorComponents(TArray<class UChallengeLevelActorComponent*>* LevelActorList);
	int32 GetChallengeProgressGoalValue();
	int32 GetChallengeProgress();
	void GetChallengeCompleteInfo(int32* NumCompleted, int32* NumChallenges, bool bCheckReplicatedChallenges);
	bool CompletedConditional();
	void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
	void CompleteChallenge();
	void ActivateChallenge();
};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.ChallengeCategoryData
class UChallengeCategoryData : public UGbxDataAsset
{
public:
	class FText                                  CategoryName;                                      // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	float                                        ProgressWeight;                                    // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChallengeCategoryData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.ChallengeList
class UChallengeList : public UGbxDataAsset
{
public:
	class UDownloadableContentData*              AssociatedDLC;                                     // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UChallenge>>      Challenges;                                        // 0x38(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UChallengeList* GetDefaultObj();

};

// 0x1A8 (0x600 - 0x458)
// Class GbxGameSystemCore.ChallengeManager
class AChallengeManager : public AActor
{
public:
	uint8                                        Pad_12EF[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedChallengeDataArray         ReplicatedChallenges;                              // 0x4F8(0xC8)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12F1[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AChallengeManager* GetDefaultObj();

	void OnStatUpdate(class AActor* StatContext, class UGameStatData* StatId, int32 Amount);
	void OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int32 Amount);
	void OnRep_ReplicatedChallenges();
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.CustomChallengePersistentState
class UCustomChallengePersistentState : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCustomChallengePersistentState* GetDefaultObj();

};

// 0x90 (0x208 - 0x178)
// Class GbxGameSystemCore.ChallengesComponent
class UChallengesComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnChallengeRegistrationComplete;                   // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnChallengeActivated;                              // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnChallengeUpdated;                                // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnChallengeCompleted;                              // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnChallengeChildCompleted;                         // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FChallengeInstanceData>        LocalChallengeDataCache;                           // 0x1C8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                ChallengeRewardsEarned;                            // 0x1D8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                ChallengeRewardsToOfferNext;                       // 0x1E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UGameStatsComponent*                   GameStatsComponent;                                // 0x1F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1465[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChallengesComponent* GetDefaultObj();

	void UnregisterInActivePlayerChallenges();
	void SetChallengeProgress(class UClass* ChalClass, int32 NewProgress);
	void SetChallengeActive(class UClass* ChalClass, bool bInIsActive);
	bool IsChallengeComplete(class UClass* ChalClass, bool bCheckReplicatedChallenges);
	bool IsChallengeActive(class UClass* ChalClass);
	void IncrementChallengeProgress(class UClass* ChalClass);
	int32 GetMaxChallengeTiers(class UClass* ChalClass);
	TArray<struct FChallengeInstanceData> GetLocalChallenges();
	int32 GetCompletedChallengeTiers(class UClass* ChalClass);
	int32 GetChallengeStatValue(class UClass* ChalClass, class UGameStatData* StatId);
	int32 GetChallengeStatGoalValue(class UClass* ChalClass, class UGameStatData* StatId);
	int32 GetChallengeProgressGoalValue(class UClass* ChalClass);
	int32 GetChallengeProgress(class UClass* ChalClass);
	void GetChallengeCompleteInfoForLevels(const TArray<class FName>& LevelsForChallenges, class UChallengeCategoryData* Category, int32* NumCompleted, int32* NumActive, bool bIgnoreHidden);
	void GetChallengeCompleteInfo(class UClass* ChalClass, int32* NumCompleted, int32* NumChallenges, bool bCheckReplicatedChallenges);
	void CompleteChallengeIfConditionsMet(class UClass* ChalClass);
	void CompleteChallenge(class UClass* ChalClass, bool bForceActive, bool bIgnoreRewards);
	void ClientChallengeUpdateProgress(class UClass* ChalClass, int32 NewProgress);
	void ClientChallengeCompleted(class UClass* ChalClass, int32 NumTiersComplete, bool bForceActive, bool bIgnoreRewards);
	void ClientActivateChallenge(class UClass* ChalClass);
	bool AreGlobalChallengesRegistered();
	void ActivateChallenge(class UClass* ChalClass);
};

// 0x1EA0 (0x2730 - 0x890)
// Class GbxGameSystemCore.GbxCharacterMovementComponent
class UGbxCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	uint8                                        Pad_186C[0x7E0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxCharacter*                         GbxCharacterOwner;                                 // 0x1070(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxCharacterAnimInstance*             GbxAnimInstance;                                   // 0x1078(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimInstance*                         AnimInstance;                                      // 0x1080(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FallingFloorUpdateInterval;                        // 0x1088(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FallingFloorTraceDistance;                         // 0x108C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_187E[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterMoveToState                 CurrentMoveToState;                                // 0x1128(0x30)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FCharacterRotateToState               CurrentRotateToState;                              // 0x1158(0x68)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        bCanCrouchInAir : 1;                               // Mask: 0x1, PropSize: 0x10x11C0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanClimbLadders : 1;                              // Mask: 0x2, PropSize: 0x10x11C0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCenterOnLadder : 1;                               // Mask: 0x4, PropSize: 0x10x11C0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSlideAlongLadderCollision : 1;                    // Mask: 0x8, PropSize: 0x10x11C0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlockMomentumAdd : 1;                             // Mask: 0x10, PropSize: 0x10x11C0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A8 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1896[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    MaxGroundSpeedScale;                               // 0x11C4(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderFriction;                                    // 0x11D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    MaxLadderAscendSpeed;                              // 0x11D4(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    MaxLadderDescendSpeed;                             // 0x11E0(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLadderForwardSpeed;                             // 0x11EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLadderReverseSpeed;                             // 0x11F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderBrakingDeceleration;                         // 0x11F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderInterpSpeed;                                 // 0x11F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderJumpVelocity;                                // 0x11FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                EnterBottomAnimation;                              // 0x1200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ExitBottomAnimation;                               // 0x1208(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                EnterTopAnimation;                                 // 0x1210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ExitTopAnimation;                                  // 0x1218(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULadderInteractData*                   LadderInteractData;                                // 0x1220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEnterLadder;                                     // 0x1228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExitLadderTop;                                   // 0x1238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExitLadderBottom;                                // 0x1248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnJumpFromLadder;                                  // 0x1258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMantleStarted;                                   // 0x1268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMantleFinished;                                  // 0x1278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStanceComponent*                      StanceComponent;                                   // 0x1288(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxActionComponent*                   ActionComponent;                                   // 0x1290(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCharacterScriptedMeshOffsetState     ScriptedMeshOffsetState;                           // 0x1298(0x140)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bClientWasOnLadder;                                // 0x13D8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class ILadderInterface>> OverlappingLadderVolumes;                          // 0x13E0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TScriptInterface<class ILadderInterface>     CurrentLadderVolume;                               // 0x13F0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TScriptInterface<class ILadderInterface>     JumpLadderVolume;                                  // 0x1400(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        LadderJumpTime;                                    // 0x1410(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAlreadyCenteredOnLadder : 1;                      // Mask: 0x1, PropSize: 0x10x1414(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bWantsToBeOnLadder : 1;                            // Mask: 0x2, PropSize: 0x10x1414(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_A9 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_18E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLadderAnimState                      LadderAnimState;                                   // 0x1418(0x28)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FReplicatedLadderState                ReplicatedLadderState;                             // 0x1440(0x2)(Net, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_18EE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    RotationRateYaw;                                   // 0x1444(0xC)(Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    IdleRotationRateYaw;                               // 0x1450(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseIdleRotationRateYaw;                           // 0x145C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F4[0x97];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    MaxAllowedAimOffset;                               // 0x14F4(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTurnAimOffset;                                  // 0x1500(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinBodyFacingThreshold;                            // 0x1504(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPredictedTurnDegrees;                           // 0x1508(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxPredictedTurnDegrees;                       // 0x150C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1900[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxPredictedTurnTime;                              // 0x1510(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxPredictedTurnTime;                          // 0x1514(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysFaceActorsCurrentLocation;                  // 0x1515(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    AimRotationRate;                                   // 0x1518(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtAngleClamp;                                  // 0x1524(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookRotationRate;                                  // 0x1528(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FastLookRotationRate;                              // 0x152C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFastLookRotationRate;                          // 0x1530(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1926[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNumericRange                         FastLookRotationSpeed;                             // 0x1534(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        HeadLookPercent;                                   // 0x153C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNumericRange                         HeadLookPercentDistance;                           // 0x1540(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseHeadLookPercentDistance;                       // 0x1548(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeadLookPercentInterpSpeed;                        // 0x154C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtParentBoneForAngleClamp;                 // 0x1550(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtBlinkAngle;                                  // 0x1554(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtBlinkAngle;                              // 0x1558(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1943[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtHeadTargetOffset;                            // 0x155C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtHeadTargetOffset;                        // 0x1568(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1947[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtEyeTargetOffset;                             // 0x156C(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtEyeTargetOffset;                         // 0x1578(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtTargetClearDelay;                        // 0x1579(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1955[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LookAtRate;                                        // 0x157C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootIkEnabledInterpolationSpeed;                   // 0x1580(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeAdaptationOverrideInterpSpeed;                // 0x1584(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1961[0x280];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlledMoveState                  ControlledMoveState;                               // 0x1808(0x160)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FControlledMoveReplicationData        ControlledMoveReplicationData;                     // 0x1968(0x48)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_196E[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStopControlledMoveDelegate;                      // 0x19E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UMantleData*                           MantleData;                                        // 0x19F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMantleState                          MantleState;                                       // 0x19F8(0x6E8)(Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FReplicatedMantleState                ReplicatedMantleState;                             // 0x20E0(0x8)(Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_197F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxCharacterNavWalking               GbxNavWalking;                                     // 0x20F0(0xB0)(Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UNavComponent*                         NavComponent;                                      // 0x21A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NavMeshProjectionDistance;                         // 0x21A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AirFriction;                                       // 0x21AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NavMeshProjectionTraceDistance;                    // 0x21B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1996[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAnimState                         NavAnimState;                                      // 0x21B8(0x50)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FNavAnimServerData                    NavServerData;                                     // 0x2208(0xA0)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FNavAnimClientData                    NavClientData;                                     // 0x22A8(0x1C)(Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bPretendToBeWalking;                               // 0x22C4(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19A5[0x143];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotationDeltaMatchingInfo            RotationDeltaMatchingInfo;                         // 0x2408(0xC0)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_19C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxInterpData                        InterpData;                                        // 0x24D0(0x140)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FIdleVelocityData                     IdleVelocity;                                      // 0x2610(0x18)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FRootMotionStateData                  RootMotionState;                                   // 0x2628(0x58)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C8[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCharacterMovementComponent* GetDefaultObj();

	void StopRotateTo();
	void StopMoveTo(bool bForce, bool bReplicateStop);
	void StopControlledMove(TSubclassOf<class UControlledMove> ControlledMove, bool bZeroVelocity, bool bInterrupted);
	void StartRotateTo(struct FCharacterRotateToCommand& RotateToCommand);
	void StartMoveTo(struct FCharacterMoveToCommand& MoveToCommand);
	bool StartControlledMove(TSubclassOf<class UControlledMove> ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation);
	void SetNoneWithRootMotionMode(bool bAnimationWalking, class FName Reason);
	void SetFacingTarget(struct FFacingInfo& FacingTarget, enum class EFacingChannel Channel);
	void SetAnimationBasedTurning(bool bEnable);
	void ServerStopMoveTo();
	void ServerStartMoveTo(struct FCharacterMoveToCommand& MoveToCommand);
	void ServerAttemptMantle(struct FMantleAttemptInfo& ClientData, float Timestamp);
	void OnStanceChanged(const struct FStanceChangedEventArgs& Args);
	void OnRep_ControlledMove();
	void OnNotifyTurnExit();
	void OnNotifyTurnEnter();
	void OnCharacterMeshAnimInstanceChanged();
	void OnCapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	struct FFacingInfo MakeFacingInfoRotation(const struct FRotator& Rotation);
	struct FFacingInfo MakeFacingInfoNone();
	struct FFacingInfo MakeFacingInfoLocation(const struct FVector& Location);
	struct FFacingInfo MakeFacingInfoDirection(const struct FVector& Direction);
	struct FFacingInfo MakeFacingInfoComponent(class USceneComponent* Component);
	struct FFacingInfo MakeFacingInfoActorEyes(class AActor* Actor);
	struct FFacingInfo MakeFacingInfoActor(class AActor* Actor);
	void LeaveNoneWithRootMotionMode(bool bApplyDefault);
	bool IsPerformingSpecificControlledMove(TSubclassOf<class UControlledMove> ControlledMove);
	bool IsPerformingControlledMove();
	bool IsMovingOnLadder();
	bool IsMantlingAllowed();
	bool IsMantling();
	bool IsInNoneWithRootMotionMode();
	bool IsHandIkEnabled();
	bool IsFootIkTracingEnabled();
	bool IsFootIkEnabled();
	bool IsFacingTargetBP(float ThresholdDegrees, enum class EFacingChannel Channel);
	float GetMaxAllowedAimOffset();
	class UMantleData* GetMantleData();
	struct FRotator GetDesiredFacingRotation(enum class EFacingChannel Channel);
	struct FVector GetDesiredFacingLocation(enum class EFacingChannel Channel);
	struct FRotator GetCurrentFacingRotation(enum class EFacingChannel Channel);
	struct FVector GetCurrentFacingOrigin(enum class EFacingChannel Channel);
	struct FVector GetCurrentFacingLocation(enum class EFacingChannel Channel);
	class UControlledMove* GetControlledMove();
	void GbxSetAnimInstanceClass(class USkeletalMeshComponent* SkelMeshComponent, class UClass* NewClass);
	void GbxCharacterMovementEvent__DelegateSignature();
	void ControlledServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, uint8 OldMoveFlags, uint32 CMDir);
	void ControlledServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, uint8 PendingFlags, uint32 View0, uint32 CMDir0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, class FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw);
	void ControlledServerMove(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, class FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw);
	void ClientAdjustControlledMovePosition(float Timestamp, const struct FControlledMoveNetCorrection& ServerCMData, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, class FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
	bool CanStartPassiveMantle();
	bool CanStartMantle();
	void AddPendingRawInputVector(const struct FVector& NewInputVector);
};

// 0x10 (0x88 - 0x78)
// Class GbxGameSystemCore.GbxCheatManager
class UGbxCheatManager : public UCheatManager
{
public:
	uint8                                        BitPad_AD : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bHLQNoClipActive : 1;                              // Mask: 0x4, PropSize: 0x10x78(0x1)(Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B4B[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCheatManager* GetDefaultObj();

	void TestGameStage(int32 GameStageOverride);
	void StartPlayerInit();
	void ShowProjectileImpacts(float Size, float LifeTime);
	void SetDebugActorByName(const class FString& ActorName);
	void SetDebugActor(class AActor* Actor, int32 ControllerIndex);
	void Server_TogglePlayersOnly();
	void Server_DamageTarget(float DamageAmount);
	void PlayFeedbackRangedFromThere(const class FString& FeedbackData);
	void PlayFeedbackDirectional(const class FString& FeedbackData, float DirectionAngle);
	void PlayFeedback(const class FString& FeedbackData, float Scale);
	void LogQatalystInfo();
	void DebugNextAI();
	void DamageAreaDebug();
	void ClearPlayerInit();
};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.CinematicModeData
class UCinematicModeData : public UGbxDataAsset
{
public:
	bool                                         bCinematicMode;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidePlayer;                                       // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidePlayerOwnedVehicles;                          // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideNPC;                                          // 0x33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsHUD;                                       // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsMovement;                                  // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsPawnRotation;                              // 0x36(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsTurning;                                   // 0x37(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicSplitScreen;                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGodMode;                                    // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableNoTarget;                                   // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECinematicAudioMode               AudioMode;                                         // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCinematicModeData* GetDefaultObj();

};

// 0x878 (0x8A0 - 0x28)
// Class GbxGameSystemCore.ControlledMove
class UControlledMove : public UObject
{
public:
	uint8                                        bIsSpeedScaleNormalized : 1;                       // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEaseInSpeedConstraints : 1;                       // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRestoreCharacterMovementMode : 1;                 // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bZeroVelocityAtEnd : 1;                            // Mask: 0x8, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdateCharacterRotationYaw : 1;                   // Mask: 0x10, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdateCharacterRotationPitch : 1;                 // Mask: 0x20, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyLaunchVelocityOnStart : 1;                   // Mask: 0x40, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSpeedAffectedByMaxGroundSpeedScale : 1;           // Mask: 0x80, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlockMomentumAdd : 1;                             // Mask: 0x1, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterruptWhenLaunched : 1;                        // Mask: 0x2, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsMotionNormalized : 1;                           // Mask: 0x4, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsInheritVelocityScaleNormalized : 1;             // Mask: 0x8, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyMoveWhenFalling : 1;                         // Mask: 0x10, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopOnLanding : 1;                                // Mask: 0x20, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAirControl : 1;                           // Mask: 0x40, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSlopeCurve : 1;                                // Mask: 0x80, PropSize: 0x10x29(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenTargetReached : 1;                        // Mask: 0x1, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableMoveControls : 1;                           // Mask: 0x2, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitedLookControl : 1;                           // Mask: 0x4, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInputVectorRelativeToMoveDirection : 1;           // Mask: 0x8, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMovingLaunchDirection : 1;                     // Mask: 0x10, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDirectionRelativeToTarget : 1;                    // Mask: 0x20, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOffsetLocationByCollisionRadius : 1;              // Mask: 0x40, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOffsetLocationByTargetCollisionRadius : 1;        // Mask: 0x80, PropSize: 0x10x2A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLeap : 1;                                         // Mask: 0x1, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysCollideWithTarget : 1;                      // Mask: 0x2, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopOnHitWall : 1;                                // Mask: 0x4, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopOnHitTargetable : 1;                          // Mask: 0x8, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTeleport : 1;                                     // Mask: 0x10, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRestrictTeleportToGround : 1;                     // Mask: 0x20, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableLookInput : 1;                             // Mask: 0x40, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableMoveInput : 1;                             // Mask: 0x80, PropSize: 0x10x2B(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableTargetControls : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTargetControlGrounded : 1;                        // Mask: 0x2, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTrackTarget : 1;                                  // Mask: 0x4, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopAI : 1;                                       // Mask: 0x8, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAbortAI : 1;                                      // Mask: 0x10, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGodMode : 1;                                      // Mask: 0x20, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDemigodMode : 1;                                  // Mask: 0x40, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEndCrouch : 1;                                    // Mask: 0x80, PropSize: 0x10x2C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceCrouch : 1;                                  // Mask: 0x1, PropSize: 0x10x2D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdateCameraRotationYaw : 1;                      // Mask: 0x2, PropSize: 0x10x2D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdateCameraRotationPitch : 1;                    // Mask: 0x4, PropSize: 0x10x2D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCancelActionSkillsIfPlayerNotInstigator : 1;      // Mask: 0x8, PropSize: 0x10x2D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsNetworkAutonomous : 1;                          // Mask: 0x10, PropSize: 0x10x2D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayStartStopActionsLocally : 1;                  // Mask: 0x20, PropSize: 0x10x2D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowClientCollisionNotifications : 1;            // Mask: 0x40, PropSize: 0x10x2D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B3 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1C76[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Duration;                                          // 0x30(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECMMovementType                   MovementType;                                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Speed;                                             // 0x70(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SpeedScaleCurve;                                   // 0xA8(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        CharacterRotationYawOffset;                        // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CharacterRotationPitchOffset;                      // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCMMotionData                         MotionCurves;                                      // 0x128(0x168)(Edit, NativeAccessSpecifierPublic)
	int32                                        InheritVelocityType;                               // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    InheritVelocityScaleCurve;                         // 0x298(0x78)(Edit, NativeAccessSpecifierPublic)
	float                                        AdjustDurationBySlopeModifier;                     // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStepHeight;                                     // 0x314(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    SpeedSlopeScaleCurve;                              // 0x318(0x78)(Edit, NativeAccessSpecifierPublic)
	enum class ECMLedgeBehavior                  LedgeBehavior;                                     // 0x390(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LedgeHeight;                                       // 0x394(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          AirControl;                                        // 0x398(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          GravityModifier;                                   // 0x3D0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECMGravityModificationType        GravityModificationType;                           // 0x408(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    GravityModifierEffectOverTime;                     // 0x410(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          TerminalVelocityModifier;                          // 0x488(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECMTerminalVelocityModificationType TerminalVelocityModificationType;                  // 0x4C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetReached2DThreshold;                          // 0x4C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetReachedUpThreshold;                          // 0x4C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetReachedDownThreshold;                        // 0x4CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECMMoveFBControlType              MoveFBControlType;                                 // 0x4D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECMMoveLRControlType              MoveLRControlType;                                 // 0x4D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          MoveForwardRate;                                   // 0x4D8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          MoveBackwardRate;                                  // 0x510(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          MoveLRRate;                                        // 0x548(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          LookTurnScale;                                     // 0x580(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          LookUpScale;                                       // 0x5B8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          LookDownScale;                                     // 0x5F0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          DropRate;                                          // 0x628(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          MaxDiveAngle;                                      // 0x660(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          MaxClimbAngle;                                     // 0x698(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRelativeDirectionData                LaunchDirection;                                   // 0x6D0(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRelativeDirectionData                MovingLaunchDirection;                             // 0x720(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          LaunchAngle;                                       // 0x770(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LocationOffset;                                    // 0x7A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeapApexAngle;                                     // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeapStartLandingOffsetTime;                        // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction>                StartAction;                                       // 0x7B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                StopAction;                                        // 0x7C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                LeapApexAction;                                    // 0x7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                LeapLandingAction;                                 // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitWallAngle;                                      // 0x7D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportOffset;                                    // 0x7DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECMTeleportPreferenceType         TeleportLocationPreference;                        // 0x7E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          LimitedTargetControlDistance;                      // 0x7E8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          TargetControlVelocity;                             // 0x820(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          TargetControlDelay;                                // 0x858(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxTrackingCorrectionAngle;                        // 0x890(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrackingVelocity;                                  // 0x894(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxCharacter*                         ControlledCharacter;                               // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlledMove* GetDefaultObj();

	void OnTeleported(float MoveDuration, struct FVector& PreTeleportLocation);
	void OnTargetLocationChanged(struct FVector& NewTargetLocation);
	void OnStop(bool bInterrupted);
	void OnStart(float MoveDuration, class AActor* TargetActor);
	void OnServerStop(bool bInterrupted);
	void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
	void OnHitWorld(class AActor* HitActor, struct FVector& HitNormal);
	void OnHitTargetable(class AActor* HitActor, struct FVector& HitNormal);
};

// 0x350 (0x4C8 - 0x178)
// Class GbxGameSystemCore.GbxCustomizationComponent
class UGbxCustomizationComponent : public UActorComponent
{
public:
	uint8                                        Pad_1EDF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCustomizationColorEntry>      ColorCustomizationParameters;                      // 0x180(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationLinkedParameterEntry> SharedLinkedParameters;                            // 0x190(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationLinkedParameterEntry> LinkedParameters;                                  // 0x1A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGbxCustomizationComponentInitSourceType CustomizationSourceInitType;                       // 0x1B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomizationTextureInheritanceSettings TextureInheritanceSettings;                        // 0x1B8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct FGbxCustomizationContainer            CustomizationList;                                 // 0x1F0(0xD8)(Net, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationColorApplication> CustomColorSelections;                             // 0x2C8(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic)
	TMap<class UGbxCustomizationTargetData*, struct FCustomizationCustomTextureDataList> CustomTextures;                                    // 0x2D8(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UGbxCustomizationMorphTargetSetData*> MorphTargetSets;                                   // 0x328(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationCustomFloatEntry> CustomFloats;                                      // 0x338(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bPreservePrimaryMeshTemplateScale;                 // 0x348(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CustomFloatValues;                                 // 0x350(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic)
	bool                                         bAllowCustomizationSuppression;                    // 0x360(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxCustomizationTypeData*>     SuppressedCustomizationTypes;                      // 0x368(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                          SuppressedCustomFloats;                            // 0x378(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F08[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCustomizationApplied;                            // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCustomizationRemoved;                            // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGbxCustomizationComponent*            LinkedCustomizationSource;                         // 0x408(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UMeshComponent*, struct FMaterialArray> CustomMaterials;                                   // 0x410(0x50)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseCustomMaterials;                               // 0x460(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F16[0x67];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCustomizationComponent* GetDefaultObj();

	void ServerSetCustomFloat(int32 Index, float Value);
	void ServerSetAllowCustomizationSuppression(bool bNewAllowCustomizationSuppression);
	void ServerApplyCustomizationData(class UGbxCustomizationData* CustomizationToApply, int32 OptionalCustomizationId);
	void ServerApplyCustomizationCollection(class UGbxCustomizationCollectionData* CollectionToApply);
	void ServerApplyCustomColor(int32 CustomColorIndex, const struct FLinearColor& InAppliedColor, const struct FLinearColor& InSplitColor, bool InUseDefaultColor, bool InUseDefaultSplitColor);
	bool RemoveCustomization(class UGbxCustomizationData* Customization);
	void RemoveAllCustomizations();
	void PostApplyCustomization();
	void OnRep_CustomFloats();
	void OnRep_CustomColorSelections();
	void OnRep_AllowCustomizationSuppression();
	void LinkToCustomization(class UGbxCustomizationComponent* SourceComponent);
	void LinkedCustomizationRemoved(class UGbxCustomizationData* Customization);
	void LinkedCustomizationApplied(class UGbxCustomizationData* Customization);
	bool IsCustomizationApplied(class UGbxCustomizationData* Customization);
	void Initialize();
	bool GetDefaultCustomSplitColor(int32 SelectionIndex, struct FLinearColor* DefaultSplitColor);
	bool GetDefaultCustomColor(int32 SelectionIndex, struct FLinearColor* DefaultColor);
	TArray<class UGbxCustomizationData*> GetAppliedCustomizations();
	void CopyFromCustomization(class UGbxCustomizationComponent* SourceComponent);
};

// 0x178 (0x1A8 - 0x30)
// Class GbxGameSystemCore.GbxCustomizationData
class UGbxCustomizationData : public UGbxDataAsset
{
public:
	class FText                                  CustomizationName;                                 // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  CustomizationDescription;                          // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        CustomizationSortPriority;                         // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x68(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUIStatPriorityData>           UIStats;                                           // 0x90(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                ItemCardTypeFrameName;                             // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture>               PreviewImage;                                      // 0xB0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          PurchasePrice;                                     // 0xD8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxCustomizationTypeData*             CustomizationType;                                 // 0x110(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationAssetEntry>      CustomizationTargetAssets;                         // 0x118(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCustomizationCustomFloatOverrideEntry> CustomFloatOverrides;                              // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUnlockedByDefault;                                // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEquippedByDefault;                                // 0x139(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSellItemIfNotOwned;                            // 0x13A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDropItemIfNotOwned;                            // 0x13B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCustomizationData*                 DefaultSkin;                                       // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCustomizationData*                 DependentBody;                                     // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxCustomizationData*>         Dependencies;                                      // 0x150(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UGbxCustomizationData*>         AlternateIfDependenciesNotMet;                     // 0x160(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UGbxCustomizationTypeData*>     CustomizationTypesToSuppress;                      // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          CustomFloatsToSuppress;                            // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsBigHat;                                         // 0x190(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202F[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCustomizationData* GetDefaultObj();

	bool RemoveCustomizationFromActor(class AActor* TargetActor);
	void OnCustomizationAssetLoaded();
	class UGbxAction* K2_PlayAction(class AActor* TargetActor, struct FActionState_Base& ActionData);
	bool IsLoading();
	bool IsLoaded(int32 OptionalCustomizationId);
	void AsyncLoadCustomizationAssets(UDelegateProperty_& LoadedDelegate);
	bool ApplyCustomizationToActor(class AActor* TargetActor, int32 OptionalCustomizationId);
};

// 0x18 (0x470 - 0x458)
// Class GbxGameSystemCore.GbxCustomizationManager
class AGbxCustomizationManager : public AActor
{
public:
	TArray<struct FCustomizationStreamingEntry>  CustomizationStreamingEntries;                     // 0x458(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_204D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxCustomizationManager* GetDefaultObj();

	void OnCustomizationAssetLoaded();
};

// 0x70 (0xA0 - 0x30)
// Class GbxGameSystemCore.GbxCustomizationTypeData
class UGbxCustomizationTypeData : public UGbxDataAsset
{
public:
	class FText                                  CustomizationTypeName;                             // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  CustomizationTypeDescription;                      // 0x48(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUnique;                                           // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2065[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCustomizationTypeData*             DependentCustomizationType;                        // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCustomizationTargetData*           DependentCustomizationTarget;                      // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UGameStatData>          AssociatedUnlockStat;                              // 0x78(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxCustomizationTypeData* GetDefaultObj();

};

// 0x50 (0x1C8 - 0x178)
// Class GbxGameSystemCore.DamageBaseComponent
class UDamageBaseComponent : public UActorComponent
{
public:
	class UTeamComponent*                        CachedTeamComponent;                               // 0x178(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetableComponent*                  CachedTargetableComponent;                         // 0x180(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRegisteredConditionalDamageValueModifier> ConditionalValueModifiers;                         // 0x188(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FRegisteredConditionalDamageCriticalModifier> ConditionalCritModifiers;                          // 0x198(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FRegisteredConditionalDamageTypeModifier> ConditionalTypeModifiers;                          // 0x1A8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FRegisteredConditionalHitRegionModifier> ConditionalHitRegionModifiers;                     // 0x1B8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDamageBaseComponent* GetDefaultObj();

};

// 0x1A0 (0x368 - 0x1C8)
// Class GbxGameSystemCore.DamageCauserComponent
class UDamageCauserComponent : public UDamageBaseComponent
{
public:
	uint8                                        Pad_2147[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCausedAnyDamage;                                 // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCausedBonusDamage;                               // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCausedMeleeDamage;                               // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCausedMeleeFinisher;                             // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCausedDeath;                                     // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCausedMeleeDeath;                                // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2157[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCausedHealing;                                   // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHitFriendly;                                     // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EDamageCausedModificationStrategy DefaultModificationContextStrategy;                // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttitudeDamageRules                  AttitudeDamageRules;                               // 0x284(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCanHurtSelf;                                      // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2163[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    StatusEffectChanceModifierScalar;                  // 0x28C(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    StatusEffectDamageModifierScalar;                  // 0x298(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    StatusEffectDurationModifierScalar;                // 0x2A4(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatusEffectModifiers>        StatusEffectModifiers;                             // 0x2B0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseRootInstigatorForStatusEffects;                // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2176[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    DamageDealtMultiplier;                             // 0x2C4(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    RadiusDamage_RadiusMultiplier;                     // 0x2D0(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    RadiusDamage_DamageMultiplier;                     // 0x2DC(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeInteger                  ShouldIgnoreEnemyElementalResistance;              // 0x2E8(0xC)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyInstigatorSkillDamageModifier;               // 0x2F4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    DefaultCriticalHitMultiplier;                      // 0x2F8(0xC)(Edit, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2181[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCritSourceModifiers>          SourceCritDamageModifiers;                         // 0x308(0x10)(Edit, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    DefaultCriticalHitChance;                          // 0x318(0xC)(Edit, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2186[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCritSourceModifiers>          SourceCritChanceModifiers;                         // 0x328(0x10)(Edit, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UConditionalDamageModifier*>    DefaultConditionalDamageModifiers;                 // 0x338(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        EnemyReflectionChance;                             // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2190[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReflectedDamageParams                EnemyReflectionParams;                             // 0x350(0x18)(NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageCauserComponent* GetDefaultObj();

	void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	struct FCritSourceModifiers GetCritModifierTotals(TSubclassOf<class UDamageSource> DamageSource, enum class ECritType CritType, float* ModifierTotal);
	struct FCritSourceModifiers GetCritModifiersForSource(TSubclassOf<class UDamageSource> DamageSource, enum class ECritType CritType, float* ModifierTotal);
	struct FCritSourceModifiers FindCritModifier(TSubclassOf<class UDamageSource> DamageSource, enum class ECritType CritType);
};

// 0x6B0 (0x878 - 0x1C8)
// Class GbxGameSystemCore.DamageComponent
class UDamageComponent : public UDamageBaseComponent
{
public:
	uint8                                        Pad_24E1[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnTakeAnyDamage;                                   // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerMeleeHit;                                  // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTakeAnyHealing;                                  // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHealthDepleted;                                  // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_24EA[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDeath;                                           // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_24ED[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnHitByFriendly;                                   // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F2[0x130];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnHitReaction;                                     // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FHitReactionState                     HitReactions;                                      // 0x3D0(0x290)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bShowDamageNumbers : 1;                            // Mask: 0x1, PropSize: 0x10x660(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowImmuneFeedbackInGodMode : 1;                  // Mask: 0x2, PropSize: 0x10x660(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysBlockWeapons : 1;                           // Mask: 0x4, PropSize: 0x10x660(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreDamageAreaVisibilityChecks : 1;             // Mask: 0x8, PropSize: 0x10x660(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDieWhenHealthDepleted : 1;                        // Mask: 0x10, PropSize: 0x10x660(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C8 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2511[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDeathData*                            DeathData;                                         // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageComponentHealthMode        HealthMode;                                        // 0x670(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2512[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHealthType>                   HealthInformation;                                 // 0x678(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSimpleHealthInfo                     SimpleHealthInformation;                           // 0x688(0x58)(Edit, Net, DisableEditOnInstance, RepNotify, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    DamageTakenMultiplier;                             // 0x6E0(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    RadiusDamageTakenMultiplier;                       // 0x6EC(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    StatusEffectChanceModifierScalar;                  // 0x6F8(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    StatusEffectDamageModifierScalar;                  // 0x704(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    StatusEffectDurationModifierScalar;                // 0x710(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2519[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatusEffectModifiers>        StatusEffectModifiers;                             // 0x720(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinimumDamageLaunchVelocity;                       // 0x730(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseBoundForCylinderTest : 1;                      // Mask: 0x1, PropSize: 0x10x734(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseComplexDamageAreaTargetTest : 1;               // Mask: 0x2, PropSize: 0x10x734(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C9 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LaunchVerticalDampening;                           // 0x738(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSelfInflictedLaunchVelocity;                    // 0x73C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           SplatterEffect;                                    // 0x740(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseProtectionTimer;                               // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSyncedHitReactionData                DeathHitReaction;                                  // 0x750(0x40)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2530[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageGoreModifiers                  DeathGoreModifiers;                                // 0x794(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2534[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     LastHitByPlayer;                                   // 0x7A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AvertDeathChance;                                  // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        IntrinsicArmor;                                    // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxAttributeFloat                    SelfReflectionChance;                              // 0x7B0(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxAttributeFloat                    SelfReflectionDamageTakenScale;                    // 0x7BC(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxAttributeFloat                    SelfReflectionDamageScale;                         // 0x7C8(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxAttributeInteger                  SelfReflectionTowardsAttacker;                     // 0x7D4(0xC)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxDamageType>            SelfReflectionDamageType;                          // 0x7E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bPassDamageToParent : 1;                           // Mask: 0x1, PropSize: 0x10x7E8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDamageOnlyAppliesToParent : 1;                    // Mask: 0x2, PropSize: 0x10x7E8(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCanDamageCorpse : 1;                              // Mask: 0x4, PropSize: 0x10x7E8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_CD : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_254F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UConditionalDamageModifier*>    DefaultConditionalDamageModifiers;                 // 0x7F0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FDamageReactionEvent_DamageComponent> DamageEvents;                                      // 0x800(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UHitRegionComponent*                   CachedHitRegionComponent;                          // 0x810(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDamageComponent*                      ParentDamageComponent;                             // 0x818(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AController*                           LastHitBy;                                         // 0x820(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2558[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bGodMode : 1;                                      // Mask: 0x1, PropSize: 0x10x840(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDemigodMode : 1;                                  // Mask: 0x2, PropSize: 0x10x840(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_CE : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bCurrentlyDead : 1;                                // Mask: 0x8, PropSize: 0x10x840(0x1)(Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_CF : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2561[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     ImpactPhysicalMaterialOverride;                    // 0x868(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSuppressOnDeathCall;                              // 0x870(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2564[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDamageComponent* GetDefaultObj();

	void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void SetSelfReflectedDamageType(TSubclassOf<class UGbxDamageType>& DamageType);
	void SetGodMode(bool bInGodMode);
	void SetDemiGodMode(bool bInDemiGodMode);
	void SetCurrentShield(float NewCurrentShield);
	void SetCurrentHealth(float NewCurrentHealth);
	void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void ReceiveHealthDepleted(class UDamageCauserComponent* DamageCauser);
	void ReceiveAnyHealing(float Healing, class AActor* HealInstigator, class UDamageSource* DamageSource, class UDamageType* DamageType);
	void ReceiveAnyDamage(float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details);
	void OnRep_SimpleHealthInformation();
	void OnRep_HealthInformation();
	void OnRep_DeathHitReaction();
	void OnRep_bCurrentlyDead();
	void OnOwnerExperienceLevelChanged(int32 OldExperienceLevel, int32 NewExperienceLevel);
	void OnHealthResourceNowNotDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void OnHealthResourceNowDepleted(const struct FGameResourcePoolReference& ResourcePool);
	bool IsInGodMode();
	bool IsInDemiGodMode();
	bool IsDamageOverkill(float DamageAmount, float OverkillThreshold);
	void GetValidDamageEventFunctionNames(TArray<class FName>* Names);
	float GetTotalMaxHealth();
	float GetMaxShield();
	float GetMaxHealth();
	float GetCurrentShield();
	float GetCurrentHealthPercent();
	float GetCurrentHealth();
	void BroadcastPlayImpactSplatterEffect(class UImpactData* ImpactData, const struct FVector_NetQuantize100& HitLocation, const struct FVector_NetQuantizeNormal& HitDirection, float DamageSeverity);
};

// 0x70 (0x98 - 0x28)
// Class GbxGameSystemCore.DamageFilter
class UDamageFilter : public UObject
{
public:
	bool                                         bExactDamageSourceClass;                           // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExactDamageTypeClass;                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxCondition*                         ConditionSelf;                                     // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxCondition*                         ConditionAttacker;                                 // 0x50(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOnlyAoEDamage : 1;                                // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bMustNotBeSelfDamage : 1;                          // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseRandomChance : 1;                              // Mask: 0x4, PropSize: 0x10x58(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_D4 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_25C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          RandomChance;                                      // 0x60(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageFilter* GetDefaultObj();

};

// 0x220 (0x250 - 0x30)
// Class GbxGameSystemCore.DamageGlobalsData
class UDamageGlobalsData : public UGbxDataAsset
{
public:
	struct FProtectionTimerSettings              ProtectionTimerSettings;                           // 0x30(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_25E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DefaultInstigatorSelfDamageScale;                  // 0x40(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             SelfDamageSource;                                  // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DefaultHealingDamageType;                          // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           DefaultHealingImpact;                              // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          GlobalAIDamageScale;                               // 0x90(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLevelBasedDamageScale>        PlayerDamageScaleByLevelDifference;                // 0xC8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLevelBasedDamageScale>        AIDamageScaleByLevelDifference;                    // 0xD8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FRuntimeFloatCurve                    SplatterProbabilityCurve;                          // 0xE8(0x78)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FRuntimeFloatCurve                    SplatterTraceDistanceCurve;                        // 0x160(0x78)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        SplatterDirectionSpread;                           // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GibLifeSpan;                                       // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GibCollisionProfileName;                           // 0x1E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GibCollisionProfileNameAttached;                   // 0x1E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          GibMaterialParameterResetList;                     // 0x1F0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FDamageLocalizationSettings> LanguageToTextureMap;                              // 0x200(0x50)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageGlobalsData* GetDefaultObj();

};

// 0x40 (0x1B8 - 0x178)
// Class GbxGameSystemCore.DamageModifierComponent
class UDamageModifierComponent : public UActorComponent
{
public:
	TArray<class UConditionalDamageValueModifier*> ConditionalValueModifiers;                         // 0x178(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UConditionalDamageCriticalModifier*> ConditionalCritModifiers;                          // 0x188(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UConditionalDamageTypeModifier*> ConditionalTypeModifiers;                          // 0x198(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UConditionalDamageHitRegionModifier*> ConditionalHitRegionModifiers;                     // 0x1A8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDamageModifierComponent* GetDefaultObj();

	void UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
	void RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier);
};

// 0x20 (0x48 - 0x28)
// Class GbxGameSystemCore.DamageOverTimeManager
class UDamageOverTimeManager : public UObject
{
public:
	uint8                                        Pad_2682[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDamageOverTimeInstance>       DamageInstances;                                   // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2683[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDamageOverTimeManager* GetDefaultObj();

	void OnParticleSystemStopped(class UParticleSystemComponent* ParticleSystem);
};

// 0x60 (0x88 - 0x28)
// Class GbxGameSystemCore.DamageSource
class UDamageSource : public UObject
{
public:
	struct FDamageModifierAttributeCollection    ModifierAttributes;                                // 0x28(0x10)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          AIInstigatedDamageScale;                           // 0x38(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FDamageSourceHealthTypeModifier> HealthTypeModifiers;                               // 0x70(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bCanCauseCriticals;                                // 0x80(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollectForHitReactions;                           // 0x81(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreCooldown;                                   // 0x82(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoesTrueSelfDamage;                               // 0x83(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDamageSource* GetDefaultObj();

};

// 0xE8 (0x128 - 0x40)
// Class GbxGameSystemCore.GbxDamageType
class UGbxDamageType : public UDamageType
{
public:
	uint8                                        Pad_26C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DamageTypeDisplayName;                             // 0x48(0x18)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DamageEffectVerb;                                  // 0x60(0x18)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DamageTypeBaseDescription;                         // 0x78(0x18)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          DamageColor;                                       // 0x90(0x10)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DamageIconFrameName;                               // 0xA0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHealingType;                                    // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDoT;                                            // 0xB1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InnerDamageRadiusPercent;                          // 0xB4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterDamageRadiusPercent;                          // 0xB8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRadiusDamageScalar;                             // 0xBC(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayTags;                                      // 0xC0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDamageModifierAttributeCollection    ModifierAttributes;                                // 0xE0(0x10)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   OnlyApplyToThisHealthType;                         // 0xF0(0x10)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UStatusEffectData*                     StatusEffectData;                                  // 0x100(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDamageSurfaceModifier>        SurfaceDamageModifiers;                            // 0x108(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UUIStatData*>                   UIStats;                                           // 0x118(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxDamageType* GetDefaultObj();

	bool IsElementalType();
};

// 0x10 (0x38 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_EnvQueryParam
class UEnvQueryContext_EnvQueryParam : public UEnvQueryContext
{
public:
	class FName                                  DefaultBlackboardKeyName;                          // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowsUnboundContext;                              // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26FE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryContext_EnvQueryParam* GetDefaultObj();

};

// 0x3E4 (0x55C - 0x178)
// Class GbxGameSystemCore.FirstPersonComponent
class UFirstPersonComponent : public UActorComponent
{
public:
	TSubclassOf<class AFirstPersonConfigurationData> ConfigData;                                        // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxSkeletalMeshComponent*             Arms;                                              // 0x180(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxSkeletalMeshComponent*             Legs;                                              // 0x188(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FirstPersonRootBone;                               // 0x190(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CameraSocket;                                      // 0x198(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PrimaryHandWeaponSocket;                           // 0x1A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         BaseTransformsAnimation;                           // 0x1A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2741[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CrouchTransitionDuration;                          // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CrouchTransitionEasing;                            // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2745[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FViewLeadingTranslationInfo>   TranslationLeadingList;                            // 0x268(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FViewLeadingTranslationInfo           TranslationLeading;                                // 0x278(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_274D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FViewLeadingRotationInfo>      RotationleadingList;                               // 0x2A8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FViewLeadingRotationInfo              RotationLeading;                                   // 0x2B8(0x3C)(NoDestructor, NativeAccessSpecifierPublic)
	struct FViewLeadingRotationInfo              ZoomRotationLeading;                               // 0x2F4(0x3C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  ZoomRotationSocket;                                // 0x330(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShotOffsetSpeed;                                   // 0x338(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShotOffsetRecoverySpeed;                           // 0x33C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxViewModelImpulseTranslationOffset;              // 0x340(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MaxViewModelImpulseRotationOffset;                 // 0x34C(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       FlinchBlendSpace;                                  // 0x358(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FlinchAnimSlotName;                                // 0x360(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultFlinchBlendInTime;                          // 0x368(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultFlinchBlendOutTime;                         // 0x36C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterruptFlinchBlendInTime;                        // 0x370(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlinchInterruptThreshold;                          // 0x374(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomedFlinchWeight;                                // 0x378(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2778[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnFirstPersonCreated;                              // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_277C[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    ViewModelOffsetList;                               // 0x3C0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_277F[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CurrentShotRotationOffset;                         // 0x400(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2784[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BaseViewModelLocationOffset;                       // 0x410(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2785[0x2C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CreatedFirstPersonComponents;                      // 0x448(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2787[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTrackedFirstPersonComponent>  TopLevelComponents;                                // 0x460(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2788[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              TargetShotRotationOffset;                          // 0x474(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_278A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurrentRelativeLocation;                           // 0x490(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               DefaultTranslationOffset;                          // 0x49C(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_278F[0xB4];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFirstPersonComponent* GetDefaultObj();

	void SetBaseEyeToWeaponTransform(const struct FTransform& NewWeaponTransform);
	class USceneComponent* GetFirstPersonComponentByName(class FName Name);
};

// 0x150 (0x218 - 0xC8)
// Class GbxGameSystemCore.GbxGameInstance
class UGbxGameInstance : public UGameInstance
{
public:
	uint8                                        Pad_27C4[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMenuStash                            MenuStashes[0x4];                                  // 0xE8(0x40)(Transient, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       CharacterMassPresets;                              // 0x128(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            CachedCharacterMassPresets;                        // 0x140(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       ForcePresets;                                      // 0x148(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            CachedForcePresets;                                // 0x160(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       SpawnCostPresets;                                  // 0x168(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            CachedSpawnCostPresets;                            // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCinematicModeData*>            CinematicModeStack;                                // 0x188(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UCinematicModeData*                    CinematicMode;                                     // 0x198(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCinematicModeData*                    ClientOverrideCinematicMode;                       // 0x1A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIGbxProjectileManager*                ProjectileManager;                                 // 0x1A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSharedPickupInventoryActor>   SharedPickupInventoryActors;                       // 0x1B0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_27D9[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        GlobalInputManagerClass;                           // 0x1F8(0x18)(Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGlobalInputManager*                GlobalInputManager;                                // 0x210(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxGameInstance* GetDefaultObj();

	void DebugLoadStartupAssets();
};

// 0x0 (0x548 - 0x548)
// Class GbxGameSystemCore.GbxGameMode
class AGbxGameMode : public AGameMode
{
public:

	static class UClass* StaticClass();
	static class AGbxGameMode* GetDefaultObj();

};

// 0x58 (0x598 - 0x540)
// Class GbxGameSystemCore.GbxGameState
class AGbxGameState : public AGameState
{
public:
	class AChallengeManager*                     ChallengeManager;                                  // 0x540(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameStatsManager*                     StatsManager;                                      // 0x548(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxCustomizationManager*              CustomizationManager;                              // 0x550(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          HostPlayerState;                                   // 0x558(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AImpactDecalManager*                   ImpactDecalManager;                                // 0x560(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 GameInstanceId;                                    // 0x568(0x10)(Net, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GameInstanceTime;                                  // 0x578(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        GameInstanceTimeUpdateRate;                        // 0x57C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class AGbxCustomizationManager>  CustomizationManagerClass;                         // 0x580(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2932[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRepPlayersOnly;                                   // 0x590(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2934[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxGameState* GetDefaultObj();

	void SpawnEmitterAtLocationMulticastImpl(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void SpawnEmitterAtLocationMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void SpawnEmitterAtComponentSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class USceneComponent* Component, class FName Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void SpawnEmitterAtActorSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class AActor* Actor, class FName Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext);
	void PlayImpactMulticast(class UImpactData* ImpactData, class AActor* ImpactInstigator, struct FReplicatedImpactHitResult& HitResult, struct FImpactResponseParams& ResponseParams);
	void PlayHitRegionImpactMulticast(class UHitRegionData* HitRegion, class UImpactData* AudioImpactData, class AActor* ImpactInstigator, struct FReplicatedImpactHitResult& HitResult);
	void OnRep_StatsManager();
	void OnRep_HostPlayerState();
	void OnRep_GameInstanceTime();
	void OnRep_GameInstanceId();
	void OnRep_ChallengeManager();
	void OnRep_bPlayersOnly();
};

// 0x8 (0x328 - 0x320)
// Class GbxGameSystemCore.GbxGameViewportClient
class UGbxGameViewportClient : public UGameViewportClient
{
public:
	class UGbxGlobalInputManager*                GlobalInputManager;                                // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxGameViewportClient* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class GbxGameSystemCore.GlobalAIData
class UGlobalAIData : public UGbxDataAsset
{
public:
	struct FGameplayTag                          CombatTag;                                         // 0x30(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PassiveTag;                                        // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AITimeToRememberDirectAttacks;                     // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AITimeToRememberNonAttackingEnemies;               // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AITimeToRememberHiddenEnemies;                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2975[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitReactionTag*                       JumpHitReactionDeathOverride;                      // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHitReactionLayer>         JumpHitLiveReactionLayer;                          // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceOfPlayingFirstNoticerAggroAnimation;         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceOfPlayingSecondNoticerAggroAnimation;        // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVariableAccuracy;                              // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          TimeToBestAccuracy;                                // 0x70(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          DamagePctToWorstAccuracy;                          // 0xA8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          DamagePctDecayRate;                                // 0xE0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinAccuracy;                                       // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2986[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalAIData* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GbxGameSystemCore.GbxGlobalInputManager
class UGbxGlobalInputManager : public UObject
{
public:
	uint8                                        Pad_2992[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGlobalInputManager* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class GbxGameSystemCore.GbxGlobalsData
class UGbxGlobalsData : public UGbxDataAsset
{
public:
	TSoftObjectPtr<class UDamageGlobalsData>     DamageGlobalsData;                                 // 0x30(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGameplayGlobals*                   GameplayGlobals;                                   // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UStatusEffectGlobalsData> StatusEffectGlobals;                               // 0x60(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAssetMappingData*                     AssetMapping;                                      // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxGlobalsData* GetDefaultObj();

};

// 0x38 (0x1B0 - 0x178)
// Class GbxGameSystemCore.HitRegionComponent
class UHitRegionComponent : public UActorComponent
{
public:
	uint8                                        Pad_2A30[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitRegionData*                        DefaultHitRegion;                                  // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FHitRegionState>               HitRegions;                                        // 0x188(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A31[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CachedMesh;                                        // 0x1A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDamageComponent*                      CachedDamageComponent;                             // 0x1A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHitRegionComponent* GetDefaultObj();

	void TriggerClientEvent(struct FDamageReactionEventSummary& EventSummary);
	void GetValidDamageEventFunctionNames(TArray<class FName>* Array);
	void GetValidAssociatedComponentNames(TArray<class FName>* Array);
	float GetHitRegionPercentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	float GetHitRegionMaxHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	float GetHitRegionCurrentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
};

// 0x230 (0x260 - 0x30)
// Class GbxGameSystemCore.HitRegionData
class UHitRegionData : public UGbxDataAsset
{
public:
	class FName                                  HitRegionName;                                     // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          BoneNames;                                         // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bCanEverTakeRadiusDamage : 1;                      // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCriticalHit : 1;                                  // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowRadiusDamage : 1;                            // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBlockAreaDamage : 1;                        // Mask: 0x8, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowRadiusDamageToBeConvertedToImpactDamage : 1; // Mask: 0x10, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTrackDamage : 1;                                  // Mask: 0x20, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D7 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2A4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitRegionHealthParams                HealthParams;                                      // 0x50(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseDamageScale;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageScale;                                       // 0x70(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowDamageNumbers;                                // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanReflect;                                       // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A51[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReflectionChance;                                  // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanRicochet;                                      // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RicochetChance;                                    // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRicochetIfReflectionFails;                        // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyReflectToAttacker;                            // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A57[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReflectionAccuracyModifier;                        // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingReflectedDamageScale;                      // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutgoingReflectedDamageScale;                      // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableBulletMagnetism;                           // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BulletMagnetismOverrideBoneNames;                  // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideImpactEffect;                             // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultImpactAudio;                            // 0xE1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A62[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactResponseEffect                 EffectOverride;                                    // 0xF0(0x140)(Edit, NativeAccessSpecifierPublic)
	bool                                         bPlayImactEffectWithNoDamage;                      // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoSplatterEffect;                                 // 0x231(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A65[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           SplatterEffect;                                    // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       CustomDamageNumberParticleSystem;                  // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCountsForFullyAimingAtTargetTest;                 // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableHitReactions;                              // 0x249(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x250(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDamageSurfaceType                DefaultDamageSurface;                              // 0x258(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2A71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHitRegionData* GetDefaultObj();

};

// 0x100 (0x130 - 0x30)
// Class GbxGameSystemCore.ActorPartData
class UActorPartData : public UGbxDataAsset
{
public:
	class UEnum*                                 PartTypeEnum;                                      // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        PartType;                                          // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2AD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGestaltData*                          GestaltData;                                       // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GestaltMeshPartName;                               // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          AdditionalGestaltMeshPartNames;                    // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FMultiSelectionGestaltPartNameData> MultiSelectionGestaltPartNames;                    // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          MinGameStage;                                      // 0x70(0x38)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          MaxGameStage;                                      // 0xA8(0x38)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UActorPartData*>                Dependencies;                                      // 0xE0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	bool                                         bAllDependencies;                                  // 0xF0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2AEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                Excluders;                                         // 0xF8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2AF5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                RuntimeDependencies;                               // 0x110(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UActorPartData*>                RuntimeExcluders;                                  // 0x120(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UActorPartData* GetDefaultObj();

	void EnumeratePossibleExcluders(TArray<class UActorPartData*>* OutPartList);
	void EnumeratePossibleDependencies(TArray<class UActorPartData*>* OutPartList);
	void EnumerateOtherParts(TArray<class UActorPartData*>* OutPartList);
	void EnumerateGestaltMeshPartNames(TArray<class FName>* OutPartNameList);
};

// 0x20 (0xD0 - 0xB0)
// Class GbxGameSystemCore.DataTableAttributeValueResolver
class UDataTableAttributeValueResolver : public UAttributePropertyValueResolver
{
public:
	struct FDataTableRowHandle                   DataTableRow;                                      // 0xB0(0x10)(Edit, DisableEditOnTemplate, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FString                                DataTableColumn;                                   // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDataTableAttributeValueResolver* GetDefaultObj();

	void GetDataTableColumnNames(TArray<class FString>* ValueNames);
};

// 0x8 (0xD8 - 0xD0)
// Class GbxGameSystemCore.DataTableFunctionAttributeValueResolver
class UDataTableFunctionAttributeValueResolver : public UDataTableAttributeValueResolver
{
public:
	class UScriptStruct*                         DataTableStruct;                                   // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDataTableFunctionAttributeValueResolver* GetDefaultObj();

	struct FDataTableRowHandle GetDataTableRow(class UObject* Context);
};

// 0x210 (0x240 - 0x30)
// Class GbxGameSystemCore.LadderInteractData
class ULadderInteractData : public UGbxDataAsset
{
public:
	float                                        RequiredViewAlignment;                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequiredRearViewAlignment;                         // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanMountLadderFromTopWhileFacing;                 // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxVerticalSpeedToGrabLadder;                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        JumpRegrabDelay;                                   // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopEnterAnimSyncTime;                              // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopExitAnimSyncTime;                               // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExitLocationDepthOffset;                           // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExitingTopThresholdHeightOffset;                   // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnteringTopTargetHeightOffset;                     // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnteringTopFeetToLadderThreshold;                  // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    LadderTopMountCurveHorz;                           // 0x60(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    LadderTopMountCurveVert;                           // 0xD8(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    LadderTopDismountCurveHorz;                        // 0x150(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    LadderTopDismountCurveVert;                        // 0x1C8(0x78)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULadderInteractData* GetDefaultObj();

};

// 0x0 (0x178 - 0x178)
// Class GbxGameSystemCore.NavComponent
class UNavComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UNavComponent* GetDefaultObj();

};

// 0x4F0 (0x1440 - 0xF50)
// Class GbxGameSystemCore.GbxSkeletalMeshComponent
class UGbxSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	uint8                                        Pad_2C8A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class USkeletalMeshComponent> ParentAnimationComponent;                          // 0xF58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C8C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGestaltPartListData*                  GestaltPartList;                                   // 0xF68(0x8)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReplicateGestalt;                                 // 0xF70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGestaltPartData_Mesh*>         GestaltMeshParts;                                  // 0xF78(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FReplicatedGestaltPartsData           ReplicatedGestaltParts;                            // 0xF88(0x18)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	int32                                        GestaultSeed;                                      // 0xFA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowDynamicallyAddedForwardDynamicsNodes;        // 0xFA4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneModInstance>              BoneModInstances;                                  // 0xFA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C91[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStretchBonesInstance>         StretchBonesInstances;                             // 0xFC0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C93[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxBoneModifyProfile*                 BoneModifyProfile;                                 // 0xFD8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateBoneMods;                                // 0xFE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneModifyProfileData                BoneModifyProfileData;                             // 0xFE8(0x18)(Edit, Net, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C97[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastUpdateTime;                                    // 0x1008(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBMPOverride>                  CachedGlobalBMP;                                   // 0x1010(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UGlobalBoneModifyProfileState*> GlobalBMPRepArray;                                 // 0x1020(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic)
	float                                        NoBodyMass;                                        // 0x1030(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpulseMultiplier;                                 // 0x1034(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C9A[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           DefaultImpactData;                                 // 0x1090(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UImpactData*>        BodyImpactDataOverrides;                           // 0x1098(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGbxCustomizationTargetData*>   CustomizationTargets;                              // 0x10E8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FStretchAnimData                      StretchAnimData;                                   // 0x10F8(0x1E0)(Transient, NativeAccessSpecifierPublic)
	class UGbxAnimBlueprintProfile*              AnimBPProfile;                                     // 0x12D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGaitScalingOverride;                              // 0x12E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGaitScalingSettings                  GaitScalingSettings;                               // 0x12E8(0x38)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA2[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseAggregateSimulationSleepCheck;                 // 0x1338(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AggregateSimulationSleepCheckSeconds;              // 0x133C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AggregateSimulationSleepCheckDistance;             // 0x1340(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CA7[0x44];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimUpdateRateParameters             UpdateRateParametersOverride;                      // 0x1388(0x88)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bOverrideUpdateRateParameters;                     // 0x1410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2CA9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAnimPoseMatch                     PoseMatch;                                         // 0x1420(0x20)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxSkeletalMeshComponent* GetDefaultObj();

	void ShowGestaltMeshParts(TArray<class UGestaltPartData_Mesh*>& Parts, bool bLocalOnly);
	void ShowGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
	void SetUpdateOverrideValues(TArray<float>& UpdateRateOverrides, bool bEnableOverrideProperties);
	void SetParentAnimationComponent(class USkeletalMeshComponent* ParentComponent);
	void SetGestaltPartList(class UGestaltPartListData* NewGestaltPartList);
	void RunPoseTest();
	void OnRep_GlobalBoneMod();
	void OnRep_GestaltMeshParts();
	void LinkSkelMeshAnimInstances(TArray<class USkeletalMeshComponent*>& InLinkedSkelMeshComponents);
	void LinkSkelMeshAnimInstance(class USkeletalMeshComponent* InLinkedSkelMeshComponent);
	bool IsGestaltMeshPartVisible(class UGestaltPartData_Mesh* GestaltMeshPart);
	bool IsCustomizationTargetFor(class UGbxCustomizationTargetData* TargetToTest);
	void HideGestaltMeshParts(TArray<class UGestaltPartData_Mesh*>& Parts, bool bLocalOnly);
	void HideGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly);
	TArray<float> GetUpdateOverrideValues();
	void GetAvailableBoneNames(TArray<class FName>* Array);
	void CopyGestaltPartList(class AActor* GestaltPartListSource);
};

// 0x270 (0x648 - 0x3D8)
// Class GbxGameSystemCore.PawnAttachSlotComponent
class UPawnAttachSlotComponent : public UUsableComponent
{
public:
	UMulticastDelegateProperty_                  OnAttachStarted;                                   // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAttachFinished;                                  // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDetachStarted;                                   // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDetachFinished;                                  // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAttachStateChanged;                              // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FPawnAttachSlotState                  AttachState;                                       // 0x428(0x40)(Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FPawnSceneAttachmentInfo              PersistentAttachInfo;                              // 0x468(0x28)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGbxAction>                PersistentPawnAction;                              // 0x490(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAttachSlotAnimSet>            AnimSets;                                          // 0x498(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FPawnAttachmentTransition             AttachTransition;                                  // 0x4A8(0x48)(Deprecated, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FPawnAttachmentTransition             DetachTransition;                                  // 0x4F0(0x48)(Deprecated, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bManualAttachTransitionDuration;                   // 0x538(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEvaluateAttachTransitionBeforeModifyingPawn;      // 0x539(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DA3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPawnAttachTransition>         AttachTransitions;                                 // 0x540(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bOffsetFallbackDetachLocationByActorHeight;        // 0x550(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseBaseOwnerLocationForSafeLocationTrace;         // 0x551(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseBaseOwnerLocationForFallbackDetachLocation;    // 0x552(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DAD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPawnDetachTransition>         DetachTransitions;                                 // 0x558(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	enum class EAttachmentPossessionRule         PossessionRule;                                    // 0x568(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPossessWhenAttachmentStarts;                      // 0x569(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestorePossessionWhenDetachStarts;                // 0x56A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DBA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsHijackable : 1;                                 // Mask: 0x1, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanHijackPlayer : 1;                              // Mask: 0x2, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanHijackFriendly : 1;                            // Mask: 0x4, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCanBeUsedByPlayers : 1;                           // Mask: 0x8, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceUntargetable : 1;                            // Mask: 0x10, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceGodMode : 1;                                 // Mask: 0x20, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceHidden : 1;                                  // Mask: 0x40, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceNoCollision : 1;                             // Mask: 0x80, PropSize: 0x10x56C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableHitReaction : 1;                           // Mask: 0x1, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCollideDuringTransitions : 1;                     // Mask: 0x2, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bMirrorTeam : 1;                                   // Mask: 0x4, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceUnCrouch : 1;                                // Mask: 0x8, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreCollisionWithBase : 1;                      // Mask: 0x10, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBaseIgnoreCollisionWithPawn : 1;                  // Mask: 0x20, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bForceSkeletalOptimizations : 1;                   // Mask: 0x40, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableDelayRootMotionOneFrameDuringDetach : 1;   // Mask: 0x80, PropSize: 0x10x56D(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableOverlapOptimization : 1;                   // Mask: 0x1, PropSize: 0x10x56E(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_E3 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2DEB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bGenerateOverlapEventOnDetach;                     // 0x570(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DEF[0xD7];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPawnAttachSlotComponent* GetDefaultObj();

	void SetPersistentAttachSocketName(class FName SocketName);
	void SetDetachabilityLocked(bool bLock, class FName Reason);
	void RequestDetachPawn();
	void OnRep_AttachState();
	void ManuallyFinishAttach();
	bool IsOccupied(bool bIncludeDetaching);
	void HandleActorDestroyed(class AActor* Actor);
	struct FTransform GetPersistentAttachSocketTransform();
	class APawn* GetOccupant(bool bIncludeDetaching);
	enum class EPawnAttachStatus GetAttachStatus();
	void DetachPawn(bool bInstant, bool bSkipPlacement);
	void AttachPawn(class APawn* AttachingPawn, bool bInstant);
};

// 0xB0 (0x478 - 0x3C8)
// Class GbxGameSystemCore.GbxPlayerInput
class UGbxPlayerInput : public UPlayerInput
{
public:
	uint8                                        Pad_2E10[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxPlayerInput* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class GbxGameSystemCore.GbxProfile
class UGbxProfile : public USaveGame
{
public:
	uint8                                        Pad_2E1E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDisplayVehicleSpeedAsMPH;                         // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAimAssist;                                  // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGamepadInvertLook;                                // 0x2B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGamepadInvertTurn;                                // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGamepadInvertMove;                                // 0x2D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGamepadInvertStrafe;                              // 0x2E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMouseAcceleration;                          // 0x2F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableGamepadInput;                               // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseClassicGamepadInput;                           // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableVibration;                                  // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableTriggerFeedback;                            // 0x33(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGbxGlyphSetOption                GlyphMode;                                         // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInvertMousePitch;                                 // 0x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMouseSmoothing;                             // 0x36(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E46[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MouseScale;                                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowDamageNumbers;                                // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowDamageNumberIcons;                            // 0x3D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableTrainingMessages;                           // 0x3E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E4E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCenterCrosshair;                                  // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bToggleSprint;                                     // 0x41(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bToggleCrouch;                                     // 0x42(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCensorContent;                                    // 0x43(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MasterVolume;                                      // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MusicVolume;                                       // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SoundEffectsVolume;                                // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VOVolume;                                          // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VoiceVolume;                                       // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableOptionalVO;                                 // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPushToTalk;                                       // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableControllerAudio;                            // 0x5A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E65[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpeakerAngleFront;                                 // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeakerAngleSide;                                  // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpeakerAngleBack;                                  // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpeakerSetup                     SpeakerSetup;                                      // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMuteAudioOnFocusLoss;                             // 0x69(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableWindowsSpatialAudio;                        // 0x6A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E76[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OverrideAudioLanguage;                             // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGraphicsMode                     GraphicsMode;                                      // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseFOV;                                           // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseVehicleFOV;                                    // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideStrictNATHelpDialog;                          // 0x8C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HudScaleMultiplier;                                // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerInputBindings                  PlayerInputBindings;                               // 0x98(0x10)(Protected, NativeAccessSpecifierProtected)
	bool                                         bShowTextChat;                                     // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint32>                               NewsHashes;                                        // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint32                                       LastUsedSavegameId;                                // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E95[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxProfile* GetDefaultObj();

};

// 0x18 (0x470 - 0x458)
// Class GbxGameSystemCore.RadiusDamageReplicationManager
class ARadiusDamageReplicationManager : public AActor
{
public:
	uint8                                        Pad_2F22[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARadiusDamageReplicationManager* GetDefaultObj();

	void Multicast_StopRadiusEffect(class AActor* ContextActor, TSubclassOf<class UDamageData> DamageData, bool bStopAllForContext, bool bContextIsSourceActor);
	void Multicast_ProcessRadiusRequest(class AActor* ContextActor, TSubclassOf<class UDamageData> DamageData, TSubclassOf<class UGbxDamageType> DamageType, float Radius, const struct FVector_NetQuantize& Location, float Damage, class UExplosionData* ExplosionData, class UParticleSystem* DefaultParticles, class UWwiseEvent* DefaultAudioEvent, class UImpactData* DefaultImpactData, const struct FGbxSignificanceEvent& SignificanceEvent, float Force, class AActor* SourceActor);
};

// 0x1E0 (0x358 - 0x178)
// Class GbxGameSystemCore.RecentDamageTrackingComponent
class URecentDamageTrackingComponent : public UActorComponent
{
public:
	class AGbxPlayerController*                  PlayerController;                                  // 0x178(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRecentlyCausedDamageInstance         RecentlyCausedDamageInstances[0x6];                // 0x180(0x1B0)(Net, Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F45[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFeedbackData*>                 InstigatedFeedbacks;                               // 0x348(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URecentDamageTrackingComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxSaveGame
class UGbxSaveGame : public USaveGame
{
public:

	static class UClass* StaticClass();
	static class UGbxSaveGame* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class GbxGameSystemCore.SaveGameChannel
class USaveGameChannel : public UChannel
{
public:
	TScriptInterface<class ISaveGameActorInterface> SaveGameActor;                                     // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F66[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USaveGameChannel* GetDefaultObj();

};

// 0xF0 (0x220 - 0x130)
// Class GbxGameSystemCore.GbxSignificanceManager
class UGbxSignificanceManager : public USignificanceManager
{
public:
	uint8                                        Pad_2F83[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedInterp>                 WeightInterps;                                     // 0x198(0x10)(ZeroConstructor, Transient, Config, NativeAccessSpecifierPrivate)
	TArray<struct FCachedInterp>                 BucketInterps;                                     // 0x1A8(0x10)(ZeroConstructor, Transient, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F89[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxSignificanceManager* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxGameSystemCore.GbxSingletons
class UGbxSingletons : public UObject
{
public:
	class UAsyncExplosionImpactManager*          ExplosionImpactManager;                            // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxFeedbackManager*                   FeedbackManager;                                   // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxSingletons* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.StanceDataSelector
class UStanceDataSelector : public UStanceDataProvider
{
public:
	TArray<struct FConditionalStance>            StancePriorityList;                                // 0x30(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UStanceDataProvider*                   DefaultStanceProvider;                             // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UStanceDataSelector* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.StatusEffectGlobalsData
class UStatusEffectGlobalsData : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UStatusEffectGlobalsData* GetDefaultObj();

};

// 0xB8 (0x230 - 0x178)
// Class GbxGameSystemCore.StatusEffectManagerComponent
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	uint8                                        Pad_3074[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatusEffectInstanceStack>    InstanceStacks;                                    // 0x180(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3076[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStatusEffectManagerComponent* GetDefaultObj();

	bool RemoveStatusEffectInstance(struct FStatusEffectInstanceReference& Reference);
	bool RemoveStatusEffect(struct FStatusEffectRemoveSpec& Spec);
	struct FStatusEffectQueryResult QueryStatusEffect(struct FStatusEffectQuery& Query);
	struct FStatusEffectInstanceReference AddStatusEffect(struct FStatusEffectSpec& Spec);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.StatusEffectsStatics
class UStatusEffectsStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStatusEffectsStatics* GetDefaultObj();

	bool RemoveStatusEffectInstance(class AActor* Target, struct FStatusEffectInstanceReference& Reference);
	bool RemoveStatusEffect(class AActor* Target, struct FStatusEffectRemoveSpec& RemoveSpec);
	struct FStatusEffectQueryResult QueryStatusEffect(class AActor* Target, struct FStatusEffectQuery& Query);
	struct FStatusEffectInstanceReference AddStatusEffect(class AActor* Target, struct FStatusEffectSpec& Spec);
};

// 0x1A0 (0x3A0 - 0x200)
// Class GbxGameSystemCore.GbxInputComponent
class UGbxInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_310A[0x1A0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxInputComponent* GetDefaultObj();

};

// 0x458 (0x5D0 - 0x178)
// Class GbxGameSystemCore.UseComponent
class UUseComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  UsableChanged;                                     // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ImpactDataChanged;                                 // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  UsabilityChanged;                                  // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHoldUseStopped;                                  // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3249[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ViewDistance;                                      // 0x1D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractDistance;                                  // 0x1DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveInteractionDistance;                          // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VehicleInteractDistance;                           // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VehicleLeaveInteractionDistance;                   // 0x1E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_324D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CachedController;                                  // 0x1F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IUseOwnerInterface>   CachedUseOwner;                                    // 0x1F8(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FUseTraceResult                       PreviousUsableState;                               // 0x208(0x60)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUseTraceResult                       ReplicatedUsableState;                             // 0x268(0x60)(Net, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUseTraceResult                       LocalUsableState;                                  // 0x2C8(0x60)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FUseTraceResult                       EmptyUsableState;                                  // 0x328(0x60)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UUsableComponent*                      LastUsedComponent;                                 // 0x388(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLatentUseState                       LatentUseStates[0x2];                              // 0x390(0x20)(Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3251[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUsableCostCache                      ReplicatedCostCache;                               // 0x3C4(0x10)(Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3253[0x9C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceLock                         CanUseObjectsLock_Replicated;                      // 0x470(0x98)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3255[0xC8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUseComponent* GetDefaultObj();

	void StopUsingCurrentObject(enum class EUsabilityType UseType);
	void StartUsingCurrentObject(enum class EUsabilityType UseType);
	void ServerUseObject(class UUsableComponent* UsableObject, enum class EUsabilityType UseType, bool bHeld);
	void ServerUnfilteredStopUsingObject(class UUsableComponent* UsableObject, enum class EUsabilityType UseType);
	void ServerUnfilteredStartUsingObject(class UUsableComponent* UsableObject, enum class EUsabilityType UseType);
	void ServerStopUsingObject(class UUsableComponent* UsableObject, enum class EUsabilityType UseType);
	void ServerStartUsingObject(class UUsableComponent* UsableObject, enum class EUsabilityType UseType);
	void OnUsedLockedObject__DelegateSignature();
	void OnUsableChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, struct FUsabilityInfo& InUsabilityInfo, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway);
	void OnUsabilityChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, struct FUsabilityInfo& InUsabilityInfo);
	void OnUnableToAffordUsableObject__DelegateSignature(class UUsableComponent* Usable, enum class EUsabilityType UseType, bool bUseHeld);
	void OnImpactDataChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway);
	void OnHoldUseStopped__DelegateSignature();
	class UUsableComponent* GetCurrentUsable();
	void ForceUsingObject(class UUsableComponent* UsableObject);
	void ClientNotifyUsedLockedObject();
	void ClientNotifyAttemptedUseCouldNotAfford(class UUsableComponent* Usable, enum class EUsabilityType UseType, bool bUseHeld);
	bool CanUseCurrentUsable(enum class EUsabilityType Type);
	bool CanInteractWithCurrentUsable(enum class EUsabilityType Type);
};

// 0x58 (0x88 - 0x30)
// Class GbxGameSystemCore.LevelGroupData
class ULevelGroupData : public UGbxDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  SubHeader;                                         // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ULevelData>>     ContainedLevels;                                   // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelGroupData* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class GbxGameSystemCore.ActorPartSetData
class UActorPartSetData : public UGbxDataAsset
{
public:
	TSubclassOf<class UActorPartData>            PartDataClass;                                     // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnum*                                 PartTypeEnum;                                      // 0x38(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EActorPartReplacementMode         ActorPartReplacementMode;                          // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_327A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActorPartListData>            ActorPartLists;                                    // 0x48(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActorPartListData>            OldActorPartLists;                                 // 0x58(0x10)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 Guid;                                              // 0x68(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UActorPartSetData* GetDefaultObj();

	void EnumeratePartListForPartType(uint8 PartType, TArray<class UActorPartData*>* OutPartList);
};

// 0x0 (0x458 - 0x458)
// Class GbxGameSystemCore.PrototypeActor
class APrototypeActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class APrototypeActor* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.StatusEffectStackingStrategyData
class UStatusEffectStackingStrategyData : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UStatusEffectStackingStrategyData* GetDefaultObj();

};

// 0x28 (0x2B0 - 0x288)
// Class GbxGameSystemCore.UIStatData_Attribute
class UUIStatData_Attribute : public UUIStatData_Numeric
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x288(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUIStatData*>                   OtherComparableStats;                              // 0x290(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UUIStatData*>                   StatsToReplace;                                    // 0x2A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUIStatData_Attribute* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.UIStatFormulaEvaluator
class UUIStatFormulaEvaluator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUIStatFormulaEvaluator* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.GbxWeaponSlotData
class UGbxWeaponSlotData : public UDataAsset
{
public:
	class FName                                  SocketName;                                        // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InitiallyEnabled;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxWeaponSlotData* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class GbxGameSystemCore.LevelData
class ULevelData : public UGbxDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  SubHeader;                                         // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  LevelMapName;                                      // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ULevelData>>     LinksToOtherLevel;                                 // 0x80(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class ULevelGroupData>        OwningLevelGroup;                                  // 0x90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDownloadableContentData*              DLCExpansionData;                                  // 0xB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelData* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class GbxGameSystemCore.ActorAttributeContextResolver
class UActorAttributeContextResolver : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UActorAttributeContextResolver* GetDefaultObj();

};

// 0x230 (0x260 - 0x30)
// Class GbxGameSystemCore.AIChargeData
class UAIChargeData : public UGbxDataAsset
{
public:
	TSubclassOf<class UGbxAction>                StartAction;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                MissAction;                                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                StrikeAction;                                      // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                HitWallAction;                                     // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ReachCliffAction;                                  // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                StopForFriendlyAction;                             // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAnims;                                         // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAction_AICharge>       ChargeAction;                                      // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrikeAngle;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrikeDistance;                                    // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTravelDistance;                                 // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MissDistance;                                      // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitWallRadiusPct;                                  // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlowStopTime;                                      // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlowStopSpeedPercent;                              // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FForceSelection                       HitReactionForceSelection;                         // 0x90(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       HitReactionFriendly;                               // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       HitReactionUnfriendly;                             // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCauseHitReaction;                                 // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERelativeSizeCharge               StopForFriendlyOfRelativeSize;                     // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StopForFriendlyDistance;                           // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   ChargeStance;                                      // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChargeCurveType                  SpeedOverrideType;                                 // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    SpeedOverTime;                                     // 0xD8(0x78)(Edit, NativeAccessSpecifierPublic)
	enum class EChargeCurveType                  RotationOverrideType;                              // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotationOverTime;                                 // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    RotationOverTime;                                  // 0x158(0x78)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    RotationByDistance;                                // 0x1D0(0x78)(Edit, NativeAccessSpecifierPublic)
	class UCurveFloat*                           SpeedCurve;                                        // 0x248(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           RotationCurve;                                     // 0x250(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitReactionForce;                                  // 0x258(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIChargeData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxGameSystemCore.AIDataProvider_AttributeData
class UAIDataProvider_AttributeData : public UAIDataProvider
{
public:
	class UGbxAttributeData*                     AttributeData;                                     // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32CE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIDataProvider_AttributeData* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class GbxGameSystemCore.AIDataProvider_AttributeInitializationData
class UAIDataProvider_AttributeInitializationData : public UAIDataProvider
{
public:
	struct FAttributeInitializationData          AttributeInitializationData;                       // 0x28(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIDataProvider_AttributeInitializationData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxGameSystemCore.AIDataProvider_AttributeInitializer
class UAIDataProvider_AttributeInitializer : public UAIDataProvider
{
public:
	TSubclassOf<class UAttributeInitializer>     AttributeInitializer;                              // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIDataProvider_AttributeInitializer* GetDefaultObj();

};

// 0x790 (0x908 - 0x178)
// Class GbxGameSystemCore.AIDodgeComponent
class UAIDodgeComponent : public UActorComponent
{
public:
	uint8                                        Pad_3309[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsDodging;                                         // 0x210(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDodgeData                          DodgeBullet;                                       // 0x218(0x1B8)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDodgeData                          DodgeGrenade;                                      // 0x3D0(0x1B8)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDodgeBasicData                     DodgeRandom;                                       // 0x588(0x98)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FAIDodgeData                          DodgeZone;                                         // 0x620(0x1B8)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FGbxParam                             GlobalCooldown;                                    // 0x7D8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnDodged;                                          // 0x858(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	class UTeamComponent*                        TeamComponent;                                     // 0x868(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxActionComponent*                   ActionComponent;                                   // 0x870(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x878(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                       BrainComponent;                                    // 0x880(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavComponent*                         NavComponent;                                      // 0x888(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxCharacterMovementComponent*        MovementComponent;                                 // 0x890(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDodgeInstance                      PendingDodge;                                      // 0x898(0x20)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FAIDodgeInstance                      ActiveDodge;                                       // 0x8B8(0x20)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3310[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIDodgeComponent* GetDefaultObj();

	void TriggerZoneDodge(class UObject* WorldContextObject, class AActor* TargetActor, struct FVector& ZoneLoc, struct FVector& ZoneVel, class AActor* ActorRef);
	void TriggerGrenadeDodge(class UObject* WorldContextObject, struct FVector& GrenadeLoc, class AActor* Instigator, float ExtraDelay);
	bool TriggerDodge(enum class EAIDodgeType Type, struct FVector& SourceLoc, class AActor* SourceActor, float ExtraDelay, bool bForced);
	void TriggerBulletDodge(class UObject* WorldContextObject, struct FVector& MuzzleLoc, struct FVector& BulletVel, class AActor* Instigator);
};

// 0x68 (0x98 - 0x30)
// Class GbxGameSystemCore.AimControlData
class UAimControlData : public UGbxDataAsset
{
public:
	float                                        InputCurveExponent;                                // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationCap;                                       // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelRate;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecelRate;                                         // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelRateRawBias;                                  // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3315[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAimSensitivityLevelParameters> HipSensitivityLevels;                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAimSensitivityLevelParameters> ZoomSensitivityLevels;                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAimSensitivityLevelParameters> VehicleSensitivityLevels;                          // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinFOVScaling;                                     // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAcceptedFOVScale;                               // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFOVScalingMouse;                                // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAcceptedFOVScaleMouse;                          // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighDeadZone;                                      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxialDeadZoneBegin;                                // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxialDeadZoneRatio;                                // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAimControlData* GetDefaultObj();

};

// 0x60 (0xF8 - 0x98)
// Class GbxGameSystemCore.AISense_Bullet
class UAISense_Bullet : public UAISense
{
public:
	TArray<struct FAIBulletEvent>                BulletEvents;                                      // 0x98(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_332E[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense_Bullet* GetDefaultObj();

	void ReportBulletEvent(class UObject* WorldContext, const struct FVector& StartLoc, const struct FVector& EndLoc, bool bFirstEvent, class AActor* Instigator, float Strength);
};

// 0x60 (0xF8 - 0x98)
// Class GbxGameSystemCore.AISense_GbxPrediction
class UAISense_GbxPrediction : public UAISense
{
public:
	uint8                                        Pad_3334[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense_GbxPrediction* GetDefaultObj();

};

// 0x30 (0x1A0 - 0x170)
// Class GbxGameSystemCore.AISense_GbxSight
class UAISense_GbxSight : public UAISense_Sight
{
public:
	uint8                                        Pad_333E[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense_GbxSight* GetDefaultObj();

	void ForceSightEvent(class UObject* WorldContext, class AActor* SeenActor, class AActor* LookingActor);
};

// 0x10 (0x58 - 0x48)
// Class GbxGameSystemCore.AISenseConfig_Bullet
class UAISenseConfig_Bullet : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Bullet>           Implementation;                                    // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ListenRadius;                                      // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAISenseConfig_Bullet* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class GbxGameSystemCore.AISenseConfig_GbxPrediction
class UAISenseConfig_GbxPrediction : public UAISenseConfig
{
public:
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3350[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISenseConfig_GbxPrediction* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxGameSystemCore.AnimNotify_CanInterruptAnim
class UAnimNotify_CanInterruptAnim : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_CanInterruptAnim* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxGameSystemCore.AnimNotify_CauseDamage
class UAnimNotify_CauseDamage : public UAnimNotify
{
public:
	TSubclassOf<class UDamageData>               DamageData;                                        // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotify_CauseDamage* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class GbxGameSystemCore.AnimNotify_Feedback
class UAnimNotify_Feedback : public UAnimNotify
{
public:
	uint8                                        bApplyToAllPlayers : 1;                            // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreOwner : 1;                                  // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_E7 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3371[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bApplyFeedbackAtRanged;                            // 0x3C(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3374[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFeedbackData*                         FeedbackData;                                      // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFeedbackData*                         OwnerFeedbackData;                                 // 0x50(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          FeedbackScale;                                     // 0x58(0x38)(Edit, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotify_Feedback* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GbxGameSystemCore.AnimNotify_Footstep
class UAnimNotify_Footstep : public UAnimNotify
{
public:
	int32                                        FootIndex;                                         // 0x38(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x3C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x40(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictToMatchingPlayerPerspective;              // 0x44(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3382[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_Footstep* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxGameSystemCore.AnimNotify_GbxAction
class UAnimNotify_GbxAction : public UAnimNotify
{
public:
	class FName                                  CustomEventName;                                   // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_GbxAction* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GbxGameSystemCore.AnimNotify_HandPlant
class UAnimNotify_HandPlant : public UAnimNotify
{
public:
	int32                                        HandIndex;                                         // 0x38(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x3C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x40(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictToMatchingPlayerPerspective;              // 0x44(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_339C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_HandPlant* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxGameSystemCore.AnimNotify_PlayJumpedImpact
class UAnimNotify_PlayJumpedImpact : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_PlayJumpedImpact* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxGameSystemCore.AnimNotify_PlayLandedImpact
class UAnimNotify_PlayLandedImpact : public UAnimNotify
{
public:
	float                                        ImpactSpeed;                                       // 0x38(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAsIfFromJump;                                     // 0x3C(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33AC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_PlayLandedImpact* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class GbxGameSystemCore.AnimNotify_SetRagdollObjectHoldTransform
class UAnimNotify_SetRagdollObjectHoldTransform : public UAnimNotify
{
public:
	bool                                         bEnable;                                           // 0x38(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3427[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x30)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_SetRagdollObjectHoldTransform* GetDefaultObj();

};

// 0x28 (0x68 - 0x40)
// Class GbxGameSystemCore.AnimNotify_StretchBonesMarker
class UAnimNotify_StretchBonesMarker : public UAnimNotify_GbxAction
{
public:
	class FName                                  StartBoneName;                                     // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBoneName;                                       // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimatedTargetDistance;                            // 0x50(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtVector;                                      // 0x54(0xC)(BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XScale;                                            // 0x60(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3435[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_StretchBonesMarker* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_DeathOverride
class UAnimNotifyState_DeathOverride : public UAnimNotifyState
{
public:
	class UHitReactionTag*                       DeathReactionTag;                                  // 0x30(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       DefaultReactionTagName;                            // 0x38(0x18)(BlueprintReadOnly, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAnimNotifyState_DeathOverride* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_DisableLegIK
class UAnimNotifyState_DisableLegIK : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UAnimNotifyState_DisableLegIK* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_DisableLegIKTracing
class UAnimNotifyState_DisableLegIKTracing : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UAnimNotifyState_DisableLegIKTracing* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_DisableLookAt
class UAnimNotifyState_DisableLookAt : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UAnimNotifyState_DisableLookAt* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_Feedback
class UAnimNotifyState_Feedback : public UAnimNotifyState
{
public:
	uint8                                        bApplyToAllPlayers : 1;                            // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_E8 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3457[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         FeedbackData;                                      // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          FeedbackScale;                                     // 0x40(0x38)(Edit, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotifyState_Feedback* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_GbxAction
class UAnimNotifyState_GbxAction : public UAnimNotifyState
{
public:
	class FName                                  CustomEventName;                                   // 0x30(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotifyState_GbxAction* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_RootMotionRotation
class UAnimNotifyState_RootMotionRotation : public UAnimNotifyState
{
public:
	int32                                        LockFootIkIndex;                                   // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLockFootIK;                                       // 0x34(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3466[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotifyState_RootMotionRotation* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_SoftAlign
class UAnimNotifyState_SoftAlign : public UAnimNotifyState
{
public:
	enum class EAnimNotifyAlignType              Type;                                              // 0x30(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3472[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAffectsLocation : 1;                              // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAffectsRotation : 1;                              // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_E9 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3474[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PartnerName;                                       // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ActionSlotName;                                    // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AlignSocketPartner;                                // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAnimNotifyState_SoftAlign* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxGameSystemCore.AnimNotifyState_StretchAction
class UAnimNotifyState_StretchAction : public UAnimNotifyState
{
public:
	bool                                         bRotate;                                           // 0x30(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTranslate;                                        // 0x31(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3482[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotifyState_StretchAction* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class GbxGameSystemCore.AnimNotifyState_StretchBonesMarker
class UAnimNotifyState_StretchBonesMarker : public UAnimNotifyState_GbxAction
{
public:
	class FName                                  StartBoneName;                                     // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBoneName;                                       // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimatedTargetDistance;                            // 0x48(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtVector;                                      // 0x4C(0xC)(BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndAnimatedTargetDistance;                         // 0x58(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLookAtVector;                                   // 0x5C(0xC)(BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XScale;                                            // 0x68(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_348C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotifyState_StretchBonesMarker* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class GbxGameSystemCore.AsyncExplosionImpactManager
class UAsyncExplosionImpactManager : public UObject
{
public:
	uint8                                        Pad_3495[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAsyncExplosionImpactRequest>  AsyncRequests;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3497[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAsyncExplosionImpactManager* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.AttributeEffectMultiMutatorData
class UAttributeEffectMultiMutatorData : public UAttributeEffectMutatorData
{
public:
	TArray<class UAttributeEffectMutatorData*>   Mutators;                                          // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAttributeEffectMultiMutatorData* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxGameSystemCore.AttributeInitializer
class UAttributeInitializer : public UObject
{
public:
	enum class EAttributeInitializerUsageMode    UsageMode;                                         // 0x28(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34CC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAttributeInitializer* GetDefaultObj();

	float EvaluateBalanceFormula(float Multiplier, float Level, float Power, float Offset);
	float CalculateAttributeInitialValue(class UObject* Context);
};

// 0x10 (0x38 - 0x28)
// Class GbxGameSystemCore.AttributeModifierTestContext
class UAttributeModifierTestContext : public UObject
{
public:
	struct FGbxAttributeFloat                    AttributeProperty;                                 // 0x28(0xC)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatProperty;                                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAttributeModifierTestContext* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxGameSystemCore.TestAttributePropertyValueResolver
class UTestAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:

	static class UClass* StaticClass();
	static class UTestAttributePropertyValueResolver* GetDefaultObj();

};

// 0x1A0 (0x1C8 - 0x28)
// Class GbxGameSystemCore.AttributePropertyValueResolverTestContext
class UAttributePropertyValueResolverTestContext : public UObject
{
public:
	float                                        FloatProp;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatPropStaticArray[0x3];                         // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FloatPropDynamicArray;                             // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UAttributePropertyValueResolverTestContext* ObjectProp;                                        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAttributePropertyValueResolverTestContext* ObjectPropStaticArray[0x3];                        // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAttributePropertyValueResolverTestContext*> ObjectPropDynamicArray;                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FAttributePropertyValueResolverTestStruct StructProp;                                        // 0x78(0x50)(NativeAccessSpecifierPublic)
	struct FAttributePropertyValueResolverTestStruct StructPropStaticArray[0x3];                        // 0xC8(0xF0)(NativeAccessSpecifierPublic)
	TArray<struct FAttributePropertyValueResolverTestStruct> StructPropDynamicArray;                            // 0x1B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAttributePropertyValueResolverTestContext* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// Class GbxGameSystemCore.BalanceFormulaAttributeValueResolver
class UBalanceFormulaAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FBalanceFormulaDefinedValueRow        Value;                                             // 0x28(0x120)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAttributeInitializationData>  AdditionalScalars;                                 // 0x148(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBalanceFormulaAttributeValueResolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxGameSystemCore.BalanceStateAttributeValueResolver
class UBalanceStateAttributeValueResolver : public UAttributeValueResolver
{
public:
	enum class EBalanceValueType                 ValueToResolve;                                    // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_34FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBalanceStateAttributeValueResolver* GetDefaultObj();

};

// 0x0 (0xD8 - 0xD8)
// Class GbxGameSystemCore.BalanceTableAttributeValueResolver
class UBalanceTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver
{
public:

	static class UClass* StaticClass();
	static class UBalanceTableAttributeValueResolver* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class GbxGameSystemCore.BlackboardKeyAttributeContextResolver
class UBlackboardKeyAttributeContextResolver : public UAttributeContextResolver
{
public:
	struct FGbxBlackboardKeySelector             BlackboardKey;                                     // 0x50(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBlackboardKeyAttributeContextResolver* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.BlackboardKeyType_GbxFlag
class UBlackboardKeyType_GbxFlag : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_GbxFlag* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxGameSystemCore.BlackboardKeyType_Struct
class UBlackboardKeyType_Struct : public UBlackboardKeyType
{
public:
	class UScriptStruct*                         Type;                                              // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Struct* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.BlackboardKeyType_TargetActorInfo
class UBlackboardKeyType_TargetActorInfo : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_TargetActorInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.BoneModBlueprintLibrary
class UBoneModBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBoneModBlueprintLibrary* GetDefaultObj();

	void SetBoneTranslation(class FName BoneName, const struct FVector& Translation, class UObject* Target, float InBlendTime, enum class EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void SetBoneScale3D(class FName BoneName, const struct FVector& Scale3D, class UObject* Target, float InBlendTime, enum class EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void SetBoneScale(class FName BoneName, float Scale, class UObject* Target, float InBlendTime, enum class EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void SetBoneRotation(class FName BoneName, const struct FRotator& Rotation, class UObject* Target, float InBlendTime, enum class EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve);
	void SetBoneModUseTranslation(class FName BoneModName, bool bUseTranslation, class UObject* Target);
	void SetBoneModUseScale(class FName BoneModName, bool bUseScale, class UObject* Target);
	void SetBoneModUseRotation(class FName BoneModName, bool bUseRotation, class UObject* Target);
	void SetBoneModTranslationSpace(class FName BoneModName, enum class EBoneControlSpace TranslationSpace, class UObject* Target);
	void SetBoneModTranslation(class FName BoneModName, const struct FVector& Translation, class UObject* Target);
	void SetBoneModTransform(class FName BoneModName, const struct FTransform& Transform, class UObject* Target);
	void SetBoneModScale3D(class FName BoneModName, const struct FVector& Scale, class UObject* Target);
	void SetBoneModScale(class FName BoneModName, float Scale, class UObject* Target);
	void SetBoneModRotationSpace(class FName BoneModName, enum class EBoneControlSpace RotationSpace, class UObject* Target);
	void SetBoneModRotation(class FName BoneModName, const struct FRotator& Rotation, class UObject* Target);
	void SetBoneModReplaceTranslation(class FName BoneModName, bool bReplaceTranslation, class UObject* Target);
	void SetBoneModReplaceScale(class FName BoneModName, bool bReplaceScale, class UObject* Target);
	void SetBoneModReplaceRotation(class FName BoneModName, bool bReplaceRotation, class UObject* Target);
	void SetBoneModName(class FName BoneModName, class FName NewBoneModName, class UObject* Target);
	void SetBoneModifyProfileState(class FName StateName, bool bActive, class UObject* Target, float BlendTime);
	void SetBoneModifyProfile(class UGbxBoneModifyProfile* BoneModifyProfile, class UObject* Target);
	void SetBoneModBoneName(class FName BoneModName, class FName BoneModBoneName, class UObject* Target);
	void SetBoneModBlendTime(class FName BoneModName, float BlendTime, class UObject* Target);
	void SetBoneModAlphaBlend(class FName BoneModName, const struct FAlphaBlend& Blend, class UObject* Target);
	void SetBoneModActive(class FName BoneModName, bool bActive, class UObject* Target);
	void SetBoneMod(struct FBoneModInstance& InBoneMod, class FName BoneModToSet, class UObject* Target, bool bBlendIn);
	void RemoveBoneMod(class FName BoneModToRemove, class UObject* Target, bool bBlendOut);
	bool GetBoneMod(class FName BoneModName, struct FBoneModInstance* BoneMod, class UObject* Target);
	void CreateBoneMod(class FName InBoneModName, class FName InBoneName, const struct FVector& InTranslation, const struct FRotator& InRotation, const struct FVector& InScale, float InBlendTime, class UObject* Target, enum class EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve, bool bInUseTranslation, bool bInUseRotation, bool bInUseScale, bool bInReplaceTranslation, bool bInReplaceRotation, bool bInReplaceScale, enum class EBoneControlSpace InTranslationSpace, enum class EBoneControlSpace InRotationSpace, bool bBlendIn);
};

// 0x50 (0x320 - 0x2D0)
// Class GbxGameSystemCore.BoneModComponent
class UBoneModComponent : public USceneComponent
{
public:
	bool                                         bUseTranslation;                                   // 0x2D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x2D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceTranslation;                               // 0x2D2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRotation;                                      // 0x2D3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x2D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceRotation;                                  // 0x2D5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseScale;                                         // 0x2D6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceScale;                                     // 0x2D7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAlphaBlend                           Blend;                                             // 0x2D8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bStartActive;                                      // 0x310(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36A7[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBoneModComponent* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class GbxGameSystemCore.BTDecorator_GbxCondition
class UBTDecorator_GbxCondition : public UBTDecorator
{
public:
	class UGbxCondition*                         Condition;                                         // 0x68(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBTDecorator_GbxCondition* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class GbxGameSystemCore.BTTask_PlayGbxAction
class UBTTask_PlayGbxAction : public UBTTaskNode
{
public:
	TSubclassOf<class UGbxAction>                ActionClassToPlay;                                 // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxActionComponent*                   CachedActionComponent;                             // 0x78(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTreeComponent*                CachedBTComponent;                                 // 0x80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBTTask_PlayGbxAction* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.CauseDamageContextSourceInterface
class ICauseDamageContextSourceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICauseDamageContextSourceInterface* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.ChallengeConditionData
class UChallengeConditionData : public UGbxDataAsset
{
public:
	class FString                                Description;                                       // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatId;                                            // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        TargetValue;                                       // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChallengeConditionData* GetDefaultObj();

};

// 0x80 (0x7D0 - 0x750)
// Class GbxGameSystemCore.ChallengeLevelActorComponent
class UChallengeLevelActorComponent : public UGbxAreaComponent
{
public:
	TSubclassOf<class UChallenge>                BaseChallengeReference;                            // 0x750(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UChallenge>                ChallengeReference;                                // 0x758(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowInZoneMap;                                    // 0x760(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowInMiniMap;                                    // 0x761(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowInWorld;                                      // 0x762(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInWorldIconEnabled;                               // 0x763(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnfogRadiusWhenChallengeActive;                    // 0x764(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnfogHeightWhenChallengeActive;                    // 0x768(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 IconGuid;                                          // 0x76C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStationary;                                     // 0x77C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPlayerChallengeActivated;                        // 0x780(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerChallengeCompleted;                        // 0x790(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerEnteredChallengeArea;                      // 0x7A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerExitedChallengeArea;                       // 0x7B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChallengeLevelActorComponent*         OwningLevelActorComponent;                         // 0x7C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UChallengeLevelActorComponent* GetDefaultObj();

	void SetIsStationary(bool bInIsStationary);
	void SetInWorldIconEnabled(bool bEnable);
	void OnRep_IsStationary(bool bOldIsStationary);
	void OnRep_InWorldIconEnabled(bool bOldEnabled);
	void OnRep_ChallengeReference();
	void HandleAttachmentChanged();
	class AActor* GetAssociatedActor();
};

// 0x30 (0x800 - 0x7D0)
// Class GbxGameSystemCore.ChallengeLevelParentComponent
class UChallengeLevelParentComponent : public UChallengeLevelActorComponent
{
public:
	bool                                         bHideIfAssociatedActors;                           // 0x7D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnAllAssociatedActorsDestroyed;                    // 0x7D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UChallengeLevelActorComponent*> AssociatedActors;                                  // 0x7E8(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_36C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChallengeLevelParentComponent* GetDefaultObj();

	void RemoveAssociatedActorComponent(class UChallengeLevelActorComponent* AssociatedComponent);
	void RemoveAssociatedActor(class AActor* AssociatedActor);
	void ClearAssociatedActors();
	void AddAssociatedActor(class AActor* AssociatedActor, TSubclassOf<class UChallengeLevelActorComponent> ComponentClass, const struct FVector& RelativeOffset);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.ChallengeObserverInterface
class IChallengeObserverInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChallengeObserverInterface* GetDefaultObj();

};

// 0x88 (0xB8 - 0x30)
// Class GbxGameSystemCore.ChallengeRewardData
class UChallengeRewardData : public UGbxDataAsset
{
public:
	class FText                                  RewardName;                                        // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  RewardString;                                      // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          AttrInitDef;                                       // 0x78(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        CachedRewardIndex;                                 // 0xB0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChallengeRewardData* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class GbxGameSystemCore.ChallengeSystemSettings
class UChallengeSystemSettings : public UObject
{
public:
	float                                        MinimumGoalForChallengeNotification;               // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ChallengeCompletionThresholdNotification;          // 0x30(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          ChallengeRanksForToken;                            // 0x40(0x38)(Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        ChallengePointsPerRank;                            // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftObjectPath>               ChallengeRewards;                                  // 0x80(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UChallengesComponent>      DefaultChallengeComponent;                         // 0x90(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UChallengeSystemSettings* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class GbxGameSystemCore.CharacterBestTargetAttributeContextResolver
class UCharacterBestTargetAttributeContextResolver : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UCharacterBestTargetAttributeContextResolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxGameSystemCore.CharacterMovementAttributeValueResolver
class UCharacterMovementAttributeValueResolver : public UAttributeValueResolver
{
public:
	enum class ECharacterMovementAttributeValueType ValueToResolve;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36D3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCharacterMovementAttributeValueResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.CinematicModeBlueprintLibrary
class UCinematicModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCinematicModeBlueprintLibrary* GetDefaultObj();

	void PushCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
	void PopCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
	void ClearCinematicMode(class UObject* WorldContextObject);
	void ClearAndSetCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode);
};

// 0x0 (0x458 - 0x458)
// Class GbxGameSystemCore.ClothManagerInterface
class AClothManagerInterface : public AActor
{
public:

	static class UClass* StaticClass();
	static class AClothManagerInterface* GetDefaultObj();

};

// 0x20 (0x478 - 0x458)
// Class GbxGameSystemCore.Beacon
class ABeacon : public AActor
{
public:
	uint8                                        Pad_36F8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABeacon* GetDefaultObj();

	void OnBeaconSourceEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
};

// 0x80 (0xA8 - 0x28)
// Class GbxGameSystemCore.ConditionalAttributeValueResolver
class UConditionalAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData          DefaultValue;                                      // 0x28(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Scaler;                                            // 0x60(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAttributeConditionalValue>    ConditionalValues;                                 // 0x98(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UConditionalAttributeValueResolver* GetDefaultObj();

};

// 0x108 (0x138 - 0x30)
// Class GbxGameSystemCore.ConditionalDamageModifier
class UConditionalDamageModifier : public UGbxDataAsset
{
public:
	class UGbxCondition*                         AttackerCondition;                                 // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttackerConditionFirstContextIsOverrideContextObject; // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttackerConditionSecondContextIsDamageCauser;     // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3705[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         DefenderCondition;                                 // 0x40(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefenderConditionFirstContextIsOverrideContextObject; // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefenderConditionSecondContextIsDamageCauser;     // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_370F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDamageFilterExprMode             DamageTypeFilterMode;                              // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGbxDamageType>>    DamageTypeFilter;                                  // 0x50(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EDamageFilterExprMode             DamageSourceFilterMode;                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDamageSourceSubclasses;                    // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3719[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UDamageSource>>     DamageSourceFilter;                                // 0x68(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUseHitDirectionAngle;                             // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          HitDirectionAngle;                                 // 0x80(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          HitDirectionAngleOffset;                           // 0xB8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseCriticalFilter;                                // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConditionalDamageCriticalFilter  CriticalFilter;                                    // 0xF1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAreaDamageFilter;                              // 0xF2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConditionalAreaDamageFilter      AreaDamageFilter;                                  // 0xF3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRandomChance;                                  // 0xF4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3721[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          RandomChance;                                      // 0xF8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCanTriggerOnBonusDamage;                          // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresMeleeHit;                                 // 0x131(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAppliesToInstigatorChildren;                      // 0x132(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3727[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionalDamageModifier* GetDefaultObj();

};

// 0x48 (0x180 - 0x138)
// Class GbxGameSystemCore.ConditionalDamageCriticalModifier
class UConditionalDamageCriticalModifier : public UConditionalDamageModifier
{
public:
	bool                                         bOnlyApplyIfHitRegionWasCritical;                  // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomChanceModifiesBaseChance;                   // 0x139(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGlobalRandomChanceOverride;                       // 0x13A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultCriticalHitMultiplier;                  // 0x13B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_372E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          AdditionalCriticalMultiplier;                      // 0x140(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyAsBaseCriticalMultplierScalar;               // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_372F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionalDamageCriticalModifier* GetDefaultObj();

};

// 0x10 (0x148 - 0x138)
// Class GbxGameSystemCore.ConditionalDamageHitRegionModifier
class UConditionalDamageHitRegionModifier : public UConditionalDamageModifier
{
public:
	uint32                                       Priority;                                          // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3732[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitRegionData*                        OverrideHitRegion;                                 // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConditionalDamageHitRegionModifier* GetDefaultObj();

};

// 0xA0 (0x1D8 - 0x138)
// Class GbxGameSystemCore.ConditionalDamageTypeModifier
class UConditionalDamageTypeModifier : public UConditionalDamageModifier
{
public:
	TSubclassOf<class UGbxDamageType>            OverrideDamageType;                                // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConditionalDamageDamageTypeConditional> ConditionalDamageTypes;                            // 0x140(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             OptionalOverrideDamageSource;                      // 0x150(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConditionalDamageTypeBonusMode   BonusMode;                                         // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConditionalModifierType          DamageModifierType;                                // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3742[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ExtraDamagePercent;                                // 0x160(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          OverridePrimaryDamageTypeScale;                    // 0x198(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextOverrideAsDamageCauser;                 // 0x1D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextOverrideAsDamageContext;                // 0x1D5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3746[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionalDamageTypeModifier* GetDefaultObj();

};

// 0xD8 (0x210 - 0x138)
// Class GbxGameSystemCore.ConditionalDamageValueModifier
class UConditionalDamageValueModifier : public UConditionalDamageModifier
{
public:
	enum class EConditionalDamageModifierType    ModifierType;                                      // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageValue;                                       // 0x140(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConditionalDamageDamageConditionalValue> ConditionalDamageValues;                           // 0x178(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bModifyValueBasedOnDistance;                       // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3752[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ModifyValueBasedOnDistanceCurve;                   // 0x190(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bDisallowFatalDamage;                              // 0x208(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3754[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionalDamageValueModifier* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class GbxGameSystemCore.ConstantAttributeValueResolver
class UConstantAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData          Value;                                             // 0x28(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UConstantAttributeValueResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.ControlledMoveFunctionLibrary
class UControlledMoveFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UControlledMoveFunctionLibrary* GetDefaultObj();

	void StopControlledMove(class AActor* Actor, TSubclassOf<class UControlledMove> ControlledMove, bool bZeroVelocity, bool bInterrupted);
	bool StartControlledMove(class AActor* Actor, TSubclassOf<class UControlledMove> ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation);
	bool IsPerformingSpecificControlledMove(class AActor* Actor, TSubclassOf<class UControlledMove> ControlledMove);
	bool IsPerformingControlledMove(class AActor* Actor);
};

// 0x0 (0x50 - 0x50)
// Class GbxGameSystemCore.ControllerAttributeContextResolver
class UControllerAttributeContextResolver : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UControllerAttributeContextResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.CoordinatedEffectBlueprintLibrary
class UCoordinatedEffectBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCoordinatedEffectBlueprintLibrary* GetDefaultObj();

	class UMaterialInterface* GetOriginalOverrideMaterialAtIndex(class UMeshComponent* MeshComponent, int32 Index, int32* OutActualIndex);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.DamageableInterface
class IDamageableInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDamageableInterface* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class GbxGameSystemCore.DamageAreaType
class UDamageAreaType : public UObject
{
public:
	bool                                         bTreatAsRadiusDamage;                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageFallsOff;                                   // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTargets;                                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxTargets : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoDirectDamageToImpactedActor : 1;                // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreWorldGeometry : 1;                          // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTryDirectTraceFirst : 1;                          // Mask: 0x8, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipBackupImpactTrace : 1;                        // Mask: 0x10, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceZeroPitch : 1;                               // Mask: 0x20, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bZeroPitchBeforeApplyingHitStartOffset : 1;        // Mask: 0x40, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceZeroRoll : 1;                                // Mask: 0x80, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionChannel                 TraceChannel;                                      // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceToGround;                                    // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceToGroundDownwardDistance;                     // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceToGroundStartHeightOffset;                    // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceToGroundHitOffset;                            // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageAreaOverlapFilterType      OverlapFilter;                                     // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OverlapProfileName;                                // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          OverlapObjectTypes;                                // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDamageAreaType* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class GbxGameSystemCore.DamageAreaType_BaseRound
class UDamageAreaType_BaseRound : public UDamageAreaType
{
public:
	struct FAttributeInitializationData          Radius;                                            // 0x60(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bComputeHitDirectionFromTarget;                    // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExpandRadiusOverTime;                             // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExpandingRadiusIsHollow;                          // 0x9A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_37ED[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDamageAreaType_BaseRound* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class GbxGameSystemCore.DamageAreaType_Sphere
class UDamageAreaType_Sphere : public UDamageAreaType_BaseRound
{
public:

	static class UClass* StaticClass();
	static class UDamageAreaType_Sphere* GetDefaultObj();

};

// 0xA8 (0x148 - 0xA0)
// Class GbxGameSystemCore.DamageAreaType_Cylinder
class UDamageAreaType_Cylinder : public UDamageAreaType_BaseRound
{
public:
	struct FAttributeInitializationData          HalfHeight;                                        // 0xA0(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          HeightOffset;                                      // 0xD8(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          WedgeAngle;                                        // 0x110(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageAreaType_Cylinder* GetDefaultObj();

};

// 0x70 (0xD0 - 0x60)
// Class GbxGameSystemCore.DamageAreaType_Cone
class UDamageAreaType_Cone : public UDamageAreaType
{
public:
	struct FAttributeInitializationData          Length;                                            // 0x60(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          ConeAngle;                                         // 0x98(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageAreaType_Cone* GetDefaultObj();

};

// 0xB0 (0x110 - 0x60)
// Class GbxGameSystemCore.DamageAreaType_Box
class UDamageAreaType_Box : public UDamageAreaType
{
public:
	struct FAttributeInitializationData          HalfHeight;                                        // 0x60(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          HalfWidth;                                         // 0x98(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          HalfDepth;                                         // 0xD0(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EDamageAreaBoxOriginType          OriginType;                                        // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3823[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDamageAreaType_Box* GetDefaultObj();

};

// 0x70 (0xD0 - 0x60)
// Class GbxGameSystemCore.DamageAreaType_Capsule
class UDamageAreaType_Capsule : public UDamageAreaType
{
public:
	struct FAttributeInitializationData          HalfHeight;                                        // 0x60(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          Radius;                                            // 0x98(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageAreaType_Capsule* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class GbxGameSystemCore.DamageAsyncManager
class UDamageAsyncManager : public UObject
{
public:
	uint8                                        Pad_3834[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCauseDamageAsyncRequestEntry> CauseDamageRequests;                               // 0x48(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FCauseDamageAsyncRequestEntry> PendingCauseDamageRequests;                        // 0x58(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	int32                                        MaxNumCauseDamagePerFrame;                         // 0x68(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_383C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDamageAsyncManager* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxGameSystemCore.CritSourceValueResolver
class UCritSourceValueResolver : public UAttributeValueResolver
{
public:
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECritType                         CritType;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3846[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCritSourceValueResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.DamageCauserInterface
class IDamageCauserInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDamageCauserInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.DamageStatics
class UDamageStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDamageStatics* GetDefaultObj();

	void StopCausingDamageToTarget(class AActor* DamageCauser, class AActor* DamageTarget, TSubclassOf<class UDamageData> DamageData);
	void StopCausingDamageBySource(class AActor* SourceActor);
	void StopCausingDamage(class AActor* DamageCauser, TSubclassOf<class UDamageData> DamageData);
	void StopCausingAllDamage(class AActor* DamageCauser);
	struct FPipelineDamageInput MakePipelineDamageInput(class AActor* DamageCauser, class AActor* DamageReceiver, TSubclassOf<class UGbxDamageType> DamageType, TSubclassOf<class UDamageSource> DamageSource, struct FHitResult& HitInfo, const struct FVector& HitLocation, const struct FVector& HitDirection, const struct FVector& HitForceDirection, const struct FForceSelection& HitForceMagnitude);
	class FString GetSummary_ForceSelection(struct FForceSelection& ForceSelection);
	class UGbxDamageType* GetDamageTypeFromClass(TSubclassOf<class UGbxDamageType> DamageTypeClass);
	class UDamageSource* GetDamageSourceFromClass(TSubclassOf<class UDamageSource> DamageSourceClass);
	float Conv_ForceSelectionToFloat(struct FForceSelection& ForceSelection);
	struct FForceSelection Conv_FloatToForceSelection(float ForceSelection);
	void ApplyDamageInRadius(class UObject* WorldContextObject, float BaseDamage, struct FVector& Origin, float Radius, TSubclassOf<class UGbxDamageType> DamageType, TSubclassOf<class UDamageSource> DamageSource, TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* EventInstigator, const struct FForceSelection& BaseImpactForce, enum class ECollisionChannel DamagePreventionChannel, bool bDamageFalloff, class UDamageModifierComponent* DamageModifierComponent, class UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusDamageScale);
	void ApplyDamageEx(const struct FPipelineDamageInput& PipelineInput, float BaseDamage);
	void ApplyDamage(class AActor* DamageReceiver, float BaseDamage, TSubclassOf<class UGbxDamageType> DamageType, TSubclassOf<class UDamageSource> DamageSource, class AController* EventInstigator, class AActor* DamageCauser);
};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.DeathData
class UDeathData : public UGbxDataAsset
{
public:
	TArray<class UGameStatData*>                 DiedStats;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DissolveCorpseDelayBeforeDestroy;                  // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeathData* GetDefaultObj();

};

// 0x0 (0x458 - 0x458)
// Class GbxGameSystemCore.Decorator
class ADecorator : public AActor
{
public:

	static class UClass* StaticClass();
	static class ADecorator* GetDefaultObj();

};

// 0x40 (0x1B8 - 0x178)
// Class GbxGameSystemCore.DrunkenBaseMovementComponent
class UDrunkenBaseMovementComponent : public UActorComponent
{
public:
	float                                        StartApproachDistance;                             // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelayTime;                                    // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EaseInTime;                                        // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomNumberSeed;                                  // 0x18C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E4[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrunkenBaseMovementComponent* GetDefaultObj();

};

// 0x58 (0x210 - 0x1B8)
// Class GbxGameSystemCore.DrunkenRandomMovementComponent
class UDrunkenRandomMovementComponent : public UDrunkenBaseMovementComponent
{
public:
	float                                        PathCorrectionInterval;                            // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnSpeed;                                         // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpreadAngle;                                    // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDepartureAngle;                                 // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGravityAffectsDrunkenness;                        // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrunkenGravityScalar;                              // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39F9[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bFixDrunkenMovementAcceleration;                   // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_39FB[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrunkenRandomMovementComponent* GetDefaultObj();

};

// 0x38 (0x1F0 - 0x1B8)
// Class GbxGameSystemCore.DrunkenWaveMovementComponent
class UDrunkenWaveMovementComponent : public UDrunkenBaseMovementComponent
{
public:
	TArray<struct FVector2DWaveform>             Waveforms;                                         // 0x1B8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        GlobalWaveformScale;                               // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRandomWaveOffsetTime;                           // 0x1CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGravityAffectsDrunkenness;                        // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrunkenGravityScalar;                              // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A0B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrunkenWaveMovementComponent* GetDefaultObj();

};

// 0x1D8 (0x350 - 0x178)
// Class GbxGameSystemCore.DynamicPhysicalAnimationComponent
class UDynamicPhysicalAnimationComponent : public UActorComponent
{
public:
	class FName                                  PhysicalAnimationCollisionProfileName;             // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KinematicAnimationCollisionProfileName;            // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ExclusionBones;                                    // 0x188(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          SupportBones;                                      // 0x198(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0F[0x188];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x330(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasPhysicallyAnimatingBones;                      // 0x340(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B11[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicPhysicalAnimationComponent* GetDefaultObj();

	void SetStrengthMultiplier(float NewValue);
	void SetSkeletalMeshComponent(class USkeletalMeshComponent* NewSkeletalMeshComponent);
	void SetRootMotionControl(enum class EPhysicalAnimationRootMotionControl MotionControl);
	void SetHasAnimationPlaying(bool bPlaying);
	void SetEnableRagdoll(bool bEnable);
	void SetEnablePhysicalAnimation(bool bEnable, class FName BodyName);
	void SetActiveProfile(class UPhysicalAnimationProfileAsset* Profile);
	void OnRigidBodyOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	float GetStrengthMultiplier();
	enum class EPhysicalAnimationRootMotionControl GetRootMotionControl();
	void DetachBodyFromAllExternalRigidBodies(class FName BodyName);
	void AttachBodyTo(class FName BodyName, class UPrimitiveComponent* AttachToComponent, class FName AttachToBodyName, float VelocitySpaceBlend, float BreakForce);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_AimStart
class UEnvQueryContext_AimStart : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_AimStart* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_AimEnd
class UEnvQueryContext_AimEnd : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_AimEnd* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_Owner_AimStart
class UEnvQueryContext_Owner_AimStart : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Owner_AimStart* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_Owner_AimEnd
class UEnvQueryContext_Owner_AimEnd : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Owner_AimEnd* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_LastResult
class UEnvQueryContext_LastResult : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_LastResult* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxGameSystemCore.EnvQueryContext_Origin
class UEnvQueryContext_Origin : public UEnvQueryContext_EnvQueryParam
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Origin* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_PlayerMaster
class UEnvQueryContext_PlayerMaster : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_PlayerMaster* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_Players
class UEnvQueryContext_Players : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Players* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection
class UEnvQueryContext_QuerierAimDirection : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_QuerierAimDirection* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_QuerierAimDirection2D
class UEnvQueryContext_QuerierAimDirection2D : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_QuerierAimDirection2D* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_QuerierAimLocation
class UEnvQueryContext_QuerierAimLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_QuerierAimLocation* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_QuerierMoveDirection
class UEnvQueryContext_QuerierMoveDirection : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_QuerierMoveDirection* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryContext_TargetNavLocation
class UEnvQueryContext_TargetNavLocation : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_TargetNavLocation* GetDefaultObj();

};

// 0x48 (0xA8 - 0x60)
// Class GbxGameSystemCore.EnvQueryGenerator_TargetActorInfo
class UEnvQueryGenerator_TargetActorInfo : public UEnvQueryGenerator
{
public:
	float                                        MaxAge;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowHostiles;                                    // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFriendlies;                                  // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowNeutrals;                                    // 0x66(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActorTagCompositeQuery               TagQuery;                                          // 0x68(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bUseAllowedTypes : 1;                              // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_FA : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3BE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class AActor>>          AllowedTypes;                                      // 0x80(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                        AllowedTypesCache;                                 // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_TargetActorInfo* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.EnvQueryItemType_Targetable
class UEnvQueryItemType_Targetable : public UEnvQueryItemType_Actor
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_Targetable* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.EnvQueryItemType_TargetActorInfo
class UEnvQueryItemType_TargetActorInfo : public UEnvQueryItemType_ActorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_TargetActorInfo* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxGameSystemCore.EnvQueryContext_InputTarget
class UEnvQueryContext_InputTarget : public UEnvQueryContext_EnvQueryParam
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_InputTarget* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class GbxGameSystemCore.EnvQueryContext_InputTargetMoveDir
class UEnvQueryContext_InputTargetMoveDir : public UEnvQueryContext_EnvQueryParam
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_InputTargetMoveDir* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryParamsExt
class UEnvQueryParamsExt : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryParamsExt* GetDefaultObj();

	bool RunEnvQueryForBestLocation(class UObject* QueryOwner, struct FEnvQueryParams& QueryParams, struct FVector* ResultLocation);
	bool RunEnvQueryForBestActor(class UObject* QueryOwner, struct FEnvQueryParams& QueryParams, class AActor** ResultActor);
	bool RunEnvQueryForAllLocations(class UObject* QueryOwner, struct FEnvQueryParams& QueryParams, TArray<struct FVector>* ResultLocations);
	bool RunEnvQueryForAllActors(class UObject* QueryOwner, struct FEnvQueryParams& QueryParams, TArray<class AActor*>* ResultActors);
	bool HasQuery(struct FEnvQueryParams& QueryParams);
	class FString GetDescription(struct FEnvQueryParams& QueryParams);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EnvQueryParamsProvider
class IEnvQueryParamsProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnvQueryParamsProvider* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class GbxGameSystemCore.EnvQueryTest_ProjectilesHomingTowardsTarget
class UEnvQueryTest_ProjectilesHomingTowardsTarget : public UEnvQueryTest
{
public:
	bool                                         bMustBeActivelyHoming;                             // 0x1D8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DFD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_ProjectilesHomingTowardsTarget* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxGameSystemCore.EnvQueryTestAsset
class UEnvQueryTestAsset : public UGbxDataAsset
{
public:
	class UEnvQueryTest*                         EnvQueryTest;                                      // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEnvQueryTestAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.EQSProxyInterface
class IEQSProxyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEQSProxyInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.ExplosionBlueprintLibrary
class UExplosionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UExplosionBlueprintLibrary* GetDefaultObj();

	class UParticleSystemComponent* PlayExplosion(class UExplosionData* ExplosionData, float Size, const struct FVector& ExplosionLocation, class UObject* Context, TSubclassOf<class UDamageType> DamageType);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.DamageInfoFunctionLibrary
class UDamageInfoFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDamageInfoFunctionLibrary* GetDefaultObj();

	void SetImpactForce(struct FDamageInfo& DamageInfo, float InImpactForce);
	void SetDamageType(struct FDamageInfo& DamageInfo, TSubclassOf<class UGbxDamageType> InDamageType);
	void SetDamageSource(struct FDamageInfo& DamageInfo, TSubclassOf<class UDamageSource> InDamageSource);
	void SetDamageRadius(struct FDamageInfo& DamageInfo, float InDamageRadius);
	void SetDamageModifierComponent(struct FDamageInfo& DamageInfo, class UDamageModifierComponent* InModifierComponent);
	void SetDamageCauser(struct FDamageInfo& DamageInfo, class AActor* InDamageCauser);
	void SetDamage(struct FDamageInfo& DamageInfo, float InDamage);
	void SetCriticalHitDamageOverrides(struct FDamageInfo& DamageInfo, struct FCriticalHitDamageOverrides& Overrides);
	void SetApplyCriticalHitModsToAoEDamage(struct FDamageInfo& DamageInfo, bool bApplyCriticalHitModsToAoEDamage);
	float GetImpactForce(struct FDamageInfo& DamageInfo);
	TSubclassOf<class UGbxDamageType> GetDamageType(struct FDamageInfo& DamageInfo);
	TSubclassOf<class UDamageSource> GetDamageSource(struct FDamageInfo& DamageInfo);
	float GetDamageRadius(struct FDamageInfo& DamageInfo);
	class UDamageModifierComponent* GetDamageModifierComponent(struct FDamageInfo& DamageInfo);
	class AActor* GetDamageCauser(struct FDamageInfo& DamageInfo);
	float GetDamage(struct FDamageInfo& DamageInfo);
	struct FCriticalHitDamageOverrides GetCriticalHitDamageOverrides(struct FDamageInfo& DamageInfo);
	bool GetApplyCriticalHitModsToAoEDamage(struct FDamageInfo& DamageInfo);
};

// 0x60 (0x1D8 - 0x178)
// Class GbxGameSystemCore.ExplosionComponent
class UExplosionComponent : public UActorComponent
{
public:
	struct FGbxAttributeFloat                    ExplosionRadius;                                   // 0x178(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ExplosionParticleSystem;                           // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     ExplosionEffectCollection;                         // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleSystemSize;                                // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyParticleSystemSize;                         // 0x19C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_415B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           ExplosionAudioEvent;                               // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundPerceptionProperties            SoundPerception;                                   // 0x1A8(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_415F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         Feedback;                                          // 0x1B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFeedbackRangeScalar;                            // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCauseExplosionDamage;                             // 0x1C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideLocation;                                 // 0x1C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4167[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LocationOverride;                                  // 0x1C8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_416B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExplosionComponent* GetDefaultObj();

	void SetExplosionLocation(struct FVector& NewLocation);
	void Explode(struct FDamageInfo& DamageInfo);
};

// 0xD0 (0x100 - 0x30)
// Class GbxGameSystemCore.ExplosionData
class UExplosionData : public UGbxDataAsset
{
public:
	class UExplosionSizeSelectionData*           DefaultExplosionSizeData;                          // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDamageTypeExplosionAssociation> DamageTypeSelections;                              // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUseRadialBlurOverride;                            // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRadialBlurSelection                  RadialBlurOverride;                                // 0x4C(0xC)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	enum class EExplosionTinnitusDuration        TinnitusDuration;                                  // 0x58(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBasicExplosion;                                // 0x59(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41BF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxSignificanceEvent                 SignificanceEvent;                                 // 0x60(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCensorThisExplosion;                              // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         FeedbackOverride;                                  // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystemOverride;                            // 0x78(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       CensoredParticleSystemOverride;                    // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           AudioEventOverride;                                // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactOverride;                                    // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeedbackFalloffMinDistanceScalar;                  // 0x98(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FeedbackFalloffMaxDistanceScalar;                  // 0x9C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D5[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExplosionData* GetDefaultObj();

	struct FExplosionSizeProperties SelectExplosion(float Size, TSubclassOf<class UDamageType> DamageType);
};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.ExplosionSizeSelectionData
class UExplosionSizeSelectionData : public UGbxDataAsset
{
public:
	TArray<struct FExplosionSizeProperties>      SizeProperties;                                    // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UExplosionSizeSelectionData* GetDefaultObj();

	struct FExplosionSizeProperties GetExplosionPropertiesBySize(float Size);
};

// 0x30 (0x720 - 0x6F0)
// Class GbxGameSystemCore.EyesOfDeathComponent
class UEyesOfDeathComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_420C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEyesOfDeathComponent* GetDefaultObj();

};

// 0x3C8 (0x3F8 - 0x30)
// Class GbxGameSystemCore.FeedbackData
class UFeedbackData : public UGbxDataAsset
{
public:
	int32                                        FeedbackType;                                      // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4581[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FForceFeedbackChannelDetails>  ControllerRumbleDetails;                           // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UForceFeedbackEffect*>          ExternalForceFeedbackEffects;                      // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FForceFeedbackChannelDetails>  MinControllerRumbleDetails;                        // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UForceFeedbackEffect*>          MinExternalForceFeedbackEffects;                   // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAbsoluteControllerRumbleScale;                    // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCameraShake>              CameraShakeClass;                                  // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              CameraShakeClassNegativeXAxis;                     // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              CameraShakeClassYAxis;                             // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              CameraShakeClassNegativeYAxis;                     // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillationDuration;                               // 0xA0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillationBlendInTime;                            // 0xA4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillationBlendOutTime;                           // 0xA8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FROscillator                          RotOscillation;                                    // 0xAC(0x30)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FVOscillator                          LocOscillation;                                    // 0xDC(0x30)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          FOVOscillation;                                    // 0x10C(0x10)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RandomShakeInterval;                               // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRandomShakeScalar;                              // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRandomShakeScalar;                              // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          BaseCameraScale;                                   // 0x128(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FShakeScaleAssociation>        AdditionalCameraShakes;                            // 0x160(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFeedbackDataFirstPersonImpulseType FirstPersonImpulseType;                            // 0x170(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFeedbackDataFirstPersonImpulse       CustomFirstPersonImpulse;                          // 0x174(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ParticleSystem;                                    // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideWhenFinished;                                 // 0x1E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ContentDims;                                       // 0x1E4(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleDepth;                                     // 0x1EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScreenParticleScalingMode        ScalingMode;                                       // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyOwnerSee;                                     // 0x1F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysVisible;                                    // 0x1F2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickParticleEvenWhenPaused;                       // 0x1F3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDepthPriorityWorld;                               // 0x1F4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLetSystemFinishAfterStopping;                     // 0x200(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxHUDFeedbackImpulse                HUDImpulse;                                        // 0x208(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EffectFalloffMinDistance;                          // 0x26C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectFalloffMaxDistance;                          // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFeedbackData*>                 AssociatedFeedbacks;                               // 0x278(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUpdateSourceLocation;                             // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleDownOverTime;                                // 0x289(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseScaleOverTimeCurve;                            // 0x28A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4610[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ScaleOverTimeCurve;                                // 0x290(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseContinuousAttributeScale;                      // 0x308(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4615[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ContinuousScale;                                   // 0x310(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    ContinuousScaleCurve;                              // 0x348(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bPlayRadialBlur;                                   // 0x3C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_461C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRadialBlurSelection                  RadialBlurInfo;                                    // 0x3C4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideRadialBlurCenter;                         // 0x3D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4623[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RadialBlurWorldSpaceCenter;                        // 0x3D4(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadialBlurMaxDistance;                             // 0x3E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_462C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLoopingShakeInfo>             LoopingShakes;                                     // 0x3E8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFeedbackData* GetDefaultObj();

	void StopFeedbackForAll(class UFeedbackData* FeedbackData, class UObject* WorldContextObject);
	void StopFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller);
	void StopDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, class UObject* WorldContextObject);
	void StopDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller);
	void PerformFeedbackForAllAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void PerformFeedbackForAll(class UFeedbackData* FeedbackData, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void PerformFeedbackAtLocation(class UFeedbackData* FeedbackData, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void PerformFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext);
	void PerformDefaultFeedbackForAllAtLocation(const struct FFeedbackTableRowHandle& Feedback, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void PerformDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void PerformDefaultFeedbackAtLocation(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback);
	void PerformDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext);
	float GetFeedbackDuration(class UFeedbackData* FeedbackData);
	void GetFeedbackDataRange(class UFeedbackData* FeedbackData, float* MinRange, float* MaxRange);
};

// 0x10 (0x468 - 0x458)
// Class GbxGameSystemCore.FirstPersonConfigurationData
class AFirstPersonConfigurationData : public AActor
{
public:
	bool                                         bAutoFillComponentVariables;                       // 0x458(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4669[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxSkeletalMeshComponent*             Arms;                                              // 0x460(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AFirstPersonConfigurationData* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GbxGameSystemCore.FXVolumeManager
class UFXVolumeManager : public UObject
{
public:
	uint8                                        Pad_46B0[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFXVolume*>                     Volumes;                                           // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFXVolumeManager* GetDefaultObj();

	void OnVolumeDestroyed(class AActor* DestroyedActor);
	void OnPlayerDestroyed(class AActor* DestroyedActor);
};

// 0x20 (0x4B0 - 0x490)
// Class GbxGameSystemCore.FXVolume
class AFXVolume : public AVolume
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x490(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleDepth;                                     // 0x498(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_475E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TagName;                                           // 0x4A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDepthPriorityWorld;                               // 0x4A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4765[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFXVolume* GetDefaultObj();

	void SetVolumesActiveWithTag(bool bWantsActive, class FName SearchTag);
	void SetActive(bool bNewActive);
	void OnActorLeftVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnActorEnteredVolume(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo);
};

// 0x48 (0x70 - 0x28)
// Class GbxGameSystemCore.GameplayTagBasedAttributeValueResolver
class UGameplayTagBasedAttributeValueResolver : public UAttributeValueResolver
{
public:
	TArray<struct FGameplayTagToValueMap>        TagToValueMap;                                     // 0x28(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          ValueIfNoTagIsFound;                               // 0x38(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayTagBasedAttributeValueResolver* GetDefaultObj();

};

// 0x30 (0x1A8 - 0x178)
// Class GbxGameSystemCore.GameplayTagContainerComponent
class UGameplayTagContainerComponent : public UActorComponent
{
public:
	uint8                                        Pad_47AC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TagContainer;                                      // 0x188(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTagContainerComponent* GetDefaultObj();

	class UGameplayTagContainerComponent* GetGameplayTagContainerFromActor(class AActor* Actor, enum class EContainsTagComponent* Branches);
};

// 0x28 (0x90 - 0x68)
// Class GbxGameSystemCore.GameplayTask_RunEnvQuery
class UGameplayTask_RunEnvQuery : public UGameplayTask
{
public:
	UMulticastDelegateProperty_                  Success;                                           // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  Failure;                                           // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4834[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTask_RunEnvQuery* GetDefaultObj();

	class UGameplayTask_RunEnvQuery* RunEnvQueryOnLocation(class AActor* QueryOwner, struct FEnvQueryParams& QueryParams, const struct FVector& Location);
	class UGameplayTask_RunEnvQuery* RunEnvQueryOnActor(class AActor* QueryOwner, struct FEnvQueryParams& QueryParams, class AActor* Actor);
	class UGameplayTask_RunEnvQuery* RunEnvQuery(class AActor* QueryOwner, struct FEnvQueryParams& QueryParams);
	bool GetResultLocations(struct FEnvQueryResult& QueryResult, TArray<struct FVector>* ResultLocations);
	bool GetResultLocation(struct FEnvQueryResult& QueryResult, struct FVector* ResultLocation);
	bool GetResultActors(struct FEnvQueryResult& QueryResult, TArray<class AActor*>* ResultActors);
	bool GetResultActor(struct FEnvQueryResult& QueryResult, class AActor** ResultActor);
};

// 0x28 (0x58 - 0x30)
// Class GbxGameSystemCore.GameResourceData
class UGameResourceData : public UGbxDataAsset
{
public:
	class FText                                  ResourceName;                                      // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIntegerOnlyUpdates;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSerializeInSavegame;                              // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4849[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameResourcePoolData*                 DefaultResourcePoolData;                           // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameResourceData* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class GbxGameSystemCore.GameResourcePoolAttributePropertyValueResolver
class UGameResourcePoolAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	class UGameResourceData*                     Resource;                                          // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameResourcePoolAttributePropertyValueResolver* GetDefaultObj();

};

// 0x0 (0xB8 - 0xB8)
// Class GbxGameSystemCore.GameResourcePoolClampedMaxValueResolver
class UGameResourcePoolClampedMaxValueResolver : public UGameResourcePoolAttributePropertyValueResolver
{
public:

	static class UClass* StaticClass();
	static class UGameResourcePoolClampedMaxValueResolver* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class GbxGameSystemCore.GameResourcePoolClampedValueResolver
class UGameResourcePoolClampedValueResolver : public UGameResourcePoolAttributePropertyValueResolver
{
public:
	float                                        MinValue;                                          // 0xB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxValue;                                          // 0xBC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameResourcePoolClampedValueResolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxGameSystemCore.GameResourcePoolCurrentValueResolver
class UGameResourcePoolCurrentValueResolver : public UAttributeValueResolver
{
public:
	class UGameResourceData*                     Resource;                                          // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameResourcePoolCurrentValueResolver* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.GameResourcePoolCurrentValueNoPauseOnHealResolver
class UGameResourcePoolCurrentValueNoPauseOnHealResolver : public UGameResourcePoolCurrentValueResolver
{
public:

	static class UClass* StaticClass();
	static class UGameResourcePoolCurrentValueNoPauseOnHealResolver* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class GbxGameSystemCore.GameResourcePoolData
class UGameResourcePoolData : public UGbxDataAsset
{
public:
	class UGameResourceData*                     Resource;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseMinValue;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          BaseMaxValue;                                      // 0x40(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartingValue;                                     // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartWithMinValue;                                 // 0x7C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartWithMaxValue;                                 // 0x7D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateCurrentValueOnExtremaChange;                // 0x7E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumReservedValue;                              // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckFilledAgainstOldValues;                      // 0x84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompareToReserveMaxWhenDeterminingFilledEvents;   // 0x85(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseConsumptionRate;                               // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseActiveRegenerationRate;                        // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BasePassiveRegenerationRate;                       // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BasePassivePercentRegenerationRate;                // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BasePassiveMissingPercentRegenerationRate;         // 0x98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseOnIdleRegenerationRate;                        // 0x9C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseOnIdleRegenerationDelay;                       // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseOnDepletedRegenerationDelay;                   // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecentImpulseTimer;                                // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyReplicateToOwner;                             // 0xAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameResourcePoolReplicationType  ReplicationType;                                   // 0xAD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A08[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameResourcePoolData* GetDefaultObj();

};

// 0x138 (0x2B0 - 0x178)
// Class GbxGameSystemCore.GameResourcePoolManagerComponent
class UGameResourcePoolManagerComponent : public UActorComponent
{
public:
	uint8                                        Pad_4A8A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameResourcePool>             ResourcePools;                                     // 0x180(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameResourcePool>             PendingResourcePools;                              // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGameResourcePoolNet                  ReplicatedPoolData;                                // 0x1A0(0x10)(Net, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A90[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameResourcePoolData*>         InitialResourcePools;                              // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameResourceUserEvent>        ResourceEvents;                                    // 0x1C8(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A93[0xC8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FExternalResourcePoolInfo>     ExternalDebugPools;                                // 0x2A0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameResourcePoolManagerComponent* GetDefaultObj();

	void RemoveResourcePoolDelegate(class UGameResourceData* InResourceData, class FName DelegatePropertyName, UDelegateProperty_ ScriptDelegate);
	void RecalculateAttributeInitializedPoolProperties();
	void OnOwnerExperienceLevelChanged(int32 OldExperienceLevel);
	struct FGameResourcePoolReference GetResourcePoolByResource(class UGameResourceData* Resource);
	struct FGameResourcePoolReference CreatePool(class UGameResourcePoolData* PoolData, bool bReinitializeExistingPool);
	void ClearResourcePoolDelegate(class UGameResourceData* InResourceData, class FName DelegatePropertyName);
	void AddResourcePoolDelegate(class UGameResourceData* InResourceData, class FName DelegatePropertyName, UDelegateProperty_ ScriptDelegate);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GameResourcePoolFunctionLibrary
class UGameResourcePoolFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGameResourcePoolFunctionLibrary* GetDefaultObj();

	void SetResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue);
	void ResetResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource);
	void ResetResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool);
	void RefillResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MaxPercentage);
	bool IsResourcePoolInState(const struct FGameResourcePoolReference& InPool, enum class EGameResourcePoolState InState);
	class FName GetDelegatePrefixForResourceEvent(struct FGameResourceUserEvent* InResourceUserEvent);
	bool EqualEqual_ResourcePoolReference(const struct FGameResourcePoolReference& A, const struct FGameResourcePoolReference& B);
	bool EqualEqual_ResourcePoolData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourcePoolData* ResourcePoolData);
	bool EqualEqual_ResourceData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourceData* ResourceData);
	void DrainResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MinPercentage);
	void DeleteResourcePool(struct FGameResourcePoolReference& InPool);
	void ClearResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource);
	void ClearResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool);
	void BreakResourcePoolReference(const struct FGameResourcePoolReference& InPool, bool* bValid, float* CurrentValue, float* MinValue, float* MaxValue);
	void AdjustResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue);
};

// 0x8 (0x70 - 0x68)
// Class GbxGameSystemCore.GameStatChannel
class UGameStatChannel : public UChannel
{
public:
	TWeakObjectPtr<class UGameStatsComponent>    GameStatsComponent;                                // 0x68(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameStatChannel* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class GbxGameSystemCore.GameStatData
class UGameStatData : public UGbxDataAsset
{
public:
	int32                                        DefaultValue;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinValue;                                          // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMinValue;                                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxValue;                                          // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMaxValue;                                      // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  StatName;                                          // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bProfileStat;                                      // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPartyStat;                                        // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BCE[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameStatData* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class GbxGameSystemCore.GameStateAttributeContextResolver
class UGameStateAttributeContextResolver : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UGameStateAttributeContextResolver* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.GameStatList
class UGameStatList : public UGbxDataAsset
{
public:
	TArray<class UGameStatData*>                 GameStats;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameStatList* GetDefaultObj();

};

// 0x18 (0x190 - 0x178)
// Class GbxGameSystemCore.GameStatsComponent
class UGameStatsComponent : public UActorComponent
{
public:
	TArray<struct FGameStat>                     GameStats;                                         // 0x178(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameStatChannel>       GameStatChannel;                                   // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameStatsComponent* GetDefaultObj();

	void UpdateStat(class UGameStatData* GameStat, int32 NewValue);
	void IncrementStat(class UGameStatData* GameStat, int32 Amount);
	int32 GetStatValue(class UGameStatData* GameStat);
	TArray<struct FGameStat> GetGameStats();
};

// 0x30 (0x488 - 0x458)
// Class GbxGameSystemCore.GameStatsManager
class AGameStatsManager : public AActor
{
public:
	uint8                                        Pad_4C56[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameStatsManager* GetDefaultObj();

	void UpdateStat(class AActor* StatContext, class UGameStatData* GameStat, int32 NewValue);
	void IncrementStat(class AActor* StatContext, class UGameStatData* GameStat, int32 IncrementAmount);
	int32 GetStatValue(class AActor* StatContext, class UGameStatData* GameStat);
};

// 0x88 (0x140 - 0xB8)
// Class GbxGameSystemCore.GbxAction_AICharge
class UGbxAction_AICharge : public UGbxAction_SimpleAnim
{
public:
	bool                                         bSetLoopSpeedManually;                             // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4CA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimLoopSpeed;                                     // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartBlendInTime;                                  // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LoopBlendInTime;                                   // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StopBlendInTime;                                   // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAnimMeshList>                 StartAnims;                                        // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAnimMeshList>                 LoopAnims;                                         // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAnimMeshList>                 MissAnims;                                         // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAnimMeshList>                 StrikeAnims;                                       // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAnimMeshList>                 HitWallAnims;                                      // 0x110(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAnimMeshList>                 ReachCliffAnims;                                   // 0x120(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAnimMeshList>                 StopForFriendlyAnims;                              // 0x130(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAction_AICharge* GetDefaultObj();

	void OnStrike(class AActor* Actor);
	void OnStopForFriendly(class AActor* Actor);
	void OnReachCliff(class AActor* Actor);
	void OnMiss(class AActor* Actor);
	void OnLoop(class AActor* Actor);
	void OnHitWall(class AActor* Actor);
};

// 0x8 (0x68 - 0x60)
// Class GbxGameSystemCore.GbxAction_BlueprintBase
class UGbxAction_BlueprintBase : public UGbxAction
{
public:
	bool                                         bAutoCompleted;                                    // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CC4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_BlueprintBase* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class GbxGameSystemCore.GbxAction_ConditionContainer
class UGbxAction_ConditionContainer : public UGbxAction
{
public:
	enum class EActionSelectionMethod            ActionSelectionMethod;                             // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConditionActionPair>          ConditionList;                                     // 0x68(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAction_ConditionContainer* GetDefaultObj();

};

// 0x68 (0xC8 - 0x60)
// Class GbxGameSystemCore.GbxAction_DirectionContainer
class UGbxAction_DirectionContainer : public UGbxAction
{
public:
	TArray<struct FDirectionActionData>          DirectionList;                                     // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FRelativeDirectionData                DirectionData;                                     // 0x70(0x50)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EDirectionPlane                   Plane;                                             // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4CE0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAction_DirectionContainer* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class GbxGameSystemCore.GbxAction_DodgePicker
class UGbxAction_DodgePicker : public UGbxAction
{
public:
	TSubclassOf<class UGbxAction>                IdleLeft;                                          // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                IdleRight;                                         // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                MovingLeft;                                        // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                MovingLeftBackward;                                // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                MovingLeftForward;                                 // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                MovingRight;                                       // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                MovingRightBackward;                               // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UGbxAction>                MovingRightForward;                                // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAction_DodgePicker* GetDefaultObj();

};

// 0x1A0 (0x258 - 0xB8)
// Class GbxGameSystemCore.GbxAction_DropshipSpawn
class UGbxAction_DropshipSpawn : public UGbxAction_SimpleAnim
{
public:
	struct FAnimMeshList                         StartAnims;                                        // 0xB8(0x78)(Edit, NativeAccessSpecifierPrivate)
	struct FAnimMeshList                         InAirAnims;                                        // 0x130(0x78)(Edit, NativeAccessSpecifierPrivate)
	struct FAnimMeshList                         RecoveryAnims;                                     // 0x1A8(0x78)(Edit, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0x220(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0x224(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AnimSlot;                                          // 0x228(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RotationLerpTime;                                  // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MoveWithSpawnPointTime;                            // 0x234(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SwitchToFallingTime;                               // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4D02[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     AnimStart;                                         // 0x240(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     AnimInAir;                                         // 0x248(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     AnimRecovery;                                      // 0x250(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAction_DropshipSpawn* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class GbxGameSystemCore.GbxAction_KeyedContainer
class UGbxAction_KeyedContainer : public UGbxAction
{
public:
	struct FGameplayTag                          ActionKey;                                         // 0x60(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAction_KeyedContainer* GetDefaultObj();

};

// 0x150 (0x208 - 0xB8)
// Class GbxGameSystemCore.GbxAction_Launch
class UGbxAction_Launch : public UGbxAction_SimpleAnim
{
public:
	float                                        VelocityMinimum;                                   // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VelocityScale;                                     // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VelocityUpBoost;                                   // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RotationTime;                                      // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimMeshList                         InAirAnims;                                        // 0xC8(0x78)(Edit, NativeAccessSpecifierPrivate)
	struct FAnimMeshList                         RecoveryAnims;                                     // 0x140(0x78)(Edit, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AnimSlot;                                          // 0x1C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     AnimInAir;                                         // 0x1C8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     AnimRecovery;                                      // 0x1D0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimActionDef                        InAirAnim;                                         // 0x1D8(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPrivate)
	struct FAnimActionDef                        RecoveryAnim;                                      // 0x1F0(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAction_Launch* GetDefaultObj();

};

// 0x58 (0xA0 - 0x48)
// Class GbxGameSystemCore.MotionMatchedAnimationTable
class UMotionMatchedAnimationTable : public UGbxAnimTable
{
public:
	uint8                                        Pad_4D2C[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RootMotionBone;                                    // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             RootMotionBoneUpAxis;                              // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpAxisIsNegative;                                 // 0x81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             RootMotionBoneForwardAxis;                         // 0x82(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForwardAxisIsNegative;                            // 0x83(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             RootBoneForwardAxis;                               // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRootForwardAxisIsNegative;                        // 0x85(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             RootBoneUpAxis;                                    // 0x86(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRootUpAxisIsNegative;                             // 0x87(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NoMotionSpeed;                                     // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseIdlePoseDriving;                               // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinIdleTime;                                       // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicToKinematicTransition     DynamicToKinematicTransition;                      // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendToRecoveryTime;                               // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAllowedDeviation;                               // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMotionMatchedAnimationTable* GetDefaultObj();

};

// 0xD8 (0x190 - 0xB8)
// Class GbxGameSystemCore.GbxAction_Ragdoll
class UGbxAction_Ragdoll : public UGbxAction_SimpleAnim
{
public:
	struct FAnimActionDef                        RagdollAnim;                                       // 0xB8(0x18)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        RagdollDelayTime;                                  // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpwardForceMultiplier;                             // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpwardLaunchAngle;                                 // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNumericRange                         LaunchAngleLimits;                                 // 0xDC(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        TerminalResultantVelocity;                         // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHaltMotionBeforeImpulseApplication;               // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4D51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RagdollAnimBlendInTime;                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimActionDef                        RagdollLoopingAnim;                                // 0xF0(0x18)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bPlayLoopingAnimWhileNotIdle;                      // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4D56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinRagdollTime;                                    // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  AnimSlot;                                          // 0x110(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAttachedObjectFollow>         AttachedObjects;                                   // 0x118(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMotionMatchedAnimationTable*          RecoveryAnimations;                                // 0x128(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHitReactionTag*                       DeathReactionTag;                                  // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanGetup;                                         // 0x138(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4D5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GetupIdleTime;                                     // 0x13C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GetupIdleSpeedThreshold;                           // 0x140(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4D5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GetupTestBone;                                     // 0x148(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             TestBoneUpAxis;                                    // 0x150(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpAxisIsNegative;                                 // 0x151(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAxis                             TestBoneForwardAxis;                               // 0x152(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForwardAxisIsNegative;                            // 0x153(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4D67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimActionDef                        GetupAnimUp;                                       // 0x158(0x18)(Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAnimActionDef                        GetupAnimDown;                                     // 0x170(0x18)(Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        GetupBlendInTime;                                  // 0x188(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GetupBlendOutTime;                                 // 0x18C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAction_Ragdoll* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class GbxGameSystemCore.GbxAction_RandomContainer
class UGbxAction_RandomContainer : public UGbxAction
{
public:
	TArray<struct FRandomActionPair>             ActionList;                                        // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAction_RandomContainer* GetDefaultObj();

};

// 0x88 (0x140 - 0xB8)
// Class GbxGameSystemCore.GbxAction_StretchBones
class UGbxAction_StretchBones : public UGbxAction_SimpleAnim
{
public:
	struct FAnimActionDef                        StretchAnimation;                                  // 0xB8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnimSlot;                                          // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStretchBonesSettings                 StretchBonesSettings;                              // 0xE0(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUniformStretch;                                   // 0x110(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxBlackboardKeySelector             TargetKey;                                         // 0x118(0x10)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x128(0xC)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchBonesActorTrackingStyle   ActorTrackingStyle;                                // 0x134(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTraceToGround;                                    // 0x135(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D8C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceToGroundDistance;                             // 0x138(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPredictionDistance;                             // 0x13C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAction_StretchBones* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.StretchBonesBlueprintLibrary
class UStretchBonesBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStretchBonesBlueprintLibrary* GetDefaultObj();

	TArray<struct FGbxActionRegister> SetStretchBonesTarget(TArray<struct FGbxActionRegister>& GbxActionRegisters, class AActor* TargetActor, const struct FVector& TargetPosition);
	TArray<struct FGbxActionRegister> SetStretchBonesDistance(TArray<struct FGbxActionRegister>& GbxActionRegisters, float Distance);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxActionBlueprintLibrary
class UGbxActionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxActionBlueprintLibrary* GetDefaultObj();

	void StopLoopingActionClass(TSubclassOf<class UGbxAction_Loop> ActionClass, class AActor* Target);
	void StopActionSlot(class FName ActionSlotName, class AActor* Target);
	void StopActions(class AActor* Target);
	void StopActionClass(TSubclassOf<class UGbxAction> ActionClass, class AActor* Target);
	TArray<struct FGbxActionRegister> SetObjectGbxActionRegister(TArray<struct FGbxActionRegister>& GbxActionRegisters, class FName RegisterKey, class UObject* Value, bool bReplicates);
	TArray<struct FGbxActionRegister> SetNameGbxActionRegister(TArray<struct FGbxActionRegister>& GbxActionRegisters, class FName RegisterKey, class FName Value, bool bReplicates);
	TArray<struct FGbxActionRegister> SetIntGbxActionRegister(TArray<struct FGbxActionRegister>& GbxActionRegisters, class FName RegisterKey, int32 Value, bool bReplicates);
	TArray<struct FGbxActionRegister> SetFloatGbxActionRegister(TArray<struct FGbxActionRegister>& GbxActionRegisters, class FName RegisterKey, float Value, bool bReplicates);
	void K2_UpdateActionPlayRate(class UGbxAction* Action, float PlayRate);
	void K2_UpdateActionDirection(class UGbxAction* Action, const struct FVector& Direction);
	void K2_StopActionObj(class UGbxAction* Action, class AActor* Target);
	void K2_ShowGbxActionScreenLogs(bool bShowLogsOnScreen);
	void K2_Resume(class UGbxAction* Action);
	void K2_ReplicatedProceedToNextSection(class UGbxAction* Action);
	void K2_ReplicatedJumpToNextSection(class UGbxAction* Action);
	void K2_ProceedToNextSection(class UGbxAction* Action);
	void K2_Pause(class UGbxAction* Action);
	void K2_JumpToNextSection(class UGbxAction* Action);
	float K2_GetTimeRemaining(class UGbxAction* Target);
	float K2_GetMaxCurrentTime(class UGbxAction* Action);
	class UGbxAction* K2_GetActionByClass(TSubclassOf<class UGbxAction> ActionClass, class AActor* Target);
	class FString GetSummary_AnimActionDef(struct FAnimActionDef& AnimActionDef);
	TSubclassOf<class UGbxAction> GetKeyedActionClass(const struct FGameplayTag& ActionKey, class AActor* Target);
};

// 0x268 (0x3E0 - 0x178)
// Class GbxGameSystemCore.GbxActionComponent
class UGbxActionComponent : public UActorComponent
{
public:
	uint8                                        Pad_4F1B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionSlot>                ActionSlots;                                       // 0x180(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FDataActionPair>               EditorKeyedActionList;                             // 0x190(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataActionPair_Spawn>         SpawnKeyedActionList;                              // 0x1A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataActionPair_SpawnMesh>     SpawnMeshKeyedActionList;                          // 0x1B0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataActionPair_SmartObject>   SmartObjectKeyedActionList;                        // 0x1C0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F21[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnActionStarted;                                   // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnActionStopped;                                   // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4F23[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxActionComponent* GetDefaultObj();

	void UpdateActionRemoteServer(const struct FActionState_Base& ActionData);
	void StopOnRemoteServer(int32 ManagerRepId, enum class EGbxActionEndState& EndState);
	void StopLoopingActionClass(TSubclassOf<class UGbxAction_Loop> ActionClass);
	void StopActionSlot(class FName ActionSlotName);
	void StopActions();
	void StopActionClass(TSubclassOf<class UGbxAction> ActionClass);
	void PlayOnRemoteServer(TSubclassOf<class UGbxAction> ActionClass, const struct FActionState_Base& ActionData);
	void OnComponentUnregistered(class UActorComponent* ActorComponent);
	void OnComponentDetached(class USceneComponent* SceneComponent);
	void OnComponentAttached(class USceneComponent* SceneComponent);
	void NotifyInterruptRequest();
	class UGbxAction* K2_Play(TSubclassOf<class UGbxAction> ActionClass);
	bool K2_IsPlayingObj(class UGbxAction* Action);
	class UGbxAction* K2_GetActionBySlot(class FName ActionSlotName);
	class UGbxAction* K2_GetActionByClass(TSubclassOf<class UGbxAction> ActionClass);
	bool IsPlayingSlot(class FName& ActionSlotName);
	bool IsPlayingClass(TSubclassOf<class UGbxAction> ActionClass);
};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.GbxActionDataAsset
class UGbxActionDataAsset : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UGbxActionDataAsset* GetDefaultObj();

};

// 0x110 (0x568 - 0x458)
// Class GbxGameSystemCore.GbxActionManager
class AGbxActionManager : public AActor
{
public:
	struct FActionStateNet                       ActionRepWrapper;                                  // 0x458(0x108)(Net, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F35[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxActionManager* GetDefaultObj();

};

// 0x278 (0x2A8 - 0x30)
// Class GbxGameSystemCore.GbxAnimBlueprintProfile
class UGbxAnimBlueprintProfile : public UGbxDataAsset
{
public:
	bool                                         bImportedLegIKSettings;                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FootIKTraceUpScale;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootIKTraceDownScale;                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootIKOffsetInterpSpeed;                           // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FootIKTargetOffset;                                // 0x40(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FootIKFootLODThreshold;                            // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNumericRange                         MeshOffsetCharacterSpeedRange;                     // 0x50(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MeshIKOffsetInterpSpeed;                           // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldLimitFootDistanceToMeshOffset;              // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F4C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SlopeAdaptation;                                   // 0x60(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        SlopeAdaptationBone;                               // 0x70(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxSlopeAngle;                                     // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeNormalMinInterpSpeed;                         // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlopeNormalMaxInterpSpeed;                         // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNumericRange                         SlopeNormalCharacterSpeedRange;                    // 0x94(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        FootIKLODThreshold;                                // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootIKLODInterpolationSpeed;                       // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScreenSizeSelection                  FootIkScreenSizeThreshold;                         // 0xA8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseFootIkScreenSizeThreshold;                     // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScreenSizeSelection                  FootIkTraceScreenSizeThreshold;                    // 0xC8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseFootIkTraceScreenSizeThreshold;                // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FootIKReachPrecision;                              // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FootIKMaxIterations;                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimLegIKDefinition>          FootIKLegsDefinition;                              // 0xF0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        MinVelocity;                                       // 0x100(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVelocity;                                       // 0x104(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        BoneToModify;                                      // 0x108(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ParentBoneToModify;                                // 0x120(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGbxLookAxisOption                ParentLookAxis;                                    // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneBlendParams>              BonesToModify;                                     // 0x140(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneBlendParams>              EyeBonesToModify;                                  // 0x150(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        LookAtBlinkAngleOverride;                          // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtBlinkAngleOverride;                      // 0x164(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEyeMovement;                                   // 0x165(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F6A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              EyeShiftMin;                                       // 0x168(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EyeShiftMax;                                       // 0x174(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EyeGlanceMin;                                      // 0x180(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EyeGlanceMax;                                      // 0x18C(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EyeFocusTimeMin;                                   // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeFocusTimeMax;                                   // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeGlanceTimeMin;                                  // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeGlanceTimeMax;                                  // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeShiftTimeMin;                                   // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EyeShiftTimeMax;                                   // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LookAtEyeLODThreshold;                             // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LookAtLODThreshold;                                // 0x1B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LookAtLODInterpolationSpeed;                       // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScreenSizeSelection                  LookAtEyeScreenSizeThreshold;                      // 0x1C0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtEyeScreenSizeThreshold;                  // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScreenSizeSelection                  LookAtScreenSizeThreshold;                         // 0x1E0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookAtScreenSizeThreshold;                     // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FForwardDynamicsNodeProfile>   ForwardDynamicsNodeList;                           // 0x200(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TeethOffsetOverride;                               // 0x218(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTeethOffsetOverride;                           // 0x224(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        UpperTeethBoneRef;                                 // 0x228(0x18)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               BoneTagToBoneOverrideNameMap;                      // 0x240(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseUpperTeethBoneRefOverride;                     // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         DefaultIdleLoopAnimation;                          // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x2A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAnimBlueprintProfile* GetDefaultObj();

	void RebuildBoneLists();
	void AnimBlueprintImportFunction(enum class EAnimBPProfileImport ImportType);
};

// 0x28 (0x58 - 0x30)
// Class GbxGameSystemCore.GbxAnimStateMachineDefinition
class UGbxAnimStateMachineDefinition : public UGbxDataAsset
{
public:
	class FName                                  Name;                                              // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          StateMachines;                                     // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FAnimStateGroup>               StateGroups;                                       // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAnimStateMachineDefinition* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GbxGameSystemCore.GbxAnimStateManager_Falling
class UGbxAnimStateManager_Falling : public UGbxAnimStateManager
{
public:
	class UGbxCharacterAnimInstance*             GbxCharAnimInst;                                   // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxCharacterMovementComponent*        GbxCharMoveComponent;                              // 0x40(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_Falling* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxGameSystemCore.GbxAnimStateManager_RootMotion
class UGbxAnimStateManager_RootMotion : public UGbxAnimStateManager
{
public:
	class UGbxCharacterMovementComponent*        GbxCharMoveComponent;                              // 0x38(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAnimStateManager_RootMotion* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.GbxAttributeData
class UGbxAttributeData : public UGbxDataAsset
{
public:
	class UAttributeContextResolver*             ContextResolver;                                   // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAttributeValueResolver*               ValueResolver;                                     // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAttributeData* GetDefaultObj();

	bool CanSetBaseValue();
	bool CanBindToOnChangedEvent();
	bool CanAddModifiers();
	bool CanAddAndRemoveModifiers();
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxAttributeFunctionLibrary
class UGbxAttributeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxAttributeFunctionLibrary* GetDefaultObj();

	void UnbindFromOnAttributeChanged(struct FGbxAttributeDelegateBindingHandle& BindingHandle);
	void UnbindEventFromOnIntegerAttributeChanged(struct FGbxAttributeInteger& Attribute, UDelegateProperty_& Delegate);
	void UnbindEventFromOnFloatAttributeChanged(struct FGbxAttributeFloat& Attribute, UDelegateProperty_& Delegate);
	void UnbindAllEventsFromOnIntegerAttributeChanged(struct FGbxAttributeInteger& Attribute);
	void UnbindAllEventsFromOnFloatAttributeChanged(struct FGbxAttributeFloat& Attribute);
	void RemoveMultipleAttributeModifiers(TArray<struct FGbxAttributeModifierHandle>& ModifierHandles);
	void RemoveModifierFromGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, struct FGbxAttributeModifierHandle& ModifierHandle, enum class EGbxAttributeModifierActionExecOutput* ModifierActionResult);
	bool RemoveAttributeModifier(struct FGbxAttributeModifierHandle& ModifierHandle);
	struct FGbxAttributeDelegateBindingHandle RefreshBindingToOnAttributeChangedEvent(struct FGbxAttributeDelegateBindingHandle& BindingHandle, class UObject* ContextSource);
	struct FGbxAttributeInteger MakeGbxAttributeInteger(int32 BaseValue);
	struct FGbxAttributeFloat MakeGbxAttributeFloat(float BaseValue);
	int32 GetValueOfAttributeAsInteger(class UGbxAttributeData* Attribute, class UObject* ContextSource, int32 DefaultValue);
	bool GetValueOfAttributeAsBoolean(class UGbxAttributeData* Attribute, class UObject* ContextSource, bool DefaultValue);
	float GetValueOfAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, float DefaultValue);
	float GetValueFromAttributeDefinedRow(struct FDataTableRowHandle& RowHandle, class UObject* ContextSource);
	float EvaluateAttributeInitializer(TSubclassOf<class UAttributeInitializer> Initializer, class UObject* ContextSource);
	float EvaluateAttributeInitializationData(struct FAttributeInitializationData& InitializationData, class UObject* ContextSource);
	bool EqualEqual_GbxAttributeIntegerValue(struct FGbxAttributeInteger& A, int32 B);
	bool EqualEqual_GbxAttributeInteger(struct FGbxAttributeInteger& A, struct FGbxAttributeInteger& B);
	bool EqualEqual_GbxAttributeFloatValue(struct FGbxAttributeFloat& A, float B);
	bool EqualEqual_GbxAttributeFloat(struct FGbxAttributeFloat& A, struct FGbxAttributeFloat& B);
	class FString Conv_GbxAttributeModifierHandleToString(struct FGbxAttributeModifierHandle& Attribute);
	class FString Conv_GbxAttributeIntegerToString(struct FGbxAttributeInteger& Attribute);
	int32 Conv_GbxAttributeIntegerToInteger(struct FGbxAttributeInteger& Attribute);
	class FString Conv_GbxAttributeFloatToString(struct FGbxAttributeFloat& Attribute);
	float Conv_GbxAttributeFloatToFloat(struct FGbxAttributeFloat& Attribute);
	class FString Conv_AttributeInitializationDataToString(struct FAttributeInitializationData& InitData);
	void BreakGbxAttributeInteger(struct FGbxAttributeInteger& Attribute, int32* Value, int32* BaseValue);
	void BreakGbxAttributeFloat(struct FGbxAttributeFloat& Attribute, float* Value, float* BaseValue);
	void BindEventToOnIntegerAttributeChanged(struct FGbxAttributeInteger& Attribute, UDelegateProperty_& Delegate);
	void BindEventToOnFloatAttributeChanged(struct FGbxAttributeFloat& Attribute, UDelegateProperty_& Delegate);
	struct FGbxAttributeDelegateBindingHandle BindEventToOnAttributeChanged(class UGbxAttributeData* Attribute, class UObject* ContextSource, UDelegateProperty_& Delegate);
	TArray<struct FGbxAttributeModifierHandle> ApplyMultipleAttributeEffects(TArray<struct FAttributeEffectData>& Effects, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource);
	void ApplyMultipleAttributeBaseValueData(TArray<struct FAttributeBaseValueData>& BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext);
	struct FGbxAttributeModifierHandle ApplyAttributeEffect(struct FAttributeEffectData& Effect, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource, enum class EGbxAttributeModifierActionExecOutput* ModifierActionResult);
	void ApplyAttributeBaseValueData(struct FAttributeBaseValueData& BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext, enum class EGbxAttributeModifierActionExecOutput* ModifierActionResult);
	struct FGbxAttributeModifierHandle AddModifierToGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, enum class EGbxAttributeModifierType ModifierType, float ModifierValue, enum class EGbxAttributeModifierActionExecOutput* ModifierActionResult);
};

// 0x10 (0x188 - 0x178)
// Class GbxGameSystemCore.GbxAttributesComponent
class UGbxAttributesComponent : public UActorComponent
{
public:
	TArray<class UGbxAttributeSet*>              AttributeSets;                                     // 0x178(0x10)(Edit, ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAttributesComponent* GetDefaultObj();

	bool IsAttributeSetClassUnrelatedToExistingSet(class UClass* AttributeSetClass);
};

// 0x8 (0x30 - 0x28)
// Class GbxGameSystemCore.GbxAttributeSet
class UGbxAttributeSet : public UObject
{
public:
	class UAttributeContextResolver*             ContextResolver;                                   // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAttributeSet* GetDefaultObj();

};

// 0x10 (0xF8 - 0xE8)
// Class GbxGameSystemCore.GbxAttributeSetBlueprint
class UGbxAttributeSetBlueprint : public Ublueprint
{
public:
	TArray<struct FPropertyToAttributeMapping>   PropertyToAttributeMapping;                        // 0xE8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxAttributeSetBlueprint* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class GbxGameSystemCore.GbxAttributeSetContextResolver
class UGbxAttributeSetContextResolver : public UAttributeContextResolver
{
public:
	TSubclassOf<class UGbxAttributeSet>          AttributeSetClass;                                 // 0x50(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAttributeSetContextResolver* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxGameSystemCore.GbxAttributeSetValueResolver
class UGbxAttributeSetValueResolver : public UAttributePropertyValueResolver
{
public:

	static class UClass* StaticClass();
	static class UGbxAttributeSetValueResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxBlackboardKeySelectorExt
class UGbxBlackboardKeySelectorExt : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxBlackboardKeySelectorExt* GetDefaultObj();

	void SetValueAsVector(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FVector& Value);
	void SetValueAsTargetActorInfo(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, struct FTargetActorInfo& Value);
	void SetValueAsString(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const class FString& Value);
	void SetValueAsRotator(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FRotator& Value);
	void SetValueAsObject(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UObject* Value);
	void SetValueAsName(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class FName Value);
	void SetValueAsInt(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, int32 Value);
	void SetValueAsFloat(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, float Value);
	void SetValueAsFlag(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value, float Duration);
	void SetValueAsEnum(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, uint8 Value);
	void SetValueAsClass(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UClass* Value);
	void SetValueAsBool(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value);
	struct FVector GetValueAsVector(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	struct FTargetActorInfo GetValueAsTargetActorInfo(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class FString GetValueAsString(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	struct FRotator GetValueAsRotator(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class UObject* GetValueAsObject(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class FName GetValueAsName(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	int32 GetValueAsInt(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	float GetValueAsFloat(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	uint8 GetValueAsEnum(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class UClass* GetValueAsClass(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	bool GetValueAsBool(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class AActor* GetValueAsActor(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
	class FString GetPropertyDescription(struct FGbxBlackboardKeySelector& BBKey, class UProperty* Property);
	void ClearValue(struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent);
};

// 0x30 (0x60 - 0x30)
// Class GbxGameSystemCore.GbxBoneModifyProfile
class UGbxBoneModifyProfile : public UGbxDataAsset
{
public:
	class UAnimSequence*                         ReferenceAnimation;                                // 0x30(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTranslation;                                   // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRotation;                                      // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseScale;                                         // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxBoneModifyProfile_PoseMode    PoseMode;                                          // 0x3B(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationTime;                                     // 0x3C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneModifyInfo>               Bones;                                             // 0x40(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FBoneModifyState>              BoneModStates;                                     // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxBoneModifyProfile* GetDefaultObj();

};

// 0x0 (0x180 - 0x180)
// Class GbxGameSystemCore.GbxCameraShake
class UGbxCameraShake : public UCameraShake
{
public:

	static class UClass* StaticClass();
	static class UGbxCameraShake* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class GbxGameSystemCore.GbxCondition_ActorIsOfClass
class UGbxCondition_ActorIsOfClass : public UGbxCondition
{
public:
	class UClass*                                InputClass;                                        // 0x88(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCheckAbsolute;                                    // 0x90(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_53A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_ActorIsOfClass* GetDefaultObj();

};

// 0x80 (0x108 - 0x88)
// Class GbxGameSystemCore.GbxCondition_AttackedRecently
class UGbxCondition_AttackedRecently : public UGbxCondition
{
public:
	struct FGbxParam                             AttackedWithin;                                    // 0x88(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_AttackedRecently* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxGameSystemCore.GbxCondition_Blueprint
class UGbxCondition_Blueprint : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_Blueprint* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext);
};

// 0x20 (0xA8 - 0x88)
// Class GbxGameSystemCore.GbxCondition_CharacterMass
class UGbxCondition_CharacterMass : public UGbxCondition
{
public:
	enum class EMassComparison                   ComparisonTest;                                    // 0x88(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_53C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMassSelection                        Mass;                                              // 0x90(0x18)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_CharacterMass* GetDefaultObj();

};

// 0x78 (0x100 - 0x88)
// Class GbxGameSystemCore.GbxCondition_Comparison
class UGbxCondition_Comparison : public UGbxCondition
{
public:
	struct FAttributeInitializationData          OperandA;                                          // 0x88(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EConditionComparisonOperatorType  Operator;                                          // 0xC0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_53D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          OperandB;                                          // 0xC8(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_Comparison* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class GbxGameSystemCore.GbxCondition_Compound
class UGbxCondition_Compound : public UGbxCondition
{
public:
	class UGbxCondition*                         Condition1;                                        // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECompoundConditionOperatorType    Operator;                                          // 0x90(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_53DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         Condition2;                                        // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_Compound* GetDefaultObj();

};

// 0x48 (0xD0 - 0x88)
// Class GbxGameSystemCore.GbxCondition_Flag
class UGbxCondition_Flag : public UGbxCondition
{
public:
	struct FGbxFlagEval                          FlagEval;                                          // 0x88(0x48)(Edit, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_Flag* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class GbxGameSystemCore.GbxCondition_HasActorTags
class UGbxCondition_HasActorTags : public UGbxCondition
{
public:
	struct FActorTagCompositeQuery               ActorTagQuery;                                     // 0x88(0x10)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxCondition_HasActorTags* GetDefaultObj();

};

// 0x20 (0xA8 - 0x88)
// Class GbxGameSystemCore.GbxCondition_HasGameplayTags
class UGbxCondition_HasGameplayTags : public UGbxCondition
{
public:
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x88(0x20)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxCondition_HasGameplayTags* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxGameSystemCore.GbxCondition_HasInstigatedStatusEffect
class UGbxCondition_HasInstigatedStatusEffect : public UGbxCondition
{
public:
	class UStatusEffectData*                     StatusEffectData;                                  // 0x88(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxCondition_HasInstigatedStatusEffect* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxGameSystemCore.GbxCondition_IsBlackboardTarget
class UGbxCondition_IsBlackboardTarget : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_IsBlackboardTarget* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxGameSystemCore.GbxCondition_IsLowOnHealth
class UGbxCondition_IsLowOnHealth : public UGbxCondition
{
public:
	float                                        LowHealth;                                         // 0x88(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEvaluateOnContextOwner;                           // 0x8C(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5401[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_IsLowOnHealth* GetDefaultObj();

};

// 0x0 (0x88 - 0x88)
// Class GbxGameSystemCore.GbxCondition_IsPlayerController
class UGbxCondition_IsPlayerController : public UGbxCondition
{
public:

	static class UClass* StaticClass();
	static class UGbxCondition_IsPlayerController* GetDefaultObj();

};

// 0x80 (0x108 - 0x88)
// Class GbxGameSystemCore.GbxCondition_IsTargetAimedAtMe
class UGbxCondition_IsTargetAimedAtMe : public UGbxCondition
{
public:
	struct FGbxParam                             AngleThreshold;                                    // 0x88(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_IsTargetAimedAtMe* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxGameSystemCore.GbxCondition_IsTrue
class UGbxCondition_IsTrue : public UGbxCondition
{
public:
	bool                                         bIsTrue;                                           // 0x88(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5413[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_IsTrue* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class GbxGameSystemCore.GbxCondition_List
class UGbxCondition_List : public UGbxCondition
{
public:
	enum class ECompoundConditionOperatorType    Operator;                                          // 0x88(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5429[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxCondition*>                 Conditions;                                        // 0x90(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxCondition_List* GetDefaultObj();

	bool RequiresNativeClass();
	class UClass* GetRequiredInterface();
};

// 0x98 (0x120 - 0x88)
// Class GbxGameSystemCore.GbxCondition_SensedRecently
class UGbxCondition_SensedRecently : public UGbxCondition
{
public:
	struct FGbxParam                             SensedWithin;                                      // 0x88(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UAISense>>          Senses;                                            // 0x108(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bAnyTarget;                                        // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5434[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_SensedRecently* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxGameSystemCore.GbxCondition_TeamAttitude
class UGbxCondition_TeamAttitude : public UGbxCondition
{
public:
	uint8                                        bHostile : 1;                                      // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNeutral : 1;                                      // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bFriendly : 1;                                     // Mask: 0x4, PropSize: 0x10x88(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5439[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_TeamAttitude* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxGameSystemCore.GbxCondition_TeamCheck
class UGbxCondition_TeamCheck : public UGbxCondition
{
public:
	class UTeam*                                 InputTeam;                                         // 0x88(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxCondition_TeamCheck* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class GbxGameSystemCore.GbxCustomizationCollectionData
class UGbxCustomizationCollectionData : public UGbxDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	int32                                        SortPriority;                                      // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5442[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxCustomizationData*>         Customizations;                                    // 0x50(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGbxCustomizationCollectionData*> CustomizationCollections;                          // 0x60(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCustomizationCollectionCustomColorData> CustomColors;                                      // 0x70(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCustomizationCustomFloatOverrideEntry> CustomFloats;                                      // 0x80(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxCustomizationCollectionData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxCustomizationInterface
class IGbxCustomizationInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxCustomizationInterface* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.GbxCustomizationMorphTargetSetData
class UGbxCustomizationMorphTargetSetData : public UGbxDataAsset
{
public:
	class FName                                  Name;                                              // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          MorphTargets;                                      // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxCustomizationMorphTargetSetData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.GbxCustomizationTargetData
class UGbxCustomizationTargetData : public UGbxDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxCustomizationTargetData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxDataTableFunctionLibrary
class UGbxDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxDataTableFunctionLibrary* GetDefaultObj();

	float GetDataTableValueFromHandle(struct FDataTableValueHandle& ValueHandle, class UObject* ContextSource, float DefaultValue);
	bool GetDataTableValue(class UDataTable* Table, class FName RowName, class FName ValueName, class UScriptStruct* ValueInStructType, int32* OutValue);
	class FString Conv_DataTableValueHandleToString(struct FDataTableValueHandle& ValueHandle);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxEnvQueryHotSpotProviderInterface
class IGbxEnvQueryHotSpotProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxEnvQueryHotSpotProviderInterface* GetDefaultObj();

};

// 0x120 (0x850 - 0x730)
// Class GbxGameSystemCore.GbxEqsRenderingComponent
class UGbxEqsRenderingComponent : public UEQSRenderingComponent
{
public:
	uint8                                        Pad_54AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExecuteQuery;                                     // 0x738(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEqsTraceDrawMode                 TraceDrawMode;                                     // 0x739(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54B0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExternalQueryParams;                               // 0x740(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       EnvQueryParams;                                    // 0x750(0xB8)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_54B5[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxEqsRenderingComponent* GetDefaultObj();

	void GetAvailableEnvQueryParamRefNames(TArray<class FString>* Names);
};

// 0x10 (0x38 - 0x28)
// Class GbxGameSystemCore.GbxEventDelegateBinding
class UGbxEventDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FGbxBlueprintlegateBinding>    DelegateBindings;                                  // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxEventDelegateBinding* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.GbxFeedbackBase
class UGbxFeedbackBase : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UGbxFeedbackBase* GetDefaultObj();

	void StopGbxFeedback(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller);
	void PlayGbxFeedbackData3D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, const struct FVector& SourceLocation, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
	void PlayGbxFeedbackData2D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext);
};

// 0x1E8 (0x218 - 0x30)
// Class GbxGameSystemCore.GbxFeedbackData
class UGbxFeedbackData : public UGbxFeedbackBase
{
public:
	int32                                        FeedbackType;                                      // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_551F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FForceFeedbackChannelDetails>  ControllerRumbleDetails;                           // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UForceFeedbackEffect*>          ExternalControllerRumbleDetails;                   // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FForceFeedbackChannelDetails>  MinControllerRumbleDetails;                        // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UForceFeedbackEffect*>          MinExternalControllerRumbleDetails;                // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAbsoluteControllerRumbleScale;                    // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5526[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCameraShake>              CameraShakeBase;                                   // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              CameraShakeDirectionalY;                           // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomShakeInterval;                               // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRandomShakeScalar;                              // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRandomShakeScalar;                              // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnique;                                           // 0x9C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContinuousAttributeScale;                      // 0x9D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_552B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ContinuousScale;                                   // 0xA0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    ContinuousScaleCurve;                              // 0xD8(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bScaleDownOverTime;                                // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseScaleOverTimeCurve;                            // 0x151(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5530[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ScaleOverTimeCurve;                                // 0x158(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bPlayRadialBlur;                                   // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5532[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRadialBlurSelection                  RadialBlurInfo;                                    // 0x1D4(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideRadialBlurCenter;                         // 0x1E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextAsWorldSpaceCenter;                     // 0x1E1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5535[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RadialBlurWorldSpaceCenter;                        // 0x1E4(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RadialBlurMaxDistance;                             // 0x1F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5537[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ScreenParticles;                                   // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideWhenFinished;                                 // 0x200(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ContentDims;                                       // 0x204(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleDepth;                                     // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScreenParticleScalingMode        ScalingMode;                                       // 0x210(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyOwnerSee;                                     // 0x211(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysVisible;                                    // 0x212(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickParticleEvenWhenPaused;                       // 0x213(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLetSystemFinishAfterStopping;                     // 0x214(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5540[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxFeedbackData* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.GbxFeedbackList
class UGbxFeedbackList : public UGbxFeedbackBase
{
public:
	TArray<class UGbxFeedbackData*>              FeedbackList;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxFeedbackList* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxGameSystemCore.GbxFeedbackManager
class UGbxFeedbackManager : public UObject
{
public:
	uint8                                        Pad_5548[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxFeedbackManager* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.GbxFlagData
class UGbxFlagData : public UGbxDataAsset
{
public:
	class UGbxCondition*                         Condition;                                         // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAttributeContextResolver*             ContextResolver;                                   // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxFlagValueResolver*                 ValueResolver;                                     // 0x40(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxFlagData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxFlagFunctionLibrary
class UGbxFlagFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxFlagFunctionLibrary* GetDefaultObj();

	void SetFlagValue(class UObject* WorldContextObject, struct FGbxFlag& Flag, bool bNewValue);
	void SetFlagTrueTimed(class UObject* WorldContextObject, struct FGbxFlag& Flag, float Duration);
	void SetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, bool bNewValue);
	void SetFlagDataTrueTimed(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float Duration);
	bool GetFlagValue(class UObject* WorldContextObject, struct FGbxFlag& Flag);
	bool GetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource);
	bool FlagTrueWithin(class UObject* WorldContextObject, struct FGbxFlag& Flag, float CheckTime);
	bool FlagTrueFor(class UObject* WorldContextObject, struct FGbxFlag& Flag, float CheckTime);
	bool FlagFalseWithin(class UObject* WorldContextObject, struct FGbxFlag& Flag, float CheckTime);
	bool FlagFalseFor(class UObject* WorldContextObject, struct FGbxFlag& Flag, float CheckTime);
	bool FlagDataTrueWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
	bool FlagDataTrueFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
	bool FlagDataFalseWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
	bool FlagDataFalseFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime);
};

// 0x18 (0x40 - 0x28)
// Class GbxGameSystemCore.FlagPropertyTestContext
class UFlagPropertyTestContext : public UObject
{
public:
	struct FGbxFlag                              TestFlag;                                          // 0x28(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FFlagPropertyTestStruct               TestStruct;                                        // 0x34(0xC)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFlagPropertyTestContext* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class GbxGameSystemCore.FlagPropertyTestContextResolver
class UFlagPropertyTestContextResolver : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UFlagPropertyTestContextResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxFlagValueResolver
class UGbxFlagValueResolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGbxFlagValueResolver* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class GbxGameSystemCore.GbxFlagValueResolver_Property
class UGbxFlagValueResolver_Property : public UGbxFlagValueResolver
{
public:
	struct FParsedProperty                       Property;                                          // 0x28(0x80)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxFlagValueResolver_Property* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.BaseMenuStackMenuInfo
class UBaseMenuStackMenuInfo : public UObject
{
public:

	static class UClass* StaticClass();
	static class UBaseMenuStackMenuInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxGameplayStatics
class UGbxGameplayStatics : public UGameplayStatics
{
public:

	static class UClass* StaticClass();
	static class UGbxGameplayStatics* GetDefaultObj();

	void SetTeamCollisionResponseWith(class AActor* Actor, class AActor* TeamActor, bool bIgnore);
	void SetTeamCollisionResponseToChannel(class AActor* Actor, enum class ETeamCollisionChannel Channel, bool bIgnore);
	void SetTeamCollisionChannelFrom(class AActor* Actor, class AActor* TeamActor, bool bOn);
	void SetTeamCollisionChannel(class AActor* Actor, enum class ETeamCollisionChannel Channel, bool bOn);
	bool SetPlayerMaster(class AActor* AIActor, class AActor* PlayerMaster);
	void SetComponentTeamCollisionResponseWith(class USceneComponent* Component, class AActor* TeamActor, bool bIgnore, bool bPropagateToChildren);
	void SetComponentTeamCollisionResponseToChannel(class USceneComponent* Component, enum class ETeamCollisionChannel Channel, bool bIgnore, bool bPropagateToChildren);
	void SetComponentTeamCollisionChannel(class USceneComponent* Component, enum class ETeamCollisionChannel Channel, bool bOn, bool bPropagateToChildren);
	void ProjectFromQueryToSimulation(class UGbxSkeletalMeshComponent* Component, class FName& BodyName, struct FVector& InOutHitPoint, struct FVector& InOutHitNormal);
	class APlayerController* GetPrimaryPlayerController(class UObject* WorldContextObject);
	class AGbxCharacter* GetAssociatedPrimaryCharacter(class AActor* Actor);
	class AGbxCharacter* GetAssociatedCurrentlyUsedCharacter(class AActor* Actor);
	void ExternalProfilerStop();
	void ExternalProfilerStart();
	void ExternalProfilerBookmark(const class FString& Mark);
	struct FTransform AlignTransformToSurface(const struct FTransform& Transform, const struct FVector& SurfaceNormal);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxGameStatsBlueprintLibrary
class UGbxGameStatsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxGameStatsBlueprintLibrary* GetDefaultObj();

	void UpdateStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int32 NewValue);
	void UpdateStat(class AActor* ContextActor, class UGameStatData* StatData, int32 NewValue);
	void IncrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int32 Amount);
	void IncrementStat(class AActor* ContextActor, class UGameStatData* StatData, int32 Amount);
	int32 GetStatValue(class AActor* ContextActor, class UGameStatData* StatData);
	void DecrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int32 Amount);
	void DecrementStat(class AActor* ContextActor, class UGameStatData* StatData, int32 Amount);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary
class UGbxGameSystemCoreBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxGameSystemCoreBlueprintLibrary* GetDefaultObj();

	void SetComponentPhysicalRotation(class UPrimitiveComponent* Target, float PitchRotation, float YawRotation, float RollRotation, class FName BoneName);
	void ResourceUnlockTurns(class AActor* Actor, class FName Reason);
	void ResourceUnlockTickAndRefreshBones(class AActor* Actor, class FName Reason);
	void ResourceUnlockTargeting(class AActor* Actor, class FName Reason);
	void ResourceUnlockRotation(class AActor* Actor, class FName Reason);
	void ResourceUnlockMovement(class AActor* Actor, class FName Reason);
	void ResourceUnlockMomentum(class AActor* Actor, class FName Reason);
	void ResourceUnlockMantling(class AActor* Actor, class FName Reason);
	void ResourceUnlockLookAtTargetLocation(class AActor* Actor, class FName Reason);
	void ResourceUnlockLookAt(class AActor* Actor, class FName Reason);
	void ResourceUnlockLadderMovement(class AActor* Actor, class FName Reason);
	void ResourceUnlockJumping(class AActor* Actor, class FName Reason);
	void ResourceUnlockHandIk(class AActor* Actor, class FName Reason);
	void ResourceUnlockGod(class AActor* Actor, class FName Reason);
	void ResourceUnlockFootIkTracing(class AActor* Actor, class FName Reason);
	void ResourceUnlockFootIk(class AActor* Actor, class FName Reason);
	void ResourceUnlockDodging(class AActor* Actor, class FName Reason);
	void ResourceUnlockDemigod(class AActor* Actor, class FName Reason);
	void ResourceUnlockCrouching(class AActor* Actor, class FName Reason);
	void ResourceUnlockAIThinking(class AActor* Actor, class FName Reason);
	void ResourceUnlockAiming(class AActor* Actor, class FName Reason);
	void ResourceLockTurns(class AActor* Actor, class FName Reason);
	void ResourceLockTickAndRefreshBones(class AActor* Actor, class FName Reason);
	void ResourceLockTargeting(class AActor* Actor, class FName Reason);
	void ResourceLockTargetableByNonPlayers(class AActor* Actor, class FName Reason, bool bTargetable);
	void ResourceLockTargetable(class AActor* Actor, class FName Reason, bool bTargetable);
	void ResourceLockRotation(class AActor* Actor, class FName Reason);
	void ResourceLockPhysicsRotation(class AActor* Actor, class FName Reason);
	void ResourceLockMovement(class AActor* Actor, class FName Reason);
	void ResourceLockMomentum(class AActor* Actor, class FName Reason);
	void ResourceLockMantling(class AActor* Actor, class FName Reason);
	void ResourceLockLookAtTargetLocation(class AActor* Actor, class FName Reason);
	void ResourceLockLookAt(class AActor* Actor, class FName Reason);
	void ResourceLockLadderMovement(class AActor* Actor, class FName Reason);
	void ResourceLockJumping(class AActor* Actor, class FName Reason);
	void ResourceLockHandIk(class AActor* Actor, class FName Reason);
	void ResourceLockGod(class AActor* Actor, class FName Reason);
	void ResourceLockFootIkTracing(class AActor* Actor, class FName Reason);
	void ResourceLockFootIk(class AActor* Actor, class FName Reason);
	void ResourceLockDodging(class AActor* Actor, class FName Reason);
	void ResourceLockDemigod(class AActor* Actor, class FName Reason);
	void ResourceLockCrouching(class AActor* Actor, class FName Reason);
	void ResourceLockAIThinking(class AActor* Actor, class FName Reason, bool bAbort);
	void ResourceLockAiming(class AActor* Actor, class FName Reason);
	bool IsSplitScreen(class UGameInstance* GameInstance);
	bool IsPlayer(class AActor* Actor);
	bool IsContentCensored(class UObject* WorldContextObject);
	void HoverComponentAtActor(class USceneComponent* Component, class AActor* TargetActor, float Altitude, float Radius, float AccelerationTime, float Speed, float Duration, const struct FLatentActionInfo& LatentInfo);
	struct FVector GetRelativeDirection(struct FRelativeDirectionData& RelativeDirectionData, struct FVector& DefaultDirection, class AActor* SourceActor, class FName& SourceSocketName, class AActor* TargetActor);
	float GetCurveFloatValue(struct FRuntimeFloatCurve& Curve, float InTime);
	bool GetAreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*>& Actors);
	bool GetAreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor);
	bool GetAreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*>& Actors);
	bool GetAreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor);
	void GetActorListTrimmedToBestCluster(TArray<class AActor*>* OutputActors, struct FVector* ClusterMidpoint, TArray<class AActor*>& InputActors, class AActor* SourceActor, float ClusterRadius, bool bPreferClusterContainingCurrentTarget);
	void BranchOnIsPlayer(class AActor* Actor, enum class EIsPlayerExecOutput* Branches);
	void BranchOnIsAutonomous(class AActor* Actor, enum class EIsAutonomousOuput* Branches);
	void AreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*>& Actors, enum class EPlayersOverlappingActorOutput* Branches);
	void AreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, enum class EPlayersOverlappingActorOutput* Branches);
	void AreAnyPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*>& Volumes, enum class EPlayersInVolumeOutput* Branches);
	void AreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*>& Actors, enum class EPlayersOverlappingActorOutput* Branches);
	void AreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, enum class EPlayersOverlappingActorOutput* Branches);
	void AreAllPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*>& Volumes, enum class EPlayersInVolumeOutput* Branches);
};

// 0x58 (0x88 - 0x30)
// Class GbxGameSystemCore.GbxHUDFeedbackData
class UGbxHUDFeedbackData : public UGbxDataAsset
{
public:
	struct FVector                               MoveWeight;                                        // 0x30(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MoveAcceleration;                                  // 0x3C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MoveDeceleration;                                  // 0x48(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MoveMaxVelocity;                                   // 0x54(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LookWeight;                                        // 0x60(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LookAcceleration;                                  // 0x68(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LookDeceleration;                                  // 0x70(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LookMaxVelocity;                                   // 0x78(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GamepadLookMultiplier;                             // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxHUDFeedbackData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxInputRebindContextProvider
class IGbxInputRebindContextProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxInputRebindContextProvider* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxGameSystemCore.GbxInventoryCategoryData
class UGbxInventoryCategoryData : public UGbxDataAsset
{
public:
	bool                                         bIsPremiumCurrencyCategory;                        // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57D4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxInventoryCategoryData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxLevelSequenceControllableInterface
class IGbxLevelSequenceControllableInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxLevelSequenceControllableInterface* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.GbxMediaData
class UGbxMediaData : public UGbxDataAsset
{
public:
	TScriptInterface<class IMediaAudioSinkProviderInterface> AudioSinkProvider;                                 // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMediaTexture*                         MediaTexture;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          MediaSource;                                       // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxMediaData* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GbxGameSystemCore.GbxMediaManager
class UGbxMediaManager : public UGbxBaseMediaManager
{
public:
	TArray<class UMediaPlayer*>                  ActiveMediaPlayers;                                // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_57EC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxMediaManager* GetDefaultObj();

	void OnMovieMediaOpenFailed(const class FString& DeviceUrl);
	void OnMovieMediaClosed();
	void OnMovieEndReached();
	class UMediaPlayer* GbxPlayMovie(class UObject* WorldContextObject, class UGbxMediaData* InMediaData);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxNavAvoidanceInterface
class IGbxNavAvoidanceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxNavAvoidanceInterface* GetDefaultObj();

	void SetObstacleAvoidanceLock(bool bDisable, class FName& Reason);
};

// 0x38 (0x500 - 0x4C8)
// Class GbxGameSystemCore.GbxPainCausingVolume
class AGbxPainCausingVolume : public APainCausingVolume
{
public:
	struct FAttributeInitializationData          GbxDamagePerSec;                                   // 0x4C8(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGbxPainCausingVolume* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxParamExt
class UGbxParamExt : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxParamExt* GetDefaultObj();

	bool IsValueInRangePure(struct FGbxParam& Param, float Value, class UObject* Context);
	bool IsValueInRange(struct FGbxParam& Param, float Value, class UObject* Context);
	class FString GetParamPropertyDescription(struct FGbxParam& Param, class UProperty* Property);
	class FText GetParamDescriptionText(struct FGbxParam& Param);
	class FString GetParamDescription(struct FGbxParam& Param);
	class FText GetNamedParamDescriptionText(struct FGbxNamedParam& Param);
	class FString GetNamedParamDescription(struct FGbxNamedParam& Param);
	float EvaluatePure(struct FGbxParam& Param, class UObject* Context);
	float EvaluateIntPure(struct FGbxParam& Param, class UObject* Context);
	float EvaluateInt(struct FGbxParam& Param, class UObject* Context);
	bool EvaluateBoolPure(struct FGbxParam& Param, class UObject* Context);
	bool EvaluateBool(struct FGbxParam& Param, class UObject* Context);
	float Evaluate(struct FGbxParam& Param, class UObject* Context);
};

// 0x10 (0x9D0 - 0x9C0)
// Class GbxGameSystemCore.GbxParticleSystemComponent
class UGbxParticleSystemComponent : public UParticleSystemComponent
{
public:
	TArray<class UGbxCustomizationTargetData*>   CustomizationTargets;                              // 0x9C0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxParticleSystemComponent* GetDefaultObj();

	bool IsCustomizationTargetFor(class UGbxCustomizationTargetData* TargetToTest);
};

// 0x8 (0x278 - 0x270)
// Class GbxGameSystemCore.GbxPerceptionComponent
class UGbxPerceptionComponent : public UAIPerceptionComponent
{
public:
	float                                        StimulusStrengthOverrideTime;                      // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5862[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxPerceptionComponent* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class GbxGameSystemCore.GbxPhysicsCollisionHandler
class UGbxPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
public:
	uint8                                        Pad_5867[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxPhysicsCollisionHandler* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// Class GbxGameSystemCore.GbxPhysicsSettings
class UGbxPhysicsSettings : public UObject
{
public:
	TMap<enum class EPhysicalSurface, struct FSurfaceTypeInfo> SurfaceTypeInfoMap;                                // 0x28(0x50)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FRigidBodyImpactSettings              RigidBodyImpactSettings;                           // 0x78(0xB0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FDestructionForceSmoothing            ForceSmoothing;                                    // 0x128(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LowDamageThreshold;                                // 0x134(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MediumDamageThreshold;                             // 0x138(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HighDamageThreshold;                               // 0x13C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RagdollWeaponForceFeatherPercent;                  // 0x140(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5881[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxPhysicsSettings* GetDefaultObj();

	void StaticSetRigidDynamicDominance(class UPrimitiveComponent* Comp, bool bAesthetic, class FName BodyName);
	void StaticSetRigidBodySimulationInteractability(class USkeletalMeshComponent* Comp, bool bAesthetic, class FName BodyName);
};

// 0x88 (0xB0 - 0x28)
// Class GbxGameSystemCore.GbxQueryManager
class UGbxQueryManager : public UObject
{
public:
	uint8                                        Pad_5889[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxActiveQueries;                                  // 0x30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_588B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxQuery>                     Queries;                                           // 0x38(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UWorld*                                World;                                             // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnvQueryManager*                      EnvQueryManager;                                   // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_588D[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxQueryManager* GetDefaultObj();

	void NotifyAIHotSpotListChangedFor(class AActor* OwnerActor);
};

// 0x50 (0x88 - 0x38)
// Class GbxGameSystemCore.GbxSignificanceSettings
class UGbxSignificanceSettings : public UDeveloperSettings
{
public:
	TMap<class FName, struct FGbxSignificanceEventData> Events;                                            // 0x38(0x50)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxSignificanceSettings* GetDefaultObj();

	void EnumerateSignificanceEvents(TArray<class FName>* OutEvents);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxSimpleMotionLibrary
class UGbxSimpleMotionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxSimpleMotionLibrary* GetDefaultObj();

	void UpdateVectorMotion(float DeltaTime, struct FVector* CurrentValue, float ControlValue, struct FSimpleMotionState& Data, float SpeedScale, struct FVector& TargetValue, struct FSimpleMotionInstanceState* State);
	void UpdateRotatorMotion(float DeltaTime, struct FRotator* CurrentValue, float ControlValue, struct FSimpleMotionState& Data, float SpeedScale, struct FRotator& TargetValue, bool bShortestRotation, struct FSimpleMotionInstanceState* State);
	void UpdateFloatMotion(float DeltaTime, float* CurrentValue, float ControlValue, struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, struct FSimpleMotionInstanceState* State);
	void TeleportVectorMotion(struct FVector* CurrentValue, float ControlValue, struct FSimpleMotionState& Data, float SpeedScale, struct FVector& TargetValue, struct FSimpleMotionInstanceState* State);
	void TeleportRotatorMotion(struct FRotator* CurrentValue, float ControlValue, struct FSimpleMotionState& Data, float SpeedScale, struct FRotator& TargetValue, struct FSimpleMotionInstanceState* State);
	void TeleportFloatMotion(float* CurrentValue, float ControlValue, struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, struct FSimpleMotionInstanceState* State);
	void ResetMotionState(struct FSimpleMotionInstanceState* State);
};

// 0x0 (0x4E0 - 0x4E0)
// Class GbxGameSystemCore.GbxSkeletalMeshActor
class AGbxSkeletalMeshActor : public ASkeletalMeshActor
{
public:

	static class UClass* StaticClass();
	static class AGbxSkeletalMeshActor* GetDefaultObj();

};

// 0x18 (0x7C0 - 0x7A8)
// Class GbxGameSystemCore.GbxStaticMeshComponent
class UGbxStaticMeshComponent : public UStaticMeshComponent
{
public:
	TArray<class UGbxCustomizationTargetData*>   CustomizationTargets;                              // 0x7A8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_58E0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxStaticMeshComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxSubtitleManagerInterface
class IGbxSubtitleManagerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxSubtitleManagerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxThreatSystemInterface
class IGbxThreatSystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxThreatSystemInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxUIFormattableParameter
class IGbxUIFormattableParameter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxUIFormattableParameter* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.GbxUIName
class UGbxUIName : public UGbxDataAsset
{
public:
	uint8                                        Pad_58EE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxUIName* GetDefaultObj();

	class FText GetFormattedText();
};

// 0x8 (0x38 - 0x30)
// Class GbxGameSystemCore.GestaltPartData
class UGestaltPartData : public UGbxDataAsset
{
public:
	uint8                                        Pad_58F1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGestaltPartData* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class GbxGameSystemCore.GestaltPartData_Mesh
class UGestaltPartData_Mesh : public UGestaltPartData
{
public:
	class UGestaltData*                          GestaltData;                                       // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GestaltMeshPartName;                               // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          AdditionalGestaltMeshPartNames;                    // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGestaltChildPartData>         ChildParts;                                        // 0x58(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGestaltPartFoleyAccessory            FoleyAudioAccessory;                               // 0x68(0x18)(Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGestaltPartData_Mesh* GetDefaultObj();

	void EnumerateGestaltMeshPartNames(TArray<class FName>* OutPartNameList);
};

// 0x10 (0x48 - 0x38)
// Class GbxGameSystemCore.GestaltPartData_Random
class UGestaltPartData_Random : public UGestaltPartData
{
public:
	TArray<struct FGestaltRandomPartData>        RandomParts;                                       // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGestaltPartData_Random* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class GbxGameSystemCore.GestaltPartListData
class UGestaltPartListData : public UGbxDataAsset
{
public:
	TArray<class UGestaltPartData*>              RequiredParts;                                     // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGesaltOptionalPartData>       OptionalParts;                                     // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGestaltPartData*>              SpecialParts;                                      // 0x50(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGestaltPartListData* GetDefaultObj();

};

// 0x158 (0x188 - 0x30)
// Class GbxGameSystemCore.GlobalBoneModifyProfileState
class UGlobalBoneModifyProfileState : public UDataAsset
{
public:
	struct FBMPOverride                          DefaultTransform;                                  // 0x30(0x18)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class USkeleton>, struct FBMPOverride> SkeletonOverrides;                                 // 0x48(0x50)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<TSoftClassPtr<class ACharacter>, struct FBMPOverride> CharacterOverrides;                                // 0x98(0x50)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class USkeleton>>        SkeletonExceptions;                                // 0xE8(0x50)(Edit, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<TSoftClassPtr<class ACharacter>>        CharacterExceptions;                               // 0x138(0x50)(Edit, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGlobalBoneModifyProfileState* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GbxGameSystemCore.GlobalBoneModifyProfile
class UGlobalBoneModifyProfile : public UObject
{
public:
	TSet<class UGlobalBoneModifyProfileState*>   GlobalProfileSet;                                  // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5908[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalBoneModifyProfile* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GlobalBoneModBlueprintLibrary
class UGlobalBoneModBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGlobalBoneModBlueprintLibrary* GetDefaultObj();

	void K2_SetGBMP(class UGlobalBoneModifyProfileState* State, bool bEnabled);
};

// 0x10 (0x4B0 - 0x4A0)
// Class GbxGameSystemCore.GravityOverrideVolume
class AGravityOverrideVolume : public APhysicsVolume
{
public:
	float                                        GravityZ;                                          // 0x4A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTeamGravity;                                // 0x4A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5910[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverrideTeamGravity;                               // 0x4A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5911[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGravityOverrideVolume* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxGameSystemCore.HealthResourcePoolModifierAttributeValueResolver
class UHealthResourcePoolModifierAttributeValueResolver : public UAttributeValueResolver
{
public:
	class UGameResourcePoolData*                 HealthResourcePool;                                // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHealthResourcePoolModifierAttributeValueResolver* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class GbxGameSystemCore.HealthTypeData
class UHealthTypeData : public UGbxDataAsset
{
public:
	struct FLinearColor                          DisplayColor;                                      // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BarBackgroundFrameName;                            // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   BalanceData;                                       // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     Physmat;                                           // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     NoDamagePhysMat;                                   // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAttributeData*                     HealthTypeModifierAttribute;                       // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHealthTypeData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.HitReactionBlueprintLibrary
class UHitReactionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHitReactionBlueprintLibrary* GetDefaultObj();

	void SetHitReactionData(class AActor* Actor, class UHitReactionData* HitReactionData);
	void ScriptHitReaction(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, class FName BoneName, const struct FForceSelection& Force);
	void ScriptDeath(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, class FName BoneName, const struct FForceSelection& Force);
	void ResourceUnlockHitReactions(class AActor* Actor, class FName Reason);
	void ResourceLockHitReactions(class AActor* Actor, class FName Reason);
	void RemoveHitReactionLiveLayer(class AActor* Actor, TSubclassOf<class UHitReactionLayer> Layer);
	void RemoveHitReactionDeathLayer(class AActor* Actor, TSubclassOf<class UHitReactionLayer> Layer);
	struct FVector K2_GetHitLocationFromAction(class UGbxAction* Action);
	struct FVector K2_GetHitDirectionFromAction(class UGbxAction* Action, bool bLocalSpace);
	class UObject* K2_GetHitCauserFromAction(class UGbxAction* Action);
	float K2_GetHealthPercentFromAction(class UGbxAction* Action);
	float K2_GetForceFromAction(class UGbxAction* Action);
	int32 K2_GetBoneIndexFromAction(class UGbxAction* Action);
	bool IsHitReactionTagActive(class AActor* Actor, class UHitReactionTag* Tag);
	void AddHitReactionLiveLayer(class AActor* Actor, TSubclassOf<class UHitReactionLayer> Layer);
	void AddHitReactionDeathLayer(class AActor* Actor, TSubclassOf<class UHitReactionLayer> Layer);
};

// 0x30 (0x60 - 0x30)
// Class GbxGameSystemCore.HitReactionData
class UHitReactionData : public UGbxDataAsset
{
public:
	TArray<TSubclassOf<class UHitReactionLayer>> LiveLayers;                                        // 0x30(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UHitReactionLayer>> DeathLayers;                                       // 0x40(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FHitReactionPair>              HitReactions;                                      // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHitReactionData* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.HitReactionLayer_Blueprint
class UHitReactionLayer_Blueprint : public UHitReactionLayer
{
public:

	static class UClass* StaticClass();
	static class UHitReactionLayer_Blueprint* GetDefaultObj();

	class UHitReactionTag* EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag);
};

// 0x28 (0x58 - 0x30)
// Class GbxGameSystemCore.HitReactionLayer_Combine
class UHitReactionLayer_Combine : public UHitReactionLayer
{
public:
	TArray<TSubclassOf<class UHitReactionLayer>> SubLayers;                                         // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UHitReactionTag*>               PriorityList;                                      // 0x40(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bMissingTagsAreHighestPriority;                    // 0x50(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_59EC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHitReactionLayer_Combine* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.HitReactionLayer_Condition
class UHitReactionLayer_Condition : public UHitReactionLayer
{
public:
	TArray<struct FHitReactionCondition>         Conditions;                                        // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	enum class EHitReactionConditionCombine      Combine;                                           // 0x40(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_59F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UHitReactionLayer>         SubLayer;                                          // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHitReactionLayer_Condition* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.HitReactionLayer_Cooldown
class UHitReactionLayer_Cooldown : public UHitReactionLayer
{
public:
	float                                        DefaultCooldown;                                   // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_59F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitReactionCooldownData>      Cooldowns;                                         // 0x38(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHitReactionLayer_Cooldown* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.HitReactionLayer_Map
class UHitReactionLayer_Map : public UHitReactionLayer
{
public:
	TArray<struct FHitReactionMapItem>           TagMap;                                            // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHitReactionLayer_Map* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.HitReactionLayer_Priority
class UHitReactionLayer_Priority : public UHitReactionLayer
{
public:
	TArray<class UHitReactionTag*>               PriorityList;                                      // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UHitReactionTag*>               CanInterruptSelf;                                  // 0x40(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHitReactionLayer_Priority* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.HitReactionTag
class UHitReactionTag : public UGbxDataAsset
{
public:
	class UCharacterSoundTag*                    SoundTag;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       CensoredTag;                                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHitReactionTag* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.HitRegionFunctionLibrary
class UHitRegionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHitRegionFunctionLibrary* GetDefaultObj();

	void ResetHitRegionHealth(class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	void ResetAllHitRegionHealth(class AActor* Actor);
	void RefillHitRegionHealthByPercent(float RefillPercent, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	void RefillHitRegionHealthByAmount(float RefillAmount, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent);
	void AssociateComponentWithHitRegion(class AActor* Actor, class UPrimitiveComponent* ComponentToAssociate, class UHitRegionData* HitRegion);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.IGbxProjectileManager
class UIGbxProjectileManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class UIGbxProjectileManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.GbxReplicatorProxyData
class IGbxReplicatorProxyData : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxReplicatorProxyData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.InspectionInfoProvider
class IInspectionInfoProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInspectionInfoProvider* GetDefaultObj();

	void GetInspectionInfo(struct FInspectionInfo& InspectionInfo);
};

// 0x2F0 (0x320 - 0x30)
// Class GbxGameSystemCore.ImpactData
class UImpactData : public UGbxDataAsset
{
public:
	class UImpactData*                           ParentImpact;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EImpactUsage                      Usage;                                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideParentUnconditionalResponse;              // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A0B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactResponseEffect                 UnconditionalResponse;                             // 0x40(0x140)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bOverrideParentDefaultResponse;                    // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A0C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactResponseEffect                 DefaultResponse;                                   // 0x190(0x140)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FImpactResponseInfo>           ImpactResponses;                                   // 0x2D0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UWwiseEvent*                           DefaultImpactWwiseEvent;                           // 0x2E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FImpactTriggerInfo                    TriggerInfo;                                       // 0x2E8(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxSignificanceEvent                 DefaultSignificanceEvent;                          // 0x2F0(0x8)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        LayeredPhysicalResponseQuality;                    // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LayeredParentPhysicalResponseQuality;              // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideParentProximityThrottling;                // 0x300(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableProximityThrottling;                        // 0x301(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A0D[0x16];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        FrameLimit;                                        // 0x318(0x2)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMassWwiseParameter;                            // 0x31A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A0E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImpactData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.ImpactExpansionData
class UImpactExpansionData : public UGbxDataAsset
{
public:
	class UImpactData*                           ImpactDataToExpand;                                // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FImpactResponseInfo>           ImpactResponses;                                   // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UImpactExpansionData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.ImpactDataOverride
class IImpactDataOverride : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IImpactDataOverride* GetDefaultObj();

};

// 0x470 (0x8C8 - 0x458)
// Class GbxGameSystemCore.ImpactDecalManager
class AImpactDecalManager : public AActor
{
public:
	uint8                                        Pad_5A13[0x470];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AImpactDecalManager* GetDefaultObj();

};

// 0x20 (0x740 - 0x720)
// Class GbxGameSystemCore.PooledImpactDecalComponent
class UPooledImpactDecalComponent : public UDecalComponent
{
public:
	uint8                                        Pad_5A14[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPooledImpactDecalComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.ImpactEffectFunctionLibrary
class UImpactEffectFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UImpactEffectFunctionLibrary* GetDefaultObj();

	void PlayTraceImpactAndGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, struct FVector& TraceStart, struct FVector& TraceEnd, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents, enum class ECollisionChannel TraceChannel);
	void PlayTraceImpact(class UImpactData* ImpactData, class AActor* Instigator, struct FVector& TraceStart, struct FVector& TraceEnd, enum class ECollisionChannel TraceChannel, bool bReplicated);
	void PlayHitResultImpactGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, struct FHitResult& HitInfo, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents);
	void PlayHitResultImpact(class UImpactData* ImpactData, class AActor* Instigator, struct FHitResult& HitInfo, bool bReplicated);
};

// 0x90 (0x208 - 0x178)
// Class GbxGameSystemCore.ImpactFXManagerComponent
class UImpactFXManagerComponent : public UActorComponent
{
public:
	bool                                         bScaleImpactDecalEffects;                          // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           BounceEffect;                                      // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BounceEffectThreshold;                             // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BounceEffectFrequency;                             // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlignBounceEffectToVelocity;                      // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           SlideEffect;                                       // 0x198(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideEffectThreshold;                              // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideEffectStopThreshold;                          // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideEffectFrequency;                              // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartSlideEffectDelay;                             // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSlideEffectOrigin;                        // 0x1B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlideEffectOriginSocket;                           // 0x1B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEffectsEnabled;                                   // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoEnableCollisionNotifications;                 // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A37[0x36];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FImpactFXManagerTrackingData>  ActiveSlideEffects;                                // 0x1F8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UImpactFXManagerComponent* GetDefaultObj();

	void SetEffectsEnabled(bool bEnabled);
	void OnTrackedParticleSystemFinished(class UParticleSystemComponent* PSC);
	void OnTrackedComponentDeactivated(class UActorComponent* Component);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.InspectionInfoFunctionLibrary
class UInspectionInfoFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UInspectionInfoFunctionLibrary* GetDefaultObj();

	void AddScreenOutput(struct FInspectionInfo& InspectionInfo, const class FString& String, enum class EDebugDisplayVerbosityLevel Verbosity);
	void AddAboveActorOutput(struct FInspectionInfo& InspectionInfo, const class FString& String, enum class EDebugDisplayVerbosityLevel Verbosity);
};

// 0xA0 (0x218 - 0x178)
// Class GbxGameSystemCore.InterpComponent
class UInterpComponent : public UActorComponent
{
public:
	bool                                         bRemoveOnCompletion;                               // 0x178(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpdateVelocity;                                   // 0x179(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bClearVelocity;                                    // 0x17A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bManualTick;                                       // 0x17B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInterpYawOnly;                                    // 0x17C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBallistics;                                       // 0x17D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMatchRotationToVelocity;                          // 0x17E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSetToInitialWhenFinished;                         // 0x17F(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRelative;                                         // 0x180(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5A61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InterpActor;                                       // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AController*                           InterpController;                                  // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnMovementComponent*                InterpMoveComp;                                    // 0x198(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EInterpMode                       InterpLocMode;                                     // 0x1A0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5A64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpLocTime;                                     // 0x1A4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InterpLocElapsedTime;                              // 0x1A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               InterpLocDiff;                                     // 0x1AC(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               InterpLocPrev;                                     // 0x1B8(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EInterpMode                       InterpRotMode;                                     // 0x1C4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5A66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpRotTime;                                     // 0x1C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InterpRotElapsedTime;                              // 0x1CC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                              InterpRotDiff;                                     // 0x1D0(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FRotator                              InterpRotPrev;                                     // 0x1DC(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FRotator                              InitialRotation;                                   // 0x1E8(0xC)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector                               BallisticsStartLoc;                                // 0x1F4(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BallisticsStartVelocity;                           // 0x200(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BallisticsGravity;                                 // 0x20C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BallisticsStartTime;                               // 0x210(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BallisticsTotalTime;                               // 0x214(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UInterpComponent* GetDefaultObj();

	void Stop();
	void SetUpdateVelocity(bool bNewUpdateVelocity);
	void SetRemoveOnCompletion(bool bRemove);
	void SetManualTick(bool bManual);
	void SetClearVelocity(bool bNewClearVelocity);
	void MatchRotationToVelocity(bool bInSetToInitialWhenFinished);
	void ManualTick(float DeltaTime);
	bool IsFinished();
	void InterpRotation(const struct FRotator& NewRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
	void InterpLocation(const struct FVector& NewLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
	void InterpDeltaRotation(const struct FRotator& DeltaRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
	void InterpDeltaLocation(const struct FVector& DeltaLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
	struct FVector InterpBallisticsByTime(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapTime, float LeapGravity);
	float InterpBallistics(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapSpeed, float LeapAngle);
};

// 0xE8 (0x540 - 0x458)
// Class GbxGameSystemCore.Ladder
class ALadder : public AActor
{
public:
	uint8                                        Pad_5A69[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EComponentMobility                Mobility;                                          // 0x460(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5A6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           SegmentMesh;                                       // 0x468(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            SegmentMeshMaterialOverrides;                      // 0x470(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           TopMesh;                                           // 0x480(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            TopMeshMaterialOverrides;                          // 0x488(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        BottomAndTopMeshLDMaxDrawDistance;                 // 0x498(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bBottomAndTopMeshNeverDistanceCull : 1;            // Mask: 0x1, PropSize: 0x10x49C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_137 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5A6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           BottomMesh;                                        // 0x4A0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            BottomMeshMaterialOverrides;                       // 0x4A8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        SegmentSpacing;                                    // 0x4B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               SegmentOffset;                                     // 0x4BC(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SegmentRotation;                                   // 0x4C8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               TopOffset;                                         // 0x4CC(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TopRotation;                                       // 0x4D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BottomOffset;                                      // 0x4DC(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BottomRotation;                                    // 0x4E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VolumeDepth;                                       // 0x4EC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VolumeWidth;                                       // 0x4F0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VolumeExtraTopHeight;                              // 0x4F4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VolumeExtraBottomHeight;                           // 0x4F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TopVolumeDepth;                                    // 0x4FC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               VolumeOffset;                                      // 0x500(0xC)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CharacterOffset;                                   // 0x50C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumSegments;                                       // 0x510(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHideTopMesh : 1;                                  // Mask: 0x1, PropSize: 0x10x514(0x1)(Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHideBottomMesh : 1;                               // Mask: 0x2, PropSize: 0x10x514(0x1)(Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_138 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5A6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInstancedStaticMeshComponent*         SegmentMeshComponent;                              // 0x518(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  TopMeshComponent;                                  // 0x520(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  BottomMeshComponent;                               // 0x528(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                         VolumeBoxComponent;                                // 0x530(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                         TopVolumeBoxComponent;                             // 0x538(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ALadder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.LadderInterface
class ILadderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILadderInterface* GetDefaultObj();

};

// 0x20 (0x4B0 - 0x490)
// Class GbxGameSystemCore.LadderVolume
class ALadderVolume : public AVolume
{
public:
	uint8                                        Pad_5A77[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ClimbDirection;                                    // 0x498(0xC)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Normal;                                            // 0x4A4(0xC)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ALadderVolume* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.LandingData
class ULandingData : public UGbxDataAsset
{
public:
	TArray<struct FLandingInfo>                  LandingData;                                       // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULandingData* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class GbxGameSystemCore.MantleData
class UMantleData : public UGbxDataAsset
{
public:
	TArray<struct FMantleActionData>             Actions;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ActionSlotToEnd;                                   // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAlignToEdgeAngle;                               // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAdjustedHeightDifference;                       // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequiredLedgeDepth;                                // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallHopHeightMax;                                  // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallHopDestinationHeightMax;                       // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallHopDestinationHeightMin;                       // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallHopDepth;                                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A7B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMantleData* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class GbxGameSystemCore.ModifierMathAttributeValueResolver
class UModifierMathAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData          BaseValue;                                         // 0x28(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FModifierMathAttributeValueResolverStackEntry> ModifierStack;                                     // 0x60(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UModifierMathAttributeValueResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.MotionControlLibrary
class UMotionControlLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionControlLibrary* GetDefaultObj();

	float UpdateSpeed(float CurrentSpeed, float TargetSpeed, float Acceleration, float DeltaTime);
	struct FRotator Spin(struct FRotator& CurrentRotation, float RotationRate, const struct FVector& RotationAxis, float DeltaTime);
};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxGameSystemCore.NexusConfigStoreGbxInputAction
class UNexusConfigStoreGbxInputAction : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGbxInputAction* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxGameSystemCore.NexusConfigStoreGbxInputContext
class UNexusConfigStoreGbxInputContext : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGbxInputContext* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxGameSystemCore.NexusConfigStoreGbxInputFeel
class UNexusConfigStoreGbxInputFeel : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGbxInputFeel* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxGameSystemCore.NexusConfigStoreGbxInputKeyRebind
class UNexusConfigStoreGbxInputKeyRebind : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGbxInputKeyRebind* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxGameSystemCore.NexusConfigStoreGbxInputRebindContext
class UNexusConfigStoreGbxInputRebindContext : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGbxInputRebindContext* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxGameSystemCore.NexusConfigStoreGbxInputSchema
class UNexusConfigStoreGbxInputSchema : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreGbxInputSchema* GetDefaultObj();

};

// 0x1A8 (0x320 - 0x178)
// Class GbxGameSystemCore.OrbitingActorComponent
class UOrbitingActorComponent : public UActorComponent
{
public:
	class AActor*                                TargetActor;                                       // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               BaseOrbitOffset;                                   // 0x180(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ApproachSpeed;                                     // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SmoothingDistance;                                 // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SmoothingDuration;                                 // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOrbitOscillationInfo                 XAxisOscillation;                                  // 0x198(0x80)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FOrbitOscillationInfo                 YAxisOscillation;                                  // 0x218(0x80)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FOrbitOscillationInfo                 ZAxisOscillation;                                  // 0x298(0x80)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsInOrbit;                                        // 0x318(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingAlpha;                                    // 0x31C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOrbitingActorComponent* GetDefaultObj();

	void SetTargetActor(class AActor* NewTarget);
	void OnRep_TargetActor(class AActor* LastTarget);
};

// 0x0 (0x118 - 0x118)
// Class GbxGameSystemCore.ParentChallenge
class UParentChallenge : public UChallenge
{
public:

	static class UClass* StaticClass();
	static class UParentChallenge* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxGameSystemCore.ParticleAttributeParameterEvaluator
class UParticleAttributeParameterEvaluator : public UParticleParameterEvaluator
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvaluateEveryFrame;                               // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A8F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleAttributeParameterEvaluator* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxGameSystemCore.ParticleConditionalEmitterEvaluator
class UParticleConditionalEmitterEvaluator : public UParticleParameterEvaluator
{
public:
	class UGbxCondition*                         Condition;                                         // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EmitterName;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableIfTrue;                                     // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvaluateEveryFrame;                               // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A91[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleConditionalEmitterEvaluator* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxGameSystemCore.ParticlePropertyTrackingData
class UParticlePropertyTrackingData : public UGbxDataAsset
{
public:
	float                                        MinValue;                                          // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x34(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopTrackingWhenMinReached;                       // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopTrackingWhenMaxReached;                       // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopTrackingWhenPrimaryCharacterIsDeadOrNone;     // 0x3A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyParticleWhenTrackingStopped;               // 0x3B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeValueOverTime;                              // 0x3C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValueChangePerSecond;                              // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPauseChangeOnUpdate;                              // 0x44(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PauseDuration;                                     // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A95[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticlePropertyTrackingData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.PawnAttachmentFunctionLibrary
class UPawnAttachmentFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPawnAttachmentFunctionLibrary* GetDefaultObj();

	void RequestDetachPawnFromSlot(class AActor* Actor, class FName SlotName);
	void RequestDetachPawnFromActor(class APawn* Pawn);
	struct FPawnAttachmentQueryResult QueryPawnAttachment(class APawn* Pawn);
	class UPawnAttachSlotComponent* FindPawnAttachSlotComponent(class APawn* Pawn);
	void DetachPawnFromSlot(class AActor* Actor, class FName SlotName, bool bInstant);
	void DetachPawnFromActor(class APawn* Pawn, bool bInstant);
	void AttachPawnToSlot(class AActor* Actor, class FName SlotName, class APawn* Pawn, bool bInstant);
};

// 0x0 (0x50 - 0x50)
// Class GbxGameSystemCore.PawnAttributeContextResolver
class UPawnAttributeContextResolver : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UPawnAttributeContextResolver* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxGameSystemCore.PhysicalAnimationProfileAsset
class UPhysicalAnimationProfileAsset : public UGbxDataAsset
{
public:
	TArray<struct FPhysicalAnimationBoneData>    BoneData;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EPhysicalAnimationBlendToKinematicMode DynamicToKinematicBlendMode;                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AAE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPhysicalAnimationProfileAsset* GetDefaultObj();

};

// 0x18 (0x190 - 0x178)
// Class GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent
class UProjectileAimViewPointHomingTargetComponent : public UActorComponent
{
public:
	float                                        LookAheadDistance;                                 // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProjectileHomingComponent*            HomingComponent;                                   // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AController*                           TargetController;                                  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UProjectileAimViewPointHomingTargetComponent* GetDefaultObj();

	void SetTargetController(class AController* InTargetController);
	void SetTargetActor(class AActor* InTargetActor);
	class AController* GetTargetController();
	struct FVector GetCurrentHomingLoc();
};

// 0x268 (0x290 - 0x28)
// Class GbxGameSystemCore.PropertyUtilsTestContext
class UPropertyUtilsTestContext : public UObject
{
public:
	float                                        FloatProp;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatPropStaticArray[0x3];                         // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                FloatPropDynamicArray;                             // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UPropertyUtilsTestContext*             ObjectProp;                                        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPropertyUtilsTestContext*             ObjectPropStaticArray[0x3];                        // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPropertyUtilsTestContext*>     ObjectPropDynamicArray;                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPropertyUtilsTestStruct              StructProp;                                        // 0x78(0x78)(NativeAccessSpecifierPublic)
	struct FPropertyUtilsTestStruct              StructPropStaticArray[0x3];                        // 0xF0(0x168)(NativeAccessSpecifierPublic)
	TArray<struct FPropertyUtilsTestStruct>      StructPropDynamicArray;                            // 0x258(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       DoubleProp;                                        // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         Int8Prop;                                          // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UInt8Prop;                                         // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Int16Prop;                                         // 0x272(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UInt16Prop;                                        // 0x274(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AB1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Int32Prop;                                         // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UInt32Prop;                                        // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Int64Prop;                                         // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UInt64Prop;                                        // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPropertyUtilsTestContext* GetDefaultObj();

};

// 0x0 (0x3F8 - 0x3F8)
// Class GbxGameSystemCore.RangedFeedbackData
class URangedFeedbackData : public UFeedbackData
{
public:

	static class UClass* StaticClass();
	static class URangedFeedbackData* GetDefaultObj();

};

// 0x8 (0x460 - 0x458)
// Class GbxGameSystemCore.ReferenceActor
class AReferenceActor : public AActor
{
public:
	class FName                                  PreviewClass;                                      // 0x458(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AReferenceActor* GetDefaultObj();

	void EnumeratePreviewClasses(TArray<class FName>* ClasssList);
};

// 0x90 (0x538 - 0x4A8)
// Class GbxGameSystemCore.ReplicatedEmitter
class AReplicatedEmitter : public AEmitter
{
public:
	bool                                         bOwnerNoSeeEmitter;                                // 0x4A8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedEmitterTemplateOptions     TemplateOptions;                                   // 0x4B0(0x18)(Net, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FEmitterFloatParam>            ReplicatedFloatParams;                             // 0x4C8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FEmitterVectorParam>           ReplicatedVectorParams;                            // 0x4D8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct FEmitterColorParam>            ReplicatedColorParams;                             // 0x4E8(0x10)(Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FEmitterWwiseEvent                    ReplicatedWwiseEvent;                              // 0x4F8(0x40)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AReplicatedEmitter* GetDefaultObj();

	void OnRep_TemplateOptions();
	void OnRep_ReplicatedWwiseEvent();
	void OnRep_ReplicatedVectorParams();
	void OnRep_ReplicatedFloatParams();
	void OnRep_ReplicatedColorParams();
	void OnRep_OwnerNoSeeEmitter();
};

// 0x120 (0x148 - 0x28)
// Class GbxGameSystemCore.ResourceWeightAttributeValueResolver
class UResourceWeightAttributeValueResolver : public UAttributeValueResolver
{
public:
	class UGameResourceData*                     Resource;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ResourceThreshold;                                 // 0x30(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          AboveThresholdWeight;                              // 0x68(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          NoPoolWeight;                                      // 0xA0(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          MinBelowThresholdWeight;                           // 0xD8(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          MaxBelowThresholdWeight;                           // 0x110(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UResourceWeightAttributeValueResolver* GetDefaultObj();

};

// 0x8 (0x460 - 0x458)
// Class GbxGameSystemCore.RigidBodyActor
class ARigidBodyActor : public AActor
{
public:
	class URigidBodyComponent*                   RigidBodyComponent;                                // 0x458(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ARigidBodyActor* GetDefaultObj();

};

// 0x28 (0x7D0 - 0x7A8)
// Class GbxGameSystemCore.RigidBodyComponent
class URigidBodyComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_5AB6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           RigidBodyImpactData;                               // 0x7B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnImpulseAdded;                                    // 0x7B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEnableHardSleeping;                               // 0x7C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AB7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URigidBodyComponent* GetDefaultObj();

	void SetKinematic(class UPrimitiveComponent* SleepingComponent, class FName BoneName);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.SaveGameActorInterface
class ISaveGameActorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISaveGameActorInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.SceneBodySwitchAction
class USceneBodySwitchAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class USceneBodySwitchAction* GetDefaultObj();

};

// 0x90 (0x360 - 0x2D0)
// Class GbxGameSystemCore.SceneBodySwitchComponent
class USceneBodySwitchComponent : public USceneComponent
{
public:
	class FName                                  DefaultState;                                      // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneBodySwitchAction*                DetachAction;                                      // 0x2D8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ABC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSceneComponentSwitchRecord>   ComponentRecords;                                  // 0x2F0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<int8>                                 ReplicatedState;                                   // 0x300(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5ABE[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USceneBodySwitchComponent* GetDefaultObj();

	void OnRep_ReplicatedState();
	void HandleWwiseEventFinished(class UWwiseAudioComponent* WAC, class UWwiseEvent* WwiseEvent);
	void HandleParticleSystemFinished(class UParticleSystemComponent* PSC);
	void GetValidSwitchStateNames(TArray<class FName>* OutNames);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.SceneBodySwitchFunctionLibrary
class USceneBodySwitchFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USceneBodySwitchFunctionLibrary* GetDefaultObj();

	void EnumerateValidSwitchStateNames(class FName SwitchName, TArray<class FName>* Names);
	void EnumerateValidSwitchNames(TArray<class FName>* Names);
	void ChangeSwitchExternal(class AActor* Actor, class FName SwitchName, class FName StateName);
	void ChangeSwitch(class UObject* Context, class FName SwitchName, class FName StateName);
};

// 0x0 (0x178 - 0x178)
// Class GbxGameSystemCore.SceneBodySwitchManagerComponent
class USceneBodySwitchManagerComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class USceneBodySwitchManagerComponent* GetDefaultObj();

};

// 0x28 (0x1A0 - 0x178)
// Class GbxGameSystemCore.ScreenParticleManagerComponent
class UScreenParticleManagerComponent : public UActorComponent
{
public:
	TArray<struct FScreenParticleRecord>         ScreenParticleRecords;                             // 0x178(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FParticlePropertyTracker>      TrackedParticleProperties;                         // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5AF5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScreenParticleManagerComponent* GetDefaultObj();

	void ShowScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, enum class EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, class FName Tag, bool bAllowMultipleInstances, bool bServerAuthority, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu);
	void OnScreenParticleFinished(class UParticleSystemComponent* Component);
	void HideScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, class FName Tag, bool bAllowParticleToFinish, bool bServerAuthority);
	void ClientTrackParticleProperty(class UParticlePropertyTrackingData* TrackingData, class UParticleSystem* Template, class FName Tag, class FName PropertyName, float PropertyValue, bool bAddToValue, class UMaterialInterface* UsedMaterialProperty, class FName MaterialPropertyName);
	void ClientShowScreenParticleEx(class UParticleSystem* Template, uint8 InitFlags, const struct FVector2D& ContentDims, float ParticleDepth, enum class EScreenParticleScalingMode ScalingMode, class FName Tag);
	void ClientShowScreenParticle(class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, enum class EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, class FName Tag, bool bAllowMultipleInstances, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu, bool bDepthPriorityWorld);
	void ClientSetScreenParticleVectorParameter(class UParticleSystem* Template, class FName Tag, class FName ParameterName, const struct FVector& Param);
	void ClientSetScreenParticleMaterialParameter(class UParticleSystem* Template, class FName Tag, class FName ParameterName, class UMaterialInterface* Param);
	void ClientSetScreenParticleFloatParameter(class UParticleSystem* Template, class FName Tag, class FName ParameterName, float Param);
	void ClientSetScreenParticleColorParameter(class UParticleSystem* Template, class FName Tag, class FName ParameterName, const struct FLinearColor& Param);
	void ClientSetScreenParticleActorParameter(class UParticleSystem* Template, class FName Tag, class FName ParameterName, class AActor* Param);
	void ClientHideScreenParticle(class UParticleSystem* Template, class FName Tag, bool bAllowParticleToFinish);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.SenseConfigProviderInterface
class ISenseConfigProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISenseConfigProviderInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.SignificanceInterface
class ISignificanceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISignificanceInterface* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class GbxGameSystemCore.SimpleMathValueResolver
class USimpleMathValueResolver : public UAttributeValueResolver
{
public:
	struct FAttributeInitializationData          ValueA;                                            // 0x28(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESimpleMathValueResolverOperatorType Operator;                                          // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ValueB;                                            // 0x68(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimpleMathValueResolver* GetDefaultObj();

};

// 0x0 (0x2D0 - 0x2D0)
// Class GbxGameSystemCore.SocketComponent
class USocketComponent : public USceneComponent
{
public:

	static class UClass* StaticClass();
	static class USocketComponent* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class GbxGameSystemCore.SpawnSimulatedActorSwitchAction
class USpawnSimulatedActorSwitchAction : public USceneBodySwitchAction
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x28(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInheritVelocity : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bEnableSpeedRange : 1;                             // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bEnableAngularSpeedRange : 1;                      // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_149 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EAxis                             DefaultAxis;                                       // 0x31(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AF9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRelativeDirectionData                Direction;                                         // 0x38(0x50)(Edit, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        Speed;                                             // 0x88(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSpeed;                                          // 0x8C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRelativeDirectionData                RotationAxis;                                      // 0x90(0x50)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        AngularSpeed;                                      // 0xE0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxAngularSpeed;                                   // 0xE4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LifeSpan;                                          // 0xE8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AFD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnSimulatedActorSwitchAction* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class GbxGameSystemCore.SprintData
class USprintData : public UDataAsset
{
public:
	class UCurveFloat*                           SprintFOVCurve;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddModifierToBaseFOV;                             // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SprintFOVModifier;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintFOVBlendInTime;                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintFOVBlendOutTime;                             // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintFOVBlendInDelay;                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         Feedback;                                          // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeEffectData>          SprintAttributeEffects;                            // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USprintData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.StanceBlueprintLibrary
class UStanceBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStanceBlueprintLibrary* GetDefaultObj();

	class UStanceComponent* TryGetStanceComponent(class AAIController* AIController);
	void SetStance(class AActor* Target, class UStanceDataProvider* Stance);
	bool IsStanceComponentInStance(class UStanceComponent* StanceComponent, class UStanceDataProvider* Stance);
	bool IsInStance(class UAnimInstance* AnimInstance, class UStanceDataProvider* Stance);
	bool EqualEqual_StanceTypeStanceType(class UStanceType* A, class UStanceType* B);
	bool EqualEqual_StanceDataStanceData(class UStanceData* A, class UStanceData* B);
	void ClearStance(class AActor* Target);
};

// 0xF8 (0x270 - 0x178)
// Class GbxGameSystemCore.StanceComponent
class UStanceComponent : public UActorComponent
{
public:
	uint8                                        Pad_5B26[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnStanceChanged;                                   // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStanceDataSelector*                   StanceSelector;                                    // 0x190(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStanceStack                          StanceStack;                                       // 0x198(0x50)(Transient, NativeAccessSpecifierPrivate)
	struct FStanceChangedEventArgs               StanceState;                                       // 0x1E8(0x30)(Net, Transient, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	TMap<class UStanceType*, class UStanceData*> DefaultStanceMap;                                  // 0x218(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        TimeEnteredCurrentStance;                          // 0x268(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B27[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStanceComponent* GetDefaultObj();

	void StackStanceChangedCallback(enum class EStanceStackLayer PreviousLayer, class UStanceData* PreviousStance, enum class EStanceStackLayer NextLayer, class UStanceData* NextStance);
	void SetStanceLayer(enum class EStanceStackLayer Layer, class UStanceDataProvider* NewStance);
	void SetBlueprintStance(class UStanceDataProvider* NewStance);
	void OnRep_StanceState();
	bool IsInStanceType(class UStanceType* Type);
	bool IsInStanceLayer(enum class EStanceStackLayer Layer);
	bool IsInStance(class UStanceDataProvider* Stance);
	bool IsInAnimStance(class UStanceDataProvider* Stance);
	float GetTimeSpentInCurrentStance();
	enum class EStanceStackLayer GetStanceLayer();
	class UStanceData* GetStance();
	class UStanceType* FindTypeForStance(class UStanceData* Stance);
	class UStanceData* FindStanceForType(class UStanceType* Type);
	void ClearStanceLayer(enum class EStanceStackLayer Layer);
	void ClearBlueprintStance();
};

// 0x0 (0x30 - 0x30)
// Class GbxGameSystemCore.StanceType
class UStanceType : public UStanceDataProvider
{
public:

	static class UClass* StaticClass();
	static class UStanceType* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class GbxGameSystemCore.StatusEffect
class UStatusEffect : public UObject
{
public:
	class UStatusEffectStackingStrategyData*     StackingStrategy;                                  // 0x28(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAttributeEffect>              AttributeEffects;                                  // 0x30(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bDoesDamageOverTime;                               // 0x40(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UDamageSource>             DamageSourceClass;                                 // 0x50(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffectData*                     DataAssetCopy;                                     // 0x58(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B2C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStatusEffect* GetDefaultObj();

	void OnEndEffect(class AActor* Target);
	void OnBeginEffect(class AActor* Target);
};

// 0x28 (0xD8 - 0xB0)
// Class GbxGameSystemCore.StatusEffectModifierAttributePropertyValueResolver
class UStatusEffectModifierAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	TSoftObjectPtr<class UStatusEffectData>      StatusEffectData;                                  // 0xB0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UStatusEffectModifierAttributePropertyValueResolver* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.StatusEffectStackingStrategyData_Capped
class UStatusEffectStackingStrategyData_Capped : public UStatusEffectStackingStrategyData
{
public:
	int32                                        MaxCount;                                          // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCapPerOwner;                                      // 0x34(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bNoInfiniteDuration;                               // 0x35(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EStatusEffectStackingInstanceSelectionCriteria SelectionCriteria;                                 // 0x36(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EStatusEffectStackingInstanceReplacementCriteria ReplacementCriteria;                               // 0x37(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStatusEffectStackingStrategyData_DurationRefundData DurationRefund;                                    // 0x38(0x8)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UStatusEffectStackingStrategyData_Capped* GetDefaultObj();

};

// 0x378 (0x530 - 0x1B8)
// Class GbxGameSystemCore.TargetableComponent
class UTargetableComponent : public UTeamComponent
{
public:
	uint8                                        Pad_5B39[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceLock                         SightSenseLock;                                    // 0x1C0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B3A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSearchableByFindProjectileEQSTargetGenerator;     // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetable;                                     // 0x269(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsTargetableByHumanPlayers;                       // 0x26A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsTargetableByAIPlayers;                          // 0x26B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsTargetableByNonPlayers;                         // 0x26C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyTargetableIfPlayersAreThreatened;             // 0x26D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B3B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxUIName*                            TargetUIName;                                      // 0x270(0x8)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxUIName*                            TargetUINamePrefix;                                // 0x278(0x8)(Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETextGender                       TargetUINameGender;                                // 0x280(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TargetName;                                        // 0x288(0x18)(Net, NativeAccessSpecifierPrivate)
	class FName                                  TargetSocket;                                      // 0x2A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTargetLocationBoundsSettings         TargetSocketBounds;                                // 0x2A8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bUseTargetSocketBounds;                            // 0x2B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTargetLocationSettings>       AdditionalTargetSockets;                           // 0x2B8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	int32                                        TargetableViewFlags;                               // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B40[0xA4];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTargetingComponent*>           TargetingMe;                                       // 0x370(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B41[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CapsuleSections;                                   // 0x3B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResourceLock                         UntargetableLock;                                  // 0x3B8(0x98)(Net, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B43[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          MeleeTargetingSockets;                             // 0x4E8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FOverrideMeleeSocket>          ConditionalMeleeTargetingSockets;                  // 0x4F8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FName>                          TargetProxyComponents;                             // 0x508(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class USceneComponent*>               TargetProxies;                                     // 0x518(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bAllowCharacterHoming;                             // 0x528(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimAssistSnapTargetType          AimAssistSnapTargetType;                           // 0x529(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTargetTracking;                                   // 0x52A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableBulletMagnetism;                           // 0x52B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowedAsPerceptionSightSourceWithoutAnAssociatedPawn; // 0x52C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B45[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTargetableComponent* GetDefaultObj();

	void SetTargetUINameGender(enum class ETextGender NewTargetUINameGender);
	void SetTargetUIName(class UGbxUIName* NewTargetUIName);
	void SetTargetName(class FText& NewTargetName);
	void SetIsTargetableByNonPlayers(bool IsTargetable);
	void SetIsTargetableByHumanPlayers(bool IsTargetable);
	void SetIsTargetableByAIPlayers(bool IsTargetable);
	void SetIsTargetable(bool IsTargetable);
	void PrefixTargetName(class UGbxUIName* TargetUINamePrefix);
	void OnRep_TargetUIName();
	bool IsTargetableByPawn(class APawn* Pawn);
	bool IsTargetableByNonPlayers();
	bool IsTargetableByHumanPlayers();
	bool IsTargetableByController(class AController* Controller);
	bool IsTargetableByAIPlayers();
	bool IsTargetableByActor(class AActor* Actor);
	bool IsTargetable();
	class FName GetTargetSocketName();
	void GetTargetProxyComponentNames(TArray<class FName>* Array);
	class FString GetTargetNameString();
	class FText GetTargetName();
	TArray<struct FVector> GetTargetLocations();
	struct FVector GetTargetLocation();
	struct FVector GetClosestTargetLocation(struct FVector& Origin, struct FVector& Direction);
	void GetAvailableSocketNames(TArray<class FName>* Array);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.TargetActorInfoLibrary
class UTargetActorInfoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTargetActorInfoLibrary* GetDefaultObj();

	bool IsSenseActive(struct FTargetActorInfo& Info, TSubclassOf<class UAISense> Sense);
	bool IsExistingTarget(struct FTargetActorInfo& Info);
	bool IsDirectlySensed(struct FTargetActorInfo& Info);
	bool HasStimulusForSense(struct FTargetActorInfo& Info, TSubclassOf<class UAISense> Sense);
	bool HasAnyKnownStimuli(struct FTargetActorInfo& Info);
	struct FVector GetStimulusLocation(struct FTargetActorInfo& Info, TSubclassOf<class UAISense> Sense);
	bool GetStimulusForSense(struct FTargetActorInfo& Info, TSubclassOf<class UAISense> Sense, struct FAIStimulus* Stimulus);
	struct FVector GetReceiverLocation(struct FTargetActorInfo& Info, TSubclassOf<class UAISense> Sense);
	struct FVector GetBestStimulusLocation(struct FTargetActorInfo& Info, float* Age);
	bool GetBestStimulus(struct FTargetActorInfo& Info, struct FAIStimulus* Stimulus);
	struct FVector GetBestAttackLocation(struct FTargetActorInfo& Info, struct FVector* OutTargetVelocity);
	class UTargetingComponent* FindActorTargetingComponent(class AActor* Actor);
};

// 0xE6B0 (0xE828 - 0x178)
// Class GbxGameSystemCore.TargetingComponent
class UTargetingComponent : public UActorComponent
{
public:
	uint8                                        Pad_5B99[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  TargetListChangedBpEvent;                          // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B9A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        QueryFrequency;                                    // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bQueryImmediately;                                 // 0x2EC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       QueryParams;                                       // 0x2F0(0xB8)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B9C[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxBlackboardKeySelector>     BlackboardKeys;                                    // 0x3C0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B9D[0xE430];                                  // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOnlyTargetThreatsToPlayers;                       // 0xE800(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B9E[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTargetableComponent*                  CurrentTargetable;                                 // 0xE818(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5B9F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTargetingComponent* GetDefaultObj();

	void ServerSetBestTarget(class AActor* NewBestTarget);
	bool IsBestTargetDirectlySensed(int32 TargetIndex);
	bool HasTargets();
	bool HasTarget(class AActor* Actor);
	bool GetTargetLocationForActor(class AActor* Actor, struct FVector* TargetLocation);
	bool GetTargetInfoForActor(class AActor* Actor, struct FTargetActorInfo* TargetInfo);
	int32 GetTargetInfoCount();
	bool GetTargetInfoAt(int32 TargetIndex, struct FTargetActorInfo* TargetInfo);
	class AActor* GetTargetActorAt(int32 TargetIndex);
	class AActor* GetBestThreatActor(bool bRequireFirsthandKnowledge);
	struct FVector GetBestTargetLocation(int32 TargetIndex);
	bool GetBestTargetInfo(struct FTargetActorInfo* TargetInfo, int32 TargetIndex);
	class AActor* GetBestTargetActor(int32 TargetIndex);
	class UTargetableComponent* GetBestTargetableComponent(int32 TargetIndex);
	struct FVector GetBestAttackTargetLocation(struct FVector* OutTargetVelocity, int32 TargetIndex);
	bool DoesBestTargetHaveStimulusForSense(TSubclassOf<class UAISense> Sense, float MaxAge, int32 TargetIndex);
};

// 0x0 (0x178 - 0x178)
// Class GbxGameSystemCore.TargetingDebugServerRpcComponent
class UTargetingDebugServerRpcComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UTargetingDebugServerRpcComponent* GetDefaultObj();

	void SetInspectedActor(class AActor* Actor);
};

// 0x80 (0xB0 - 0x30)
// Class GbxGameSystemCore.Team
class UTeam : public UGbxDataAsset
{
public:
	class FString                                DisplayName;                                       // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     SelfAttitude;                                      // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     DefaultAttitude;                                   // 0x41(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     DefaultAttitudeFromTeams;                          // 0x42(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultAttitudeFromTeams;                      // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTeamAttitudeSetEntry>         AttitudeTowardTeams;                               // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTeamAttitudeSetEntry>         AttitudeFromTeams;                                 // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableTeamCollisionChannel;                       // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamCollisionChannel             TeamCollisionChannel;                              // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BA2[0x46];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTeam* GetDefaultObj();

	enum class ETeamAttitude GetAttitudeToward(class UTeam* Team);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.TeleportInterface
class ITeleportInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITeleportInterface* GetDefaultObj();

};

// 0x90 (0x780 - 0x6F0)
// Class GbxGameSystemCore.TerritoryComponent
class UTerritoryComponent : public UPrimitiveComponent
{
public:
	struct FTerritoryData                        PatrolTerritory;                                   // 0x6F0(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FTerritoryData                        ThreatTerritory;                                   // 0x710(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FTerritoryData                        CombatTerritory;                                   // 0x730(0x20)(Edit, NativeAccessSpecifierPrivate)
	enum class ETerritoryCombatProxyType         CombatProxy;                                       // 0x750(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseCombatProxy;                                   // 0x751(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAlwaysAwareInThreatArea;                          // 0x752(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ETerritoryDrawStyle               DrawStyle;                                         // 0x753(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BA4[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTerritoryComponent*>           LinkedTerritories;                                 // 0x768(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5BA5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTerritoryComponent* GetDefaultObj();

};

// 0x38 (0x1B0 - 0x178)
// Class GbxGameSystemCore.TrivialFoleyImplementationComponent
class UTrivialFoleyImplementationComponent : public UActorComponent
{
public:
	uint8                                        Pad_5BA9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImpactData*                           FootstepImpact;                                    // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     FootstepPhysmat;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                BodySkeletalMesh;                                  // 0x190(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          FootSockets;                                       // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFoleyMainComponent*                   CachedFoleyMainComponent;                          // 0x1A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTrivialFoleyImplementationComponent* GetDefaultObj();

};

// 0x8 (0x290 - 0x288)
// Class GbxGameSystemCore.UIStatData_Numeric_Formula
class UUIStatData_Numeric_Formula : public UUIStatData_Numeric
{
public:
	class UUIStatFormulaEvaluator*               Formula;                                           // 0x288(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIStatData_Numeric_Formula* GetDefaultObj();

};

// 0x30 (0xE8 - 0xB8)
// Class GbxGameSystemCore.UIStatData_Text
class UUIStatData_Text : public UUIStatData
{
public:
	class FText                                  Text;                                              // 0xB8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  TextWithAdditionalInput;                           // 0xD0(0x18)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUIStatData_Text* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.UIStatAttributeEffectProvider
class IUIStatAttributeEffectProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUIStatAttributeEffectProvider* GetDefaultObj();

};

// 0x88 (0xB8 - 0x30)
// Class GbxGameSystemCore.UsabilityDataSelection
class UUsabilityDataSelection : public UGbxDataAsset
{
public:
	class UGbxCondition*                         EnabledCondition;                                  // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      PrimaryUseDefSelection;                            // 0x38(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      PrimaryHoldUseDefSelection;                        // 0x58(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      SecondaryUseDefSelection;                          // 0x78(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FUseDefSelection                      SecondaryHoldUseDefSelection;                      // 0x98(0x20)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUsabilityDataSelection* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class GbxGameSystemCore.UsableTypeDefinition
class UUsableTypeDefinition : public UGbxDataAsset
{
public:
	class FText                                  ActionText;                                        // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  InputActionOverride;                               // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayLockedIcon;                                // 0x50(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidePrompt;                                       // 0x51(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCostsToUse;                                       // 0x52(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCostIsVisualOnly;                                 // 0x53(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTreatAsUnaffordableWhenZeroCurrencyHeld;          // 0x54(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxInventoryCategoryData*             CurrencyType;                                      // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsableTypeCostContext            CostContext;                                       // 0x60(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Cost;                                              // 0x68(0x38)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUsableTypeDefinition* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.UseOwnerInterface
class IUseOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUseOwnerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.UserStatesInterface
class IUserStatesInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUserStatesInterface* GetDefaultObj();

	bool HasEnableConditionsSetForAnyUserState();
	void BlueprintStateHandler(bool bFromLoad);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.UserStatesFunctionLibrary
class UUserStatesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserStatesFunctionLibrary* GetDefaultObj();

	bool HasEnableConditionsSetForSpecificUserState(class UObject* Context, class FName UserStateProperty);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.UseSystemFunctionLibrary
class UUseSystemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUseSystemFunctionLibrary* GetDefaultObj();

	void SetIsUsable(class AActor* Actor, bool bNewIsUsable);
	void ResetUseCount(class AActor* Actor);
};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.WeaponInterface
class IWeaponInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWeaponInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxGameSystemCore.WeaponUserInterface
class IWeaponUserInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWeaponUserInterface* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxGameSystemCore.WeatherTemplate
class UWeatherTemplate : public UGbxDataAsset
{
public:
	class UParticleSystem*                       WorldSpaceParticleTemplate;                        // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ScreenSpaceParticleTemplate;                       // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeatherTemplate* GetDefaultObj();

};

}


