#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x148 - 0xF8)
// BlueprintGeneratedClass ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C
class UArsenalEquipHUDComponent_C : public UTTLActorComponent
{
public:
	class UClass*                                UIClass;                                           // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           ArsenalHUD;                                        // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class ETTLInventoryCategory>     CellCategories;                                    // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                CurtainUIClass;                                    // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CurtainArsenalHUD;                                 // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLInventoryCategory             DefaultCategory;                                   // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_771[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CursorDegrees;                                     // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class ETTLInventoryCategory             CurrentCategory;                                   // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_772[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CursorInputDegreeBase;                             // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalEquipHUDComponent_C* GetDefaultObj();

	void SetPartsInfo_SetToWidgets(class FText ItemName, class FText Row1Name, class FText Row1Value, class FText Row2Name, class FText Row2Value, class FText Row3Name, class FText Row3Value, class FText Row4Name, class FText Row4Value);
	void SetPartsInfo_Weapon(class FName RowName);
	void SetPartsInfo_ArmLeft(class FName RowName);
	void SetPartsInfo_ArmRight(class FName RowName);
	void SetPartsInfo_Legs(class FName RowName);
	void SetPartsInfo_Head(class FName RowName);
	void SetPartsInfo(enum class ETTLInventoryCategory Category, class FName PartsID, int32 PageCurrent, int32 PageMax, int32 ValueCurrent, int32 ValueMax);
	void HidePartsInfo();
	void ShowPartsInfo();
	void DegreeToCategory(float Degree, enum class ETTLInventoryCategory* Result, float Deg);
	void SetCurrentCategory(enum class ETTLInventoryCategory NewCurrentCategory);
	void SetCategoryButtonUV(class UButton* Button, float U, float V);
	void GetHUDCategoryParam(enum class ETTLInventoryCategory Category, struct FEquipmentHUDParamStruct* HUDParam, const struct FEquipmentHUDParamStruct& ReturnVal);
	void SetCellCategory(int32 Index, enum class ETTLInventoryCategory Category);
	void IsVisible(bool* Result, bool ReturnValue);
	void Hide();
	void Show();
};

}


