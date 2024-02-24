#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x420 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ArmourHealth.UMG_ArmourHealth_C
class UUMG_ArmourHealth_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BrokenFlashing;                                    // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ArmourPiece;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           Healthy;                                           // 0x278(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           Damaged;                                           // 0x300(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           Broken;                                            // 0x388(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        ArmourDurability;                                  // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        HealthyArmourThreshold;                            // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamagedArmourThreshold;                            // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrokenArmourThreshold;                             // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ArmourHealth_C* GetDefaultObj();

	void SetArmourHealth(float ArmourDurability, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetArmourVisuals(enum class E_ArmourHealth ArmourHealth, enum class E_ArmourHealth Temp_byte_Variable, const struct FSlateBrush& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_ArmourHealth(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


