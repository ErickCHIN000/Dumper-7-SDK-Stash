#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass WBP_CC_Options_FaceEyes.WBP_CC_Options_FaceEyes_C
class UWBP_CC_Options_FaceEyes_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Base;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Options_Base_C*                WBP_CC_Options_Base_1;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HiddenOptions_C*                  WBP_HiddenOptions;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HiddenOptions_C*                  WBP_HiddenOptions_1;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_Options_FaceEyes_C* GetDefaultObj();

	void Construct();
	void OnValueChanged(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void CustomEvent(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void ExecuteUbergraph_WBP_CC_Options_FaceEyes(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable, const struct FCustomizationData& K2Node_Select_Default, class UObject* K2Node_CustomEvent_Object_1, int32 K2Node_CustomEvent_Val_1, bool K2Node_CustomEvent_bUseIndex_1, const class FString& K2Node_CustomEvent_ID_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, uint8 CallFunc_Conv_IntToByte_ReturnValue_1);
};

}


