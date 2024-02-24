#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1178 - 0x1178)
// BlueprintGeneratedClass RangedMediumBrigand.RangedMediumBrigand_C
class ARangedMediumBrigand_C : public ARangedLightBrigand_C
{
public:

	static class UClass* StaticClass();
	static class ARangedMediumBrigand_C* GetDefaultObj();

	void Death_HandleStormModeMilestones(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


