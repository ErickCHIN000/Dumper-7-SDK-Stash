#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// BlueprintGeneratedClass BP_CompassComponent.BP_CompassComponent_C
class UBP_CompassComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                CompassWidget;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideCompass_HideOnBeginPlay_;                      // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CreatedCompass;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CompassComponent_C* GetDefaultObj();

	void ShowCompass();
	void HideCompass();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CompassComponent(int32 EntryPoint);
};

}


