#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x311 - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_HP_V2.wid_Inventory_HP_V2_C
class UWid_Inventory_HP_V2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Hide;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Bar_C*                  ArmorBar;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_ArmorBar_C*             ArmorBarOld;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ArmorContainer;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ArmorIconOld;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Atom;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Back;                                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Back2;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Back2_1;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Brain;                                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Fist;                                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Bar_C*                  HealthBar;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Heart;                                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Heart_1;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          HpMainContainer;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Bar_C*                  SanityBar;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        MoralePhase;                                       // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Sections;                                          // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        MaxMorale;                                         // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxFrenzy;                                         // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideAnimPlay;                                      // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowAnimPlay;                                      // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BarVisible;                                        // 0x302(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOnScreen;                                        // 0x303(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2A47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          HideTimer;                                         // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         BarValChanged;                                     // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Inventory_HP_V2_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_1();
	void SequenceEvent__ENTRYPOINTwid_Inventory_HP_V2_0();
	void SetMadness(float Value, bool Instant, int32 CallFunc_FTrunc_ReturnValue);
	void SetArmorInfoVisibility(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsArmorEquipped_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void GetRadiationFromSegments(float* Value, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_GetMaxRadiation_ReturnValue, int32 CallFunc_GetUIBarSegments_ReturnValue, float CallFunc_GetCurrentRadiation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1);
	void GetHealthFromSegments(float* Value, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_GetMaxHP_ReturnValue, int32 CallFunc_GetUIBarSegments_ReturnValue, float CallFunc_GetCurrentHP_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1);
	void ShowAnimCompleted();
	void HideAnimCompleted();
	void HideBar(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ShowBar(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetFrenzy(float Value, bool Instant, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetPsyhe(bool Instant, bool ForceDontShow, bool CallFunc_GetCompanionData_Found, const struct FCompanionDefinition& CallFunc_GetCompanionData_StartingData, bool CallFunc_GetCompanionData_Found_in_current_data, const struct FCompanionEntry& CallFunc_GetCompanionData_CurrentData);
	void SetRadiation(float Value, bool Instant, int32 CallFunc_FTrunc_ReturnValue);
	void SetHealth(float Selection, bool Instant, int32 CallFunc_FTrunc_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void HealthChanged(float OldHealth, float NewHealth, enum class EHealthPhase Phase, TSubclassOf<class UDamageType> InDamageClass);
	void RadiationChanged(float OldRadiation, float NewRadiation, enum class EHealthPhase Phase);
	void Init();
	void SetOpacity(float Val1, float Val2);
	void DelayedHideAnim();
	void CustomEvent_0();
	void ArmorValueChanged(float OldValue, float NewValue);
	void ArmorChanged();
	void ArmorLoaded();
	void OnMadnessChanged(float PreviousValue, float NewValue);
	void UpdateMadness();
	void ExecuteUbergraph_wid_Inventory_HP_V2(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetCurrentMadness_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_CustomEvent_OldHealth, float K2Node_CustomEvent_NewHealth, enum class EHealthPhase K2Node_CustomEvent_Phase_1, TSubclassOf<class UDamageType> K2Node_CustomEvent_InDamageClass, float K2Node_CustomEvent_OldRadiation, float K2Node_CustomEvent_NewRadiation, enum class EHealthPhase K2Node_CustomEvent_Phase, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, float CallFunc_GetCurrentRadiation_ReturnValue, float CallFunc_GetCurrentHP_ReturnValue, float K2Node_CustomEvent_Val1, float K2Node_CustomEvent_Val2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_GetRadiationThreshold_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_GetRadiationThreshold_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_GetUIBarSegments_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_GetCurrentArmorValue_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float K2Node_CustomEvent_oldValue, float K2Node_CustomEvent_newValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, float CallFunc_GetCurrentArmorValue_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, bool CallFunc_IsArmorEquipped_ReturnValue, float CallFunc_GetMaxArmorValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, bool CallFunc_IsArmorEquipped_ReturnValue_1, float CallFunc_GetMaxArmorValue_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, int32 CallFunc_GetCurrentMadness_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, float K2Node_CustomEvent_PreviousValue, float K2Node_CustomEvent_newValue);
};

}


