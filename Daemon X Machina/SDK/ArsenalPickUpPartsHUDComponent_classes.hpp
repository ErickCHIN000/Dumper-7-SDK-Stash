#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x109 - 0xF8)
// BlueprintGeneratedClass ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C
class UArsenalPickUpPartsHUDComponent_C : public UTTLActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(Transient, DuplicateTransient)
	class UUserWidget*                           HUD;                                               // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UArsenalPickUpPartsHUDComponent_C* GetDefaultObj();

	void TTLCanBeginPlay(bool* CanBegin);
	void Hide();
	void Show();
	void UpdatePickUpPartsHUD();
	void UpdateHUD();
	void TTLBeginPlay();
	void ExecuteUbergraph_ArsenalPickUpPartsHUDComponent(int32 EntryPoint);
};

}


