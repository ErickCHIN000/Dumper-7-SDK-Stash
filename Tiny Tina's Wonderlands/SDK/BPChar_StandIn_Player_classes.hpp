#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x2738 - 0x2610)
// BlueprintGeneratedClass BPChar_StandIn_Player.BPChar_StandIn_Player_C
class ABPChar_StandIn_Player_C : public AOakCharacter_StandIn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2610(0x8)(Transient, DuplicateTransient)
	class UFoleyMainComponent*                   FoleyMain;                                         // 0x2618(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFaceFXComponent*                      FaceFX;                                            // 0x2620(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0x2628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Eyelashes;                                         // 0x2630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStandInCharacterComponent*            StandInCharacter;                                  // 0x2638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             FaceAcc;                                           // 0x2640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Eyebrows;                                          // 0x2648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             HeadAcc;                                           // 0x2650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CharacterCreateConfigNames;                        // 0x2658(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         IsInCharacterEdit;                                 // 0x2668(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_831[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBPAnim_Standin_NoWeapon_C*            AnimInstance;                                      // 0x2670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInConfirmView;                                   // 0x2678(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_833[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ConfigsToRestrictBAMF;                             // 0x2680(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                BAMFToUse;                                         // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_FlourishInst;                                // 0x2698(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_BarbarianAxeSlam;                            // 0x26B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_BarbarianWhirlwind;                          // 0x26B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_GunmagePolymorph;                            // 0x26C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_KnightHammerToss;                            // 0x26C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_KnightFireyRedemption;                       // 0x26D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_NecromancerSacrifice;                        // 0x26D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_NecromancerReaperofSouls;                    // 0x26E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_RangerCalledShot;                            // 0x26E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_RangerCryonado;                              // 0x26F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_RogueLivingBlade;                            // 0x26F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_RogueStealth;                                // 0x2700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CCDetailsConfigs;                                  // 0x2708(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  PrevConfig;                                        // 0x2718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CCDefaultConfigs;                                  // 0x2720(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  NewConfig;                                         // 0x2730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPChar_StandIn_Player_C* GetDefaultObj();

	void PlayFlourishAudio(class UWwiseEvent* WwiseEvent, class FName SocketName, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue);
	void CheckForBAMF(bool ShortBAMF, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Find_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UserConstructionScript(bool CallFunc_Setup_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void OnAnimEnd_E89E1D2E4856E630296D8B85338DF038();
	void OnEnd_E89E1D2E4856E630296D8B85338DF038(enum class EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_4CF6877F4B1AAEB39BD05EB136847DFC();
	void OnEnd_4CF6877F4B1AAEB39BD05EB136847DFC(enum class EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD();
	void OnEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD(enum class EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_B2099AE74F102E7CB2764196D182A01A();
	void OnEnd_B2099AE74F102E7CB2764196D182A01A(enum class EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_24DAC42E48EDDEB865F0CEB59D674138();
	void OnEnd_24DAC42E48EDDEB865F0CEB59D674138(enum class EGbxActionEndState EndState, class AActor* Actor);
	void OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void BAMFIn(bool WithDelay, float DelayDuration, bool ShortBAMF);
	void PlayStandinAction(class UClass* ActionToPlay);
	void PlayStandInActionWithCooldown(class UClass* ActionToPlay);
	void ResetActionCooldown();
	void OnStandInConfigurationChanged(class FName NewConfig);
	void PlayCharacterCreationFlourish(class UClass* ActionToPlay, enum class EOakPlayerClass Class);
	void ReceiveBeginPlay();
	void InitCCAnimInstance();
	void Audio_Standin_Barbarian_AxeSlam();
	void Audio_StandIn_Barbarian_Whirlwind();
	void Audio_StandIn_GunMage_Polymorph();
	void Audio_StandIn_Knight_HammerToss();
	void Audio_StandIn_Knight_FireyRedemption();
	void Audio_StandIn_Necromancer_Sacrifice();
	void Audio_StandIn_Necromancer_ReaperOfSouls();
	void Audio_StandIn_Ranger_CalledShot();
	void Audio_StandIn_Ranger_Cryonado();
	void Audio_StandIn_Rogue_LivingBlade();
	void Audio_StandIn_Rogue_Stealth();
	void BAMFWithDelay();
	void ExecuteUbergraph_BPChar_StandIn_Player(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGbxActionEndState K2Node_CustomEvent_EndState1, class AActor* K2Node_CustomEvent_Actor1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* Temp_object_Variable1, enum class EGbxActionEndState Temp_byte_Variable1, enum class EGbxActionEndState Temp_byte_Variable2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBPAnim_Standin_NoWeapon_C* K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue1, class AActor* Temp_object_Variable2, class UBPAnim_Standin_NoWeapon_C* K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon1, bool K2Node_DynamicCast_bSuccess1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue1, enum class EGbxActionEndState K2Node_CustomEvent_EndState2, class AActor* K2Node_CustomEvent_Actor2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, enum class EGbxActionEndState Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class AActor* Temp_object_Variable3, class AActor* K2Node_CustomEvent_InventoryActor1, class UInventorySlotData* K2Node_CustomEvent_SlotData1, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item, bool K2Node_DynamicCast_bSuccess2, class AActor* K2Node_CustomEvent_InventoryActor, class UInventorySlotData* K2Node_CustomEvent_SlotData, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1, bool K2Node_DynamicCast_bSuccess3, bool K2Node_CustomEvent_WithDelay, float K2Node_CustomEvent_DelayDuration, bool K2Node_CustomEvent_ShortBAMF, class UClass* K2Node_Select_Default, class UClass* K2Node_CustomEvent_ActionToPlay2, class UClass* K2Node_CustomEvent_ActionToPlay1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class FName K2Node_Event_NewConfig, bool CallFunc_IsPlayingClass_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue2, class UBPAnim_Standin_NoWeapon_C* K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon2, bool K2Node_DynamicCast_bSuccess4, class UClass* K2Node_CustomEvent_ActionToPlay, enum class EOakPlayerClass K2Node_CustomEvent_class, TArray<struct FGbxActionRegister>& Temp_struct_Variable, enum class EGbxActionEndState K2Node_CustomEvent_EndState3, class AActor* K2Node_CustomEvent_Actor3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_IsClosed_Variable1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, enum class EGbxActionEndState Temp_byte_Variable4, class AActor* Temp_object_Variable4, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, TArray<struct FGbxActionRegister>& Temp_struct_Variable2, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsPlayingClass_ReturnValue1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, int32 K2Node_Select1_Default, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue1, enum class EGbxActionEndState K2Node_CustomEvent_EndState4, class AActor* K2Node_CustomEvent_Actor4, TArray<struct FGbxActionRegister>& Temp_struct_Variable3, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue2, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, TArray<struct FGbxActionRegister>& Temp_struct_Variable4, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue4, bool CallFunc_IsValid_ReturnValue6);
};

}


