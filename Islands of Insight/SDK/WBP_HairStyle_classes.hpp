#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass WBP_HairStyle.WBP_HairStyle_C
class UWBP_HairStyle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_1;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_2;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_3;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Base;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Base_1;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Base_2;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Base_3;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HairStyle_C* GetDefaultObj();

	void HandleHairColorSelection(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_GetEthricIndex_Array_Index, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Construct();
	void OnValueChanged(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void CustomEvent(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void CustomEvent_1(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void CustomEvent_2(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void ExecuteUbergraph_WBP_HairStyle(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 Temp_byte_Variable, const struct FCustomizationData& K2Node_Select_Default, class UObject* K2Node_CustomEvent_Object_3, int32 K2Node_CustomEvent_Val_3, bool K2Node_CustomEvent_bUseIndex_3, const class FString& K2Node_CustomEvent_ID_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UObject* K2Node_CustomEvent_Object_2, int32 K2Node_CustomEvent_Val_2, bool K2Node_CustomEvent_bUseIndex_2, const class FString& K2Node_CustomEvent_ID_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, class UObject* K2Node_CustomEvent_Object_1, int32 K2Node_CustomEvent_Val_1, bool K2Node_CustomEvent_bUseIndex_1, const class FString& K2Node_CustomEvent_ID_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, uint8 CallFunc_Conv_IntToByte_ReturnValue_3);
};

}


