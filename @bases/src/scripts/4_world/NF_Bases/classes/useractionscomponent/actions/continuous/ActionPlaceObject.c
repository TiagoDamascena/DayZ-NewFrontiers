modded class ActionPlaceObject: ActionDeployObject
{
	override void OnStartServer(ActionData action_data)
	{
		PlayerBase player = action_data.m_Player;

		if (!player.NF_IsInSafezone()) {
			super.OnStartServer(action_data);
		}
	}
}