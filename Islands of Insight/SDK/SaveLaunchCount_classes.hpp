#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass SaveLaunchCount.SaveLaunchCount_C
class USaveLaunchCount_C : public USaveGame
{
public:
	int32                                        LaunchCount;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USaveLaunchCount_C* GetDefaultObj();

	void AddLaunchCount(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


