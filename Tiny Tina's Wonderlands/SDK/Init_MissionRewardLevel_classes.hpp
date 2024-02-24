#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_MissionRewardLevel.Init_MissionRewardLevel_C
class UInit_MissionRewardLevel_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_MissionRewardLevel_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class UOakMission* K2Node_DynamicCast_AsOak_Mission, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMissionLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}


