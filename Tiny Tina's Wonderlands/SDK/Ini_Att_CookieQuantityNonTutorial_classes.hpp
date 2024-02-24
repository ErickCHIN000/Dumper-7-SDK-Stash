#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Ini_Att_CookieQuantityNonTutorial.Ini_Att_CookieQuantityNonTutorial_C
class UIni_Att_CookieQuantityNonTutorial_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UIni_Att_CookieQuantityNonTutorial_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IBPI_ED_FinalChest_C> K2Node_DynamicCast_AsBPI_ED_Final_Chest, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetNonTutoCookieAmount_NonTutoCookieAmount);
};

}


