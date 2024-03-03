#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Map_BPI.Map_BPI_C
class IMap_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMap_BPI_C* GetDefaultObj();

	void Update_Map_Display_Visual(class UObject* Map_Display_Image, class UObject* Map_Background_Image, class UMaterialInterface* Retainer_Box_Mask_Material, bool Images_Hidden);
	void Get_Current_Map_Returns(TArray<class UMap_Return_BP_C*>* Actors, TArray<int32>* Return_IDs, TArray<class UClass*>* Return_Widgets);
	void Remove_Map_Return(class AActor* Target_Actor);
	void Add_Map_Return(class AActor* Target_Actor);
	void Update_Map_Markers(bool Show_Markers, TArray<class FName>& Friendly_Tags, TArray<class FName>& Hostile_Tags, class FName Targets_Tag);
	void Get_Map_Info(float* Zoom, float* View_Range__meters_, float* Max_View_Range, float* Min_View_Range, struct FVector* Player_Location, struct FRotator* Player_Z_Rotation, class UMap_Source_Component_C** Source_Component, bool* Shows_Responses, TArray<class FName>* Friendly_Units_Tags, TArray<class FName>* Hostile_Unit_Tags);
	void Update_Zoom_Limits(float Min_View_Range, float Max_View_Range, bool Keep_Relative_View_Range);
	void Zoom_Out();
	void Zoom_In();
	void Set_Manual_Location(bool Manually_Update_Location, bool Manually_Update_Rotation, const struct FVector& New_Location, const struct FRotator& New_Z_Rotation, bool Scanner_Source_Is_Map_Source);
};

}


