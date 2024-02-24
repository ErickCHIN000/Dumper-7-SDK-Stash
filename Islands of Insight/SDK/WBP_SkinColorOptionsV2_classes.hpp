#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass WBP_SkinColorOptionsV2.WBP_SkinColorOptionsV2_C
class UWBP_SkinColorOptionsV2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ScrollBox_2;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SkinWetnessSlider;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SkinWetnessText;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Aura;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_BaseSkin_1;                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Burnish;                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Patina;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HiddenOptions_C*                  WBP_HiddenOptions;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HiddenOptions_C*                  WBP_HiddenOptions_0;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HiddenOptions_C*                  WBP_HiddenOptions_1;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HiddenOptions_C*                  WBP_HiddenOptions_2;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HiddenOptions_C*                  WBP_HiddenOptions_3;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USophiaGameInstance*                   GameInstance;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SkinColorOptionsV2_C* GetDefaultObj();

	void Construct();
	void OnValueChanged(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void BndEvt__WBP_SkinColorOptions_SkinWetnessSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void CustomEvent(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void CustomEvent_1(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void CustomEvent_2(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void ExecuteUbergraph_WBP_SkinColorOptionsV2(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 Temp_byte_Variable_1, class UObject* K2Node_CustomEvent_Object_3, int32 K2Node_CustomEvent_Val_3, bool K2Node_CustomEvent_bUseIndex_3, const class FString& K2Node_CustomEvent_ID_3, float K2Node_ComponentBoundEvent_Value, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, float CallFunc_Conv_ByteToFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UObject* K2Node_CustomEvent_Object_2, int32 K2Node_CustomEvent_Val_2, bool K2Node_CustomEvent_bUseIndex_2, const class FString& K2Node_CustomEvent_ID_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, class UObject* K2Node_CustomEvent_Object_1, int32 K2Node_CustomEvent_Val_1, bool K2Node_CustomEvent_bUseIndex_1, const class FString& K2Node_CustomEvent_ID_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, const struct FCustomizationData& K2Node_Select_Default, const struct FCustomizationData& K2Node_Select_Default_1);
};

}


