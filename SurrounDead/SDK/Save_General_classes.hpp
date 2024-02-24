#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x1C0 - 0x40)
// BlueprintGeneratedClass Save_General.Save_General_C
class USave_General_C : public UEMSCustomSaveGame
{
public:
	class FName                                  Level;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUDS_and_UDW_State                    WeatherSystem;                                     // 0x48(0x178)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USave_General_C* GetDefaultObj();

	void Save_General();
};

}


