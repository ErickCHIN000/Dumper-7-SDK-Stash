#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C
class IUltra_Dynamic_Weather_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUltra_Dynamic_Weather_Interface_C* GetDefaultObj();

	void Set_Up_Rainbow_MID();
	void Get_Rainbow_MID(bool* Rainbow_Enabled, class UMaterialInstanceDynamic** Mid);
	void Get_Intended_Water_Level(bool* Using_Water_Level, double* Water_Level);
	void Update_Rainbow();
	void Set_Project_Mode(enum class EUDS_Project_Mode Mode);
	void Get_Weather_Particle_Collision_Channel(enum class ECollisionChannel* Channel);
	void Hard_Refresh_Cached_Properties();
	void Destroy_Close_Thunder_Component(class USceneComponent* Component);
	void Get_Close_Thunder_Sound_Occlusion(double* Volume, double* LPF);
	void Update_Material_Effects();
	void Apply_State(const struct FUDS_and_UDW_State& State);
	void Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State);
	void Get_Intended_Cloud_Direction(double* Intended_Cloud_Direction);
	void Get_Intended_Cloud_Speed(double* Intended_Cloud_Speed);
	void Update_Weather_Settings_from_UDS(double Cloud_Coverage, double Fog, double Dust);
	void Initialize_Weather();
	void Set_Season();
};

}


