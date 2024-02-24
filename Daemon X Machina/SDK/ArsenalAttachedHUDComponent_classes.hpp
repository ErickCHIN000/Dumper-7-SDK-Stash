#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x10C - 0xF0)
// BlueprintGeneratedClass ArsenalAttachedHUDComponent.ArsenalAttachedHUDComponent_C
class UArsenalAttachedHUDComponent_C : public UActorComponent
{
public:
	class UClass*                                UIClass;                                           // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           HUD;                                               // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableHUD;                                         // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UILocationOffset;                                  // 0x104(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalAttachedHUDComponent_C* GetDefaultObj();

	void UpdateChangeWeaponHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter);
	void UpdateReloadHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter, bool IsReload);
	void UpdateRightWeaponHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter);
	void UpdateLeftWeaponHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter);
	void UpdateFemtoHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter);
	void UpdateTMPHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter);
	void UpdateHPHUD(class UUserWidget* UI, class ABaseCharacter_C* OwnerCharacter);
};

}


