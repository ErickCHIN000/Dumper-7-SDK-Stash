#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass WBP_CC_Options_SkinTattoo.WBP_CC_Options_SkinTattoo_C
class UWBP_CC_Options_SkinTattoo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CC_Options_Base_C*                TattooOptions;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USophiaGameInstance*                   GameInstance;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_Options_SkinTattoo_C* GetDefaultObj();

	void Construct();
	void CustomEvent_1(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void ExecuteUbergraph_WBP_CC_Options_SkinTattoo(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable, const struct FCustomizationData& K2Node_Select_Default, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, uint8 CallFunc_Conv_IntToByte_ReturnValue);
};

}


