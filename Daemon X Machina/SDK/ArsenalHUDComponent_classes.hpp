#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x151 - 0x108)
// BlueprintGeneratedClass ArsenalHUDComponent.ArsenalHUDComponent_C
class UArsenalHUDComponent_C : public UTTLArsenalHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(Transient, DuplicateTransient)
	struct FLinearColor                          TMPGaugeFirstColor;                                // 0x110(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TMPGaugeOverHeatColor;                             // 0x120(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGotTMPGaugeFirstColor;                           // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_784[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TMPGaugeWarningColor;                              // 0x134(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TMPWarningLastState;                               // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_78B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TMPWarningRestSeconds;                             // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WarningCount;                                      // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MissileMode;                                       // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UArsenalHUDComponent_C* GetDefaultObj();

	void UpdatePlayerHUD(float DeltaSeconds);
	void ExecuteUbergraph_ArsenalHUDComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


