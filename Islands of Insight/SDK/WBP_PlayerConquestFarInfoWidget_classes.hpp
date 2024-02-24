#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3C0 - 0x3B0)
// WidgetBlueprintGeneratedClass WBP_PlayerConquestFarInfoWidget.WBP_PlayerConquestFarInfoWidget_C
class UWBP_PlayerConquestFarInfoWidget_C : public UPlayerInfoWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                MarkerImage;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerConquestFarInfoWidget_C* GetDefaultObj();

	void BP_Init();
	void ExecuteUbergraph_WBP_PlayerConquestFarInfoWidget(int32 EntryPoint, uint8 Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_GetRedTeamColor_ReturnValue, const struct FLinearColor& CallFunc_GetBlueTeamColor_ReturnValue, uint8 CallFunc_GetTeam_ReturnValue, bool CallFunc_Less_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
};

}


