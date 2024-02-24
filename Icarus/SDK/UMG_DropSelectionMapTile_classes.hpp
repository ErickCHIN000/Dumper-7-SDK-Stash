#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x29C - 0x260)
// WidgetBlueprintGeneratedClass UMG_DropSelectionMapTile.UMG_DropSelectionMapTile_C
class UUMG_DropSelectionMapTile_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Tile;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             TileTexture;                                       // 0x270(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	float                                        TileSize;                                          // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_DropSelectionMapTile_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_DropSelectionMapTile(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
};

}


