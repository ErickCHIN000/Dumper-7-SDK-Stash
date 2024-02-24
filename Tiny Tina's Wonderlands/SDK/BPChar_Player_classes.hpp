#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8D8 (0x3F48 - 0x3670)
// BlueprintGeneratedClass BPChar_Player.BPChar_Player_C
class ABPChar_Player_C : public AOakCharacter_Player
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3670(0x8)(Transient, DuplicateTransient)
	class UDecalComponent*                       Decal_DragonAura;                                  // 0x3678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_DragonAura;                                     // 0x3680(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneBodySwitchComponent*             Swtich_DragonAura;                                 // 0x3688(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFaceFXComponent*                      FaceFX;                                            // 0x3690(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Eyelashes;                                         // 0x3698(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFoleyAccessoryComponent*              FoleyAccessory;                                    // 0x36A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  DefaultAudio;                                      // 0x36A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Wand_R_3rd;                                        // 0x36B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Wand_3rd;                                          // 0x36B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPetOwnerComponent*                    PetOwner;                                          // 0x36C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpellDuplicationComponent*            SpellDuplication;                                  // 0x36C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Weapon_3rd;                                        // 0x36D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             FaceAcc;                                           // 0x36D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Eyebrows;                                          // 0x36E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             HeadAcc;                                           // 0x36E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Head;                                              // 0x36F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTerritoryComponent*                   TerritoryPlayer;                                   // 0x36F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHavokNavObstacleComponent*            HavokNavObstacle;                                  // 0x3700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocialInteractionComponent*           SocialInteraction;                                 // 0x3708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakInventoryListComponent*            InventoryList;                                     // 0x3710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakInventoryListComponent*            BankInventoryList;                                 // 0x3718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakMinimapIconComponent*              OakMinimapIcon;                                    // 0x3720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakHitRegionComponent*                HitRegion;                                         // 0x3728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakCharacterSoundLogicComponent*      OakCharacterSoundLogic;                            // 0x3730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_OakAttributeComponent_C*           BP_OakAttributeComponent;                          // 0x3738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPFightForYourLifeComponent_C*        BPFightForYourLifeComponent;                       // 0x3740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerMeleeStateComponent*            PlayerMeleeState;                                  // 0x3748(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakPlayerAbilityManagerComponent*     OakPlayerAbilityManager;                           // 0x3750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBodyWeaponHoldManagerComponent*       BodyWeaponHoldManager;                             // 0x3758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakFirstPersonComponent*              FirstPerson;                                       // 0x3760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFoleyMainComponent*                   FoleyMain;                                         // 0x3768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0x3770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerBalanceStateComponent*          PlayerBalanceState;                                // 0x3778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SacrificeExpGrowth_RadiusScale_14DEFA4340C9699975A4F8BC3CD146A8; // 0x3780(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SacrificeExpGrowth__Direction_14DEFA4340C9699975A4F8BC3CD146A8; // 0x3784(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SacrificeExpGrowth;                                // 0x3788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IK_Override;                                       // 0x3790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A7[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            R_Hand_IK_World;                                   // 0x37A0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            L_Hand_IK_World;                                   // 0x37D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FText                                  Text;                                              // 0x3800(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          TextColor;                                         // 0x3818(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextColorText;                                     // 0x3828(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TextSize;                                          // 0x3840(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TextDuration;                                      // 0x3844(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceEnd;                                          // 0x3848(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_HealthPickRegenerationScalar;                  // 0x3854(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ButtSlamRadius;                                // 0x3860(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ButtSlamImpact_Multiplier;                     // 0x386C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_SlideSpeedMultiplier;                          // 0x3878(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CashMultiplier;                                // 0x3884(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_AmmoMultiplier;                                // 0x3890(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_34B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Manufacturers;                                     // 0x38A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FForceSelection                       ForceImpact_Heavy;                                 // 0x38B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                  GroundSlam;                                        // 0x38D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsDueling;                                         // 0x38E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    WalkSpeed_ZeroG;                                   // 0x38E4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    WalkSpeed_Normal;                                  // 0x38F0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_Player_AdditionalProjectiles;                  // 0x38FC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_FrozenDamageMultiplier;                        // 0x3908(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_Player_CastSpeed_0;                            // 0x3914(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                          BMP_Pose_List;                                     // 0x3920(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  TargetBMP;                                         // 0x3930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Morph_List;                                        // 0x3938(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  TargetMorph;                                       // 0x3948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          HeadMorph_List;                                    // 0x3950(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  HeadMorph_Target;                                  // 0x3960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ArmorMorph_Target;                                 // 0x3968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ArmorMorph_List;                                   // 0x3970(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAttributeEffectData                  Base_Luck_Effect;                                  // 0x3980(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeModifierHandle           Base_Luck_Effect_Handle;                           // 0x39C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                    Att_ClassStat_Barbarian;                           // 0x39D8(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ClassStat_Rogue;                               // 0x39E4(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ClassStat_Necro;                               // 0x39F0(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ClassStat_Ranger;                              // 0x39FC(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ClassStat_Knight;                              // 0x3A08(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ClassStat_Mage;                                // 0x3A14(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_PlayerCompanion_AttackSpeedScale;              // 0x3A20(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_PlayerCompanion_MoveSpeedScale;                // 0x3A2C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_PlayerCompanion_RespawnScale;                  // 0x3A38(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_KnightOfTheClaw_HammerDamage;                  // 0x3A44(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_PlayerCompanion_HealthScale;                   // 0x3A50(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_34D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakGameInstance*                      GameInstance;                                      // 0x3A60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeInteger                  Att_PlayerCompanion_Count;                         // 0x3A68(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_34DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxSkeletalMeshComponent*             Weapon_1st;                                        // 0x3A78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_DragonPet_AttackSpeedScale;                    // 0x3A80(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_DemiLich_AttackSpeedScale;                     // 0x3A8C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_MushroomCompanion_AttackSpeedScale;            // 0x3A98(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeInteger                  Att_KnightOfTheClaw_DragonAura_Base;               // 0x3AA4(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeModifierHandle           Difficulty_Gold_Effect_Handle;                     // 0x3AB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                  Difficulty_Gold_Effect;                            // 0x3AC0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeFloat                    Att_DemiLich_SoulRupture_DamageScale;              // 0x3B08(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_PlayerSummoned_DamageScale;                    // 0x3B14(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_MushroomCompanion_DamageScale;                 // 0x3B20(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_EGCMultiplier;                                 // 0x3B2C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FAttributeEffectData                  Difficulty_EGC_Effect;                             // 0x3B38(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeModifierHandle           Difficulty_EGC_Effect_Handle;                      // 0x3B80(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                    Att_PlayerCompanion_HealthRegen;                   // 0x3B90(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_34F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxSkeletalMeshComponent*             Wand_1st;                                          // 0x3BA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Wand_R_1st;                                        // 0x3BA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_WhirlwindInst;                               // 0x3BB0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_WhirlwindStart;                              // 0x3BC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_WhirlwindAxeWoosh;                           // 0x3BD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_WhirlwindAxeWooshInst;                       // 0x3BD8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_WhirlwindStop;                               // 0x3BF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_SlassJump;                                   // 0x3BF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_SlassSwing;                                  // 0x3C00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_RageStart;                                   // 0x3C08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_RageStop;                                    // 0x3C10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_RageInst;                                    // 0x3C18(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_BloodSacrifice;                              // 0x3C30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_BloodSacrificeInst;                          // 0x3C38(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseListenerEnvironmentalEffect*     Audio_RageEffect;                                  // 0x3C50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ReaperStart;                                 // 0x3C58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_ReaperInst;                                  // 0x3C60(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_ReaperStop;                                  // 0x3C78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ReaperInvul;                                 // 0x3C80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_SacrificeCast;                               // 0x3C88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_SacrificeExp;                                // 0x3C90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  SacrificeExplosion;                                // 0x3C98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseListenerEnvironmentalEffect*     Audio_ReaperEffect;                                // 0x3CA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CalledShotActivate;                          // 0x3CA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CalledShotDraw;                              // 0x3CB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CalledShotFire;                              // 0x3CB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CryoNadoActivate;                            // 0x3CC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_KnightOfTheClaw_DragonAuraBonus;               // 0x3CC8(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3509[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           Audio_LivingBladeActivate;                         // 0x3CD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_LivingBladeMove;                             // 0x3CE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_StealthActivate;                             // 0x3CE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_StealthHand;                                 // 0x3CF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_StealthDeactivate;                           // 0x3CF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_PolymorphActivate;                           // 0x3D00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_PolymorphCrush;                              // 0x3D08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_FireBreathStart;                             // 0x3D10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_FireBreathStop;                              // 0x3D18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_FieryRedemptionActivate;                     // 0x3D20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_FieryRedemptionImpact;                       // 0x3D28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_HammerTossActivate;                          // 0x3D30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_HammerTossThrow;                             // 0x3D38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_HammerTossRecall;                            // 0x3D40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_HammerTossCatch;                             // 0x3D48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewLevel;                                          // 0x3D50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3513[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWwisePlaybackInstance                Audio_StealthInst;                                 // 0x3D58(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                    Att_UnusedAntiqueGreatbow;                         // 0x3D70(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3517[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          GreatbowTimer;                                     // 0x3D80(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeModifierHandle           GreatBowAttributeMod;                              // 0x3D88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_GroundSlamBuildup;                           // 0x3D98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_GroundSlamImpactUnarmed;                     // 0x3DA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_GroundSlamImpactArmed;                       // 0x3DA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UWwiseEvent*>      Audio_GroundSlamElementImp;                        // 0x3DB0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_AimedShotActivate;                           // 0x3E00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_AimedShotEnd;                                // 0x3E08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseRtpc*                            Audio_AimedShotRTPC;                               // 0x3E10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_AimedShotInst;                               // 0x3E18(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_SmitePillar;                                 // 0x3E30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_HammerWindup;                                // 0x3E38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_RC;                          // 0x3E40(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_SO;                          // 0x3E4C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_CD;                          // 0x3E58(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_SW;                          // 0x3E64(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_MD_Normal;                   // 0x3E70(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_352B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           Audio_HammerImpact;                                // 0x3E80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_MeleeCritical;                               // 0x3E88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_MD_Tough;                    // 0x3E90(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_MD_Badass;                   // 0x3E9C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_MD_SuperBadass;              // 0x3EA8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_MD_UltimateBadass;           // 0x3EB4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_MD_Corrupted;                // 0x3EC0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_CrystalMultiplier_MD_EndlessBoss;              // 0x3ECC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_LevelUp3rd;                                  // 0x3ED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_LevelUp;                                     // 0x3EE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeInteger                  Att_KnightOfTheClaw_DragonAura_RebukingAura;       // 0x3EE8(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_HealthReservationEnabled;                      // 0x3EF4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_BamfIn;                                      // 0x3F00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_BamfOut;                                     // 0x3F08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseAuxBus*                          Audio_StealthAuxBus;                               // 0x3F10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseListenerEnvironmentalEffect*     Audio_StealthListenerEffect;                       // 0x3F18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Audio_StealthEffectStrength;                       // 0x3F20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_353E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         ActionSkillWeaponMesh;                             // 0x3F28(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_ClassStat_Shaman;                              // 0x3F30(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_Soaked_Duration_Multiplier;                    // 0x3F3C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPChar_Player_C* GetDefaultObj();

	void GetPlayerCharacterEventHub(class UBPEventHub_PlayerCharacter_C** Res, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess);
	void SetAntiqueGreatbowAttribute(bool Enable, bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetPlayerWandVisibility(bool Enable, bool RightHandWand, bool* Res, bool Temp_bool_Variable, bool Temp_bool_Variable1, class USceneComponent* K2Node_Select_Default, class USceneComponent* K2Node_Select1_Default);
	void GetPlayerClasses(enum class EOakPlayerClass* Primary, enum class EOakPlayerClass* Secondary, enum class EOakPlayerClass CallFunc_GetPrimaryPlayerClass_Res, enum class EOakPlayerClass CallFunc_GetSecondaryPlayerClass_Res);
	void GetPrimaryPlayerClass(enum class EOakPlayerClass* Res, enum class EOakPlayerClass CallFunc_GetPrimaryPlayerClass_ReturnValue);
	void GetSecondaryPlayerClass(enum class EOakPlayerClass* Res, enum class EOakPlayerClass CallFunc_GetSecondaryPlayerClass_ReturnValue);
	void SpawnPlayerParticleSystemAtLocationMulticast(class UParticleSystem* EmitterTemplate, const struct FTransform& EmitterTransform, class UParticleSystemComponent** Res);
	void GetActionSkillWeapons(class UGbxSkeletalMeshComponent** Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent** Action_Skill_Weapon_3rd);
	void GetGameInstance(bool* Res, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	void GetTotalSummonedUnits(int32* Res, int32 CallFunc_GetManagedActorCount_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_GetManagedActorCount_ReturnValue3, bool CallFunc_GetGameInstance_Res, int32 CallFunc_Add_IntInt_ReturnValue2);
	void GetTotalCompanionsAndSummonedUnits(int32* Res, int32 CallFunc_GetTotalSummonedUnits_Res, int32 CallFunc_GetTotalCompanions_Res, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetTotalCompanions(int32* Res, int32 CallFunc_Conv_GbxAttributeIntegerToInteger_ReturnValue);
	void GetClassFeat(enum class EOakPlayerClass Class, class UGbxAbility** Res, bool CallFunc_InnerGetClassFeat_Res, class UGbxAbility* CallFunc_InnerGetClassFeat_Ability);
	void HasPlayerClass(enum class EOakPlayerClass Class, bool* Res, bool CallFunc_InnerHasPlayerClass_Res);
	void Enemy_OnPolymorphStart(bool* Res);
	void Enemy_OnPolymorphStop(bool* Res);
	void CanEnemyBeTeamSwapped(bool* Res);
	void GetCompanionTargetingSocket(class FName* Socket);
	void OnRep_ActionSkillWeaponMesh(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void PlayConnectedBamfAudio(class AController* Player, bool Disconnecting, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UWwiseEvent* K2Node_Select_Default, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void RemoveGreatbowAttribute(bool CallFunc_RemoveAttributeModifier_ReturnValue);
	void UpdateDifficultyBonuses(bool CallFunc_RemoveAttributeModifier_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue1, bool CallFunc_RemoveAttributeModifier_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess);
	void GetPets(TArray<class AActor*>* OutPets, const TArray<class AActor*>& CurrentPetArray, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res1, class AActor* CallFunc_GetDragonPet_Ref, TScriptInterface<class IIFeat_Necromancer_C> K2Node_DynamicCast_AsIFeat_Necromancer, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetDemiLich_Ref, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UGbxAbility* CallFunc_GetClassFeat_Res2, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetMushroomCompanion_Ref, bool CallFunc_GetMushroomCompanion_Res, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue2);
	void UpdateBaseLuck(enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class UOakActionAbility* GetSecondaryActionAbility(class UOakPlayerAbility* CallFunc_GetSlotAbility_ReturnValue, class UOakActionAbility* K2Node_DynamicCast_AsOak_Action_Ability, bool K2Node_DynamicCast_bSuccess);
	class UOakActionAbility* GetPrimaryActionAbility(class UOakPlayerAbility* CallFunc_GetSlotAbility_ReturnValue, class UOakActionAbility* K2Node_DynamicCast_AsOak_Action_Ability, bool K2Node_DynamicCast_bSuccess);
	void InnerHasPlayerClass(enum class EOakPlayerClass Class, bool* Res, bool CallFunc_IsBranchPrimaryOrSlottedForClass_ReturnValue);
	void InnerGetClassFeat(enum class EOakPlayerClass Class, bool* Res, class UGbxAbility** Ability, class UOakPlayerAbilityTreeBranchData* CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue, bool CallFunc_InnerHasPlayerClass_Res, class UGbxAbility* CallFunc_FindAbility_ReturnValue);
	void GetTransfusionSpawnEndLocation(class AActor* SourceActor, struct FVector* Res, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2);
	void GetLevelUpFXAttachComponent(class USceneComponent** Res, class AActor* CallFunc_GetPawnAttachActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue);
	void PlayLevelUpFX(const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class USceneComponent* CallFunc_GetLevelUpFXAttachComponent_Res, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void GroundSlamEnd(float Distance, float MaxHeightDamageScalar, class UCurveFloat* DamageScaleCurve, class UClass* Temp_class_Variable, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FHitResult& Temp_struct_Variable, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Conv_ForceSelectionToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue);
	void BackupFriendlyTargeting();
	void GetHeadMesh(class USkeletalMesh** HeadMesh);
	void ClearTargetingTimers();
	bool PreInventoryItemPickupCheck(class AActor* PickupActor, int32 Quantity, bool UsedByInstigator, class AInventoryItemPickup* WorldPickupActor, class AOakInventoryItem* K2Node_DynamicCast_AsOak_Inventory_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBePickedUp_ReturnValue);
	void UserConstructionScript(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Setup_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void SacrificeExpGrowth__FinishedFunc();
	void SacrificeExpGrowth__UpdateFunc();
	void InpActEvt_R_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void Audio_Player_Barbarian_Slass_Jump();
	void Audio_Player_Barbarian_Rage_Start();
	void Audio_Player_Barbarian_Rage_Stop();
	void Audio_Player_Barbarian_Whirlwind_Stop(bool Interrupt);
	void Audio_Player_Barbarian_BloodSacrifice();
	void Audio_Player_Necro_Reaper_Start();
	void Audio_Player_Necro_Reaper_Stop();
	void Audio_Player_Necro_Reaper_Invulnerable();
	void Audio_Player_Necro_Sacrifice_Cast();
	void Audio_Player_Necro_Sacrifice_Exp();
	void Audio_Player_Ranger_CalledShot_Activate();
	void Audio_Player_Ranger_CalledShot_Draw();
	void Audio_Player_Ranger_CalledShot_Fire();
	void Audio_Player_Ranger_CryoNado_Activate();
	void Audio_Player_Rogue_LivingBlade_Activate();
	void Audio_Player_Rogue_LivingBlade_Move();
	void Audio_Player_Shared_Skill_Damage(const struct FVector& ActorLocation, class UWwiseEvent* WwiseEvent);
	void Audio_Player_Rogue_Stealth_Activate();
	void Audio_Player_Rogue_Stealth_Stop();
	void Audio_Player_GunMage_Polymorph_Activate();
	void Audio_Player_Barbarian_Whirlwind_Start();
	void Audio_Player_GunMage_Polymorph_Crush();
	void Audio_Player_Knight_FireBreath_Start();
	void Audio_Player_Knight_FireBreath_Stop();
	void SetMissionDebugText(class FText Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
	void Ow_Player_RE_Stun();
	void Audio_Player_Knight_HammerToss_Activate();
	void Audio_Player_Knight_HammerToss_Recall();
	void Audio_Player_Knight_HammerToss_Throw();
	void Audio_Player_Knight_HammerToss_Catch();
	void Ow_camera_reset();
	void Audio_Player_Ranger_AimedShot_Activate();
	void Audio_Player_Ranger_AimedShot_End();
	void Audio_Player_Ranger_AimedShot_Intensify(float Intensity);
	void Ow_camera_zoom();
	void Audio_Player_Knight_Smite_Exp(const struct FVector& Location);
	void UseBanner();
	void Audio_Player_Knight_HammerSlam();
	void ReturnToOverworldTransition(bool IsReturning);
	void Audio_Player_Knight_HammerWindup();
	void Audio_PlayAbilitySoundOnPlayer(bool IsLocalOnly, class UWwiseEvent* WwiseEvent);
	void RandomEncounterTransition(bool IsEncountering);
	void OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void OnInventoryPickedUp(class AActor* PickedUpActor, int32 Quantity);
	void DoMelee();
	void Enemy_OnThoughtLockStop();
	void Enemy_OnThoughtLockStart();
	void Audio_Player_Melee_Killed(class UWwiseEvent* WwiseEvent);
	void Audio_Player_Melee_Ringout(class UWwiseEvent* RingoutAudio, bool IsCritical, class UWwiseEvent* CriticalAudio);
	void Enemy_OnPhaseLockStop();
	void MeleeStop();
	void ReceiveBeginPlay();
	void Enemy_OnPhaseLockStart();
	void Player_HealthDepleted(class AOakCharacter* Character);
	void OnJumped();
	void OnLanded(struct FHitResult& Hit);
	void Audio_Player_Barbarian_Slass_Impact();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void GroundSlam_End(float Distance);
	void Audio_Player_Barbarian_Slass_Swing();
	void LevelTransition_OnDungeonStop();
	void Player_LevelUp(int32 Old_XP_Level, int32 New_XP_Level);
	void BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player(int32 OldExperienceLevel, int32 NewExperienceLevel);
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void StartZeroG();
	void EndZeroG();
	void ServerStartZeroG();
	void BndEvt__OakPlayerAbilityManager_K2Node_ComponentBoundEvent_1_SimplePlayerAbilitySlotDelegateSignature__DelegateSignature_BPChar_Player(class UOakPlayerAbilitySlotData* SlotData);
	void SetActionSkillWeaponMesh(class USkeletalMesh* SkeletalMesh);
	void SetActionSkillWeaponVisibility(bool Enabled);
	void Event_Difficulty_Changed(enum class EPlayerDifficultySetting Difficulty);
	void ReceivePossessed(class AController* NewController);
	void BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_2_LevelChangedEvent__DelegateSignature_BPChar_Player(int32 OldExperienceLevel, int32 NewExperienceLevel);
	void On_Luck_Changed(float NewLuck);
	void LevelUpTutorialCheck(int32 NewLevel);
	void Audio_Player_GroundSlam_Buildup();
	void Audio_Player_GroundSlam_Impact();
	void SetActionSkillWeaponVisibility1st(bool Enable);
	void SetActionSkillWeaponVisibility3rd(bool Enable);
	void Multicast_SpawnPlayerParticleSystemAtLocation(class UParticleSystem* EmitterTemplate, const struct FTransform& Emitter_Transform);
	void Multicast_LockMovement(class FName Reason);
	void Multicast_UnlockMovement(class FName Reason);
	void On_Mayhem_Level_Unlocked(int32 MaxUnlockedLevel);
	void LevelTransition_OnPrisonStart();
	void LevelTransition_OnPrisonBreak();
	void Multicast_PrisonStart();
	void Multicast_PrisonBreak();
	void OnStartGroundSlam();
	void LevelTransition_OnDungeonStart();
	void Muliticast_OW_Spawn();
	void ExecuteUbergraph_BPChar_Player(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, bool K2Node_Event_Interrupt, bool CallFunc_IsAudioPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue2, bool CallFunc_IsAudioPlaying_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue3, bool CallFunc_IsAudioPlaying_ReturnValue2, bool CallFunc_IsAudioPlaying_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue5, bool CallFunc_IsLocallyControlled_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue6, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue7, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue8, const struct FVector& K2Node_Event_ActorLocation, class UWwiseEvent* K2Node_Event_WwiseEvent2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue9, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue5, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue10, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue11, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue12, class FText K2Node_Event_Text, float K2Node_Event_TextSize, float K2Node_Event_Duration, const struct FLinearColor& K2Node_Event_TextColor, bool K2Node_Event_FacePlayer, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue13, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue14, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue5, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue6, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue6, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue7, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue7, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue8, bool CallFunc_IsAudioPlaying_ReturnValue4, float K2Node_Event_Intensity, bool CallFunc_IsLocallyControlled_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue15, bool CallFunc_IsLocallyControlled_ReturnValue5, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue16, bool CallFunc_IsAudioPlaying_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2, const struct FVector& K2Node_Event_Location, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue3, bool K2Node_Event_IsReturning, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue9, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, bool K2Node_Event_IsLocalOnly, class UWwiseEvent* K2Node_Event_WwiseEvent1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue17, bool CallFunc_IsLocallyControlled_ReturnValue6, bool K2Node_Event_IsEncountering, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UWwiseListenerEnvironmentalEffect* CallFunc_CreateListenerAudioEffect_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue10, bool CallFunc_IsAudioPlaying_ReturnValue7, bool CallFunc_IsInDownState_ReturnValue, class AActor* K2Node_CustomEvent_InventoryActor1, class UInventorySlotData* K2Node_CustomEvent_SlotData1, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_InventoryActor, class UInventorySlotData* K2Node_CustomEvent_SlotData, class AActor* K2Node_CustomEvent_PickedUpActor, int32 K2Node_CustomEvent_Quantity, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1, bool K2Node_DynamicCast_bSuccess1, class AOakInventoryItem* K2Node_DynamicCast_AsOak_Inventory_Item, bool K2Node_DynamicCast_bSuccess2, class UWwiseEvent* K2Node_Event_WwiseEvent, class UWwiseEvent* K2Node_Event_RingoutAudio, bool K2Node_Event_IsCritical, class UWwiseEvent* K2Node_Event_CriticalAudio, bool CallFunc_IsValid_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue18, class UFirstPersonComponent* CallFunc_GetFirstPersonComponent_ReturnValue, class FName CallFunc_GetSocketBoneName_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue11, bool CallFunc_IsLocallyControlled_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue12, class AOakCharacter* K2Node_Event_Character, const struct FHitResult& K2Node_Event_Hit, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue13, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue14, bool CallFunc_IsAudioPlaying_ReturnValue8, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, bool CallFunc_IsValid_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue4, float K2Node_Event_Distance, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 CallFunc_GetNumPlayers_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_CustomEvent_Old_XP_Level, int32 K2Node_CustomEvent_New_XP_Level, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_ComponentBoundEvent_OldExperienceLevel1, int32 K2Node_ComponentBoundEvent_NewExperienceLevel1, float CallFunc_MakeLiteralFloat_ReturnValue, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess4, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FVector& CallFunc_GetTransfusionSpawnEndLocation_Res, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class UClass* Temp_class_Variable, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, bool Temp_bool_Variable, bool Temp_bool_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputKeyEvent_Key, bool CallFunc_ActorHasTag_ReturnValue, class UOakPlayerAbilitySlotData* K2Node_ComponentBoundEvent_SlotData, class UClass* CallFunc_GetSlotAbilityClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue5, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class USkeletalMesh* K2Node_Event_SkeletalMesh, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool K2Node_Event_Enabled, enum class EPlayerDifficultySetting K2Node_CustomEvent_Difficulty, class AController* K2Node_Event_NewController, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess5, int32 K2Node_ComponentBoundEvent_OldExperienceLevel, int32 K2Node_ComponentBoundEvent_NewExperienceLevel, bool CallFunc_IsEditorSession_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float K2Node_CustomEvent_NewLuck, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_GetCategoryItemQuantity_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 K2Node_CustomEvent_NewLevel, class UGameInstance* CallFunc_GetGameInstance_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue19, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UWwiseEvent* K2Node_Select_Default, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue20, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue5, bool K2Node_Event_Enable1, bool K2Node_Event_Enable, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, int32 CallFunc_GetStatValue_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FTransform& K2Node_CustomEvent_Emitter_Transform, class FName K2Node_CustomEvent_Reason1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class FName K2Node_CustomEvent_Reason, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_Variable2, class UWwiseEvent* K2Node_Select1_Default, int32 K2Node_CustomEvent_MaxUnlockedLevel, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue21, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue6, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue1, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue8, class UClass* K2Node_Select2_Default);
	void GroundSlam__DelegateSignature(float Distance, float Damage);
};

}


