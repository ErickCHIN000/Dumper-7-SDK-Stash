#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4E8 - 0x4E0)
// BlueprintGeneratedClass Configurable_Glowing_Pickup.Configurable_Glowing_Pickup_C
class AConfigurable_Glowing_Pickup_C : public AGlowing_Pickup_Actor_C
{
public:
	struct FDHDataTableID                        ItemId;                                            // 0x4E0(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class AConfigurable_Glowing_Pickup_C* GetDefaultObj();

	void UserConstructionScript();
};

}


