#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x261 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RadarMainScreenBase.UMG_RadarMainScreenBase_C
class UUMG_RadarMainScreenBase_C : public UIcarusMapScreenBase
{
public:
	bool                                         DebugDisableFOW;                                   // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_RadarMainScreenBase_C* GetDefaultObj();

	void FOWRevealCircle(const struct FVector& WorldLocation, float RadiusInKM);
};

}


