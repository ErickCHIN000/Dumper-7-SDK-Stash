#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2C8 - 0x2C0)
// WidgetBlueprintGeneratedClass SquareProgressBar.SquareProgressBar_C
class USquareProgressBar_C : public UUserWidget
{
public:
	class UImage*                                ProgressBar;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USquareProgressBar_C* GetDefaultObj();

	void SetPercent(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


