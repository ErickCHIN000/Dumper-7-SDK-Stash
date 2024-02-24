#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AtmosphereFunctionLibrary.BP_AtmosphereFunctionLibrary_C
class UBP_AtmosphereFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_AtmosphereFunctionLibrary_C* GetDefaultObj();

	class ABP_AtmosphereController_C* GetAtmosphereController(class UObject* __WorldContext, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class ABP_IcarusWorldSettings_C* K2Node_DynamicCast_AsBP_Icarus_World_Settings, bool K2Node_DynamicCast_bSuccess, class ABP_AtmosphereController_C* K2Node_DynamicCast_AsBP_Atmosphere_Controller, bool K2Node_DynamicCast_bSuccess_1);
};

}


