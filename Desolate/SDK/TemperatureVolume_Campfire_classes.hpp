#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// BlueprintGeneratedClass TemperatureVolume_Campfire.TemperatureVolume_Campfire_C
class ATemperatureVolume_Campfire_C : public ASHTemperatureVolume
{
public:
	class UAudioComponent*                       Audio;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box1;                                              // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATemperatureVolume_Campfire_C* GetDefaultObj();

	bool OnPlayerEnterEvent(class ASHPlayerCharacter* Character, bool CallFunc_OnPlayerEnterEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool OnPlayerLeaveEvent(class ASHPlayerCharacter* Character, bool CallFunc_OnPlayerLeaveEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


