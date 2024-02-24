#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x278 - 0x268)
// WidgetBlueprintGeneratedClass Msn_hud_radar04.Msn_hud_radar04_C
class UMsn_hud_radar04_C : public UTTLHUDMissionRadarOverlay
{
public:
	class UOverlay*                              Top;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInterface*                    NewVar_0;                                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMsn_hud_radar04_C* GetDefaultObj();

	void OnPaint(struct FPaintContext& Context);
};

}


