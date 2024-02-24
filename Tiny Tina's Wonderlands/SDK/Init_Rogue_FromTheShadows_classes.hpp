#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Rogue_FromTheShadows.Init_Rogue_FromTheShadows_C
class UInit_Rogue_FromTheShadows_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 CriticalHitDamageHandle;                           // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Rogue_FromTheShadows_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetDataTableValueFromHandle_ReturnValue);
};

}


