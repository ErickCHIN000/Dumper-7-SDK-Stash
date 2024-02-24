#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x620 - 0x5F8)
// BlueprintGeneratedClass BP_ShieldMod.BP_ShieldMod_C
class ABP_ShieldMod_C : public AShield
{
public:
	float                                        IgnoreManufacturerName;                            // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    ShieldAttribute_ElementalResistance;               // 0x5FC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                ShieldBuddy_MessyBreakup;                          // 0x608(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shield_RuneCount;                                  // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Rune_Spirit_ShieldRegenDelay;                      // 0x614(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ShieldMod_C* GetDefaultObj();

	void UserConstructionScript();
};

}


