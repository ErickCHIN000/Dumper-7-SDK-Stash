#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x488 - 0x3E8)
// BlueprintGeneratedClass BP_ProxyCharacter_Child_CharacterCreation.BP_ProxyCharacter_Child_CharacterCreation_C
class ABP_ProxyCharacter_Child_CharacterCreation_C : public ABP_CharacterCreation_ProxyChar_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    ScopedAkHead;                                      // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    BP_CharacterAppearanceComponent_ForParent;         // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         FrontEnd_HasPlayedIntro;                           // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FrontEnd_ShouldSit;                                // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FrontEnd_IsNewProfile;                             // 0x402(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FrontEnd_ShouldSmile;                              // 0x403(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_504F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SceneModeUpdate;                                   // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         FinalPose;                                         // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5055[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            AncestrySelect;                                    // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         TriggerEquipPose;                                  // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  PlayerEquipDifficultyType;                         // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InterruptAnimation;                                // 0x432(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5060[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle_EmotePreview;                          // 0x438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle_EmotePreview_Interrupts;               // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CameraArmLengthCache;                              // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCameraArmLengthChange;                           // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDifficultyLoadoutChange;                         // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInterruptDifficultyLoadoutChangeAnim;            // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Temp_EyeScale;                                     // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProxyCharacter_Child_CharacterCreation_C* GetDefaultObj();

	void Placeholder_PlayAnimation_EquipmentPreview(enum class ERealmDifficulty Index, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void SetLightingSceneMode(enum class E_CC_CameraMode SceneMode);
	void SelectFamilyMember(int32 Index);
	void Play_SoundSet_Example(enum class EBodyType SoundSet);
	void PlayAnimation_EquipPreview(enum class ERealmDifficulty NewParam);
	void ReceiveBeginPlay();
	void ResetEquipPreview();
	void Reset_Interrupt();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ProxyCharacter_Child_CharacterCreation(int32 EntryPoint, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, enum class E_CC_CameraMode Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, enum class E_CC_CameraMode K2Node_CustomEvent_SceneMode, bool K2Node_Select_Default, int32 K2Node_CustomEvent_index, enum class EBodyType K2Node_CustomEvent_SoundSet, enum class ERealmDifficulty K2Node_CustomEvent_NewParam, float K2Node_Event_DeltaSeconds, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EBodyType Temp_byte_Variable_1, class UAkAudioEvent* K2Node_Select_Default_1, bool CallFunc_PostAkEventScoped_ReturnValue, double K2Node_CallDelegate_DeltaTime_ImplicitCast);
	void OnInterruptDifficultyLoadoutChangeAnim__DelegateSignature();
	void OnDifficultyLoadoutChange__DelegateSignature(enum class ERealmDifficulty Difficulty);
	void OnCameraArmLengthChange__DelegateSignature(double NewArmLength, double DeltaTime);
	void AncestrySelect__DelegateSignature(int32 Index);
	void SceneModeUpdate__DelegateSignature(enum class E_CC_CameraMode SceneMode, double Zoom);
};

}


