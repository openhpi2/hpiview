/*      -*- linux-c -*-
 *
 * Copyright (c) 2004 by Intel Corp.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  This
 * file and program are licensed under a BSD style license.  See
 * the Copying file included with the OpenHPI distribution for
 * full licensing terms.
 *
 * Authors:
 *	   Denis Sadykov
 *
 *
 */

#ifndef __HVIEW_CALLBACKS_H__
#define __HVIEW_CALLBACKS_H__

typedef struct HviewCallData {
	guint		sessionid;
	guint		parentid;
	guint		entryid;
	gpointer	data;
} HviewCallDataT;

void hview_quit_call(GtkWidget *widget, gpointer data);
gboolean hview_toggled_true_false_call(GtkToggleButton *but, gpointer data);
void hview_empty_log_call(GtkWidget *widget, gpointer data);
void hview_load_plugin_call(GtkWidget *widget, gpointer data);
void hview_unload_plugin_call(GtkWidget *widget, gpointer data);
void hview_session_close_call(GtkWidget *widget, gpointer data);
gint hview_discover_thread(gpointer data);
void hview_discover_call(GtkWidget *widget, gpointer data);
void hview_about_call(GtkWidget *widget, gpointer data);
void hview_tree_column_activated_call(GtkTreeViewColumn *column,
					     gpointer data);
void hview_tree_row_activated_call(GtkWidget *widget,
					  GtkTreeIter *iter,
					  GtkTreePath *path,
					  gpointer data);
gboolean hview_butpress_list_call(GtkWidget *widget,
				   GdkEventButton *event,
				   gpointer data);
void hview_domain_row_activated_call(GtkWidget *widget,
				     GtkTreeIter *iter,
				     GtkTreePath *path,
				     gpointer data);
gint hview_entity_get_info_thread(gpointer data);
void hview_tree_row_selected_call(GtkTreeSelection *selection,
					 gpointer data);
gint hview_readsensor_thread(gpointer data);
void hview_read_sensor_call(GtkWidget *widget, gpointer data);
void hview_show_hide_domain_call(GtkWidget *widget, gpointer data);
void hview_open_session_call(GtkWidget *widget, gpointer data);
gboolean hview_check_events_thread(gpointer data);
void hview_subscribe_events_call(GtkWidget *widget, gpointer data);
void hview_get_events_call(GtkWidget *widget, gpointer data);
void hview_switch_page_call(GtkNotebook *notebook,
			    GtkNotebookPage *page,
			    guint pagenum,
			    gpointer data);

gint hview_parm_ctrl_restore_thread(gpointer data);
void hview_parm_ctrl_restore_call(GtkWidget *widget, gpointer data);
gint hview_parm_ctrl_save_thread(gpointer data);
void hview_parm_ctrl_save_call(GtkWidget *widget, gpointer data);
gint hview_parm_ctrl_default_thread(gpointer data);
void hview_parm_ctrl_default_call(GtkWidget *widget, gpointer data);
void hview_set_power_off_call(GtkWidget *widget, gpointer data);
void hview_set_power_on_call(GtkWidget *widget, gpointer data);
void hview_set_power_cycle_call(GtkWidget *widget, gpointer data);
void hview_reset_cold_call(GtkWidget *widget, gpointer data);
void hview_reset_warm_call(GtkWidget *widget, gpointer data);
void hview_reset_assert_call(GtkWidget *widget, gpointer data);
void hview_reset_deassert_call(GtkWidget *widget, gpointer data);
void hview_toggled_call(GtkToggleToolButton *but, gpointer data);
void hview_disactivate_toggle_call(GtkWidget *widget, gpointer data);

void hview_rpt_settings_ok_response(gpointer data);
void hview_rpt_settings_call(GtkWidget *widget, gpointer data);
void hview_sensor_settings_ok_response(gpointer data);
void hview_sensor_settings_call(GtkWidget *widget, gpointer data);

void hview_sensor_masks_apply_response(gpointer data);
void hview_sensor_assert_mask_set_call(GtkWidget *widget, gpointer data);
void hview_sensor_deassert_mask_set_call(GtkWidget *widget, gpointer data);
void hview_inventory_settings_ok_response(gpointer data);
void hview_inventory_settings_call(GtkWidget *widget, gpointer data);

gboolean hview_butpress_invareas_call(GtkWidget *widget,
				      GdkEventButton *event,
				      gpointer data);

gboolean hview_invarea_set_call(GtkWidget *widget,
				GdkEventButton *event,
				gpointer data);
gboolean hview_butpress_invdata_view_call(GtkWidget *widget,
					  GdkEventButton *event,
					  gpointer data);
gboolean hview_invarea_selected_call(GtkTreeSelection *selection,
				     gpointer data);
gboolean hview_invfield_selected_call(GtkTreeSelection *selection,
				      gpointer data);

void hview_invarea_add_apply_responce(HviewCallDataT *cdata);
gboolean hview_invarea_add_call(GtkWidget *button, gpointer data);
gboolean hview_invarea_remove_call(GtkWidget *button, gpointer data);

gboolean hview_invarea_unsel_call(GtkTreeView *area_view, gpointer data);
gboolean hview_invfield_unsel_call(GtkTreeView *field_view, gpointer data);

void hview_invfield_add_apply_response(HviewCallDataT *cdata);
gboolean hview_invfield_add_call(GtkWidget *button, gpointer data);
gboolean hview_invfield_remove_call(GtkWidget *button, gpointer data);

void hview_invfield_set_apply_response(HviewCallDataT *cdata);
gboolean hview_invfield_set_call(GtkWidget *widget, gpointer data);


void hview_control_settings_ok_response(gpointer data);
void hview_control_settings_call(GtkWidget *widget, gpointer data);

void hview_watchdog_settings_ok_response(gpointer data);
void hview_watchdog_settings_call(GtkWidget *widget, gpointer data);

gint hview_watchdog_reset_thread(gpointer data);
void hview_watchdog_reset_call(GtkWidget *widget, gpointer data);


void hview_domain_settings_ok_response(gpointer data);
void hview_domain_settings_call(GtkWidget *widget, gpointer data);

void hview_domain_evlog_time_ok_response(gpointer data);
void hview_domain_evlog_time_call(GtkWidget *widget, gpointer data);

void hview_domain_evlog_ok_response(gpointer data);
void hview_domain_evlog_call(GtkWidget *widget, gpointer data);
void hview_domain_evlog_clear_call(GtkWidget *widget, gpointer data);
void hview_domain_evlog_overflow_reset_call(GtkWidget *widget, gpointer data);

gboolean hview_domain_evlog_selected_call(GtkTreeSelection *selection,
					  gpointer data);
gboolean hview_domain_alarm_selected_call(GtkTreeSelection *selection,
					  gpointer data);
gboolean hview_clear_domain_event_log_call(GtkWidget *widget,
					   gpointer data);


void hview_sys_evlog_time_ok_response(gpointer data);
void hview_sys_evlog_time_call(GtkWidget *widget, gpointer data);
void hview_sys_evlog_ok_response(gpointer data);
void hview_sys_evlog_call(GtkWidget *widget, gpointer data);
void hview_sys_evlog_clear_call(GtkWidget *widget, gpointer data);
void hview_sys_evlog_overflow_reset_call(GtkWidget *widget, gpointer data);
gboolean hview_sys_evlog_selected_call(GtkTreeSelection *selection,
					  gpointer data);
gboolean hview_clear_sys_event_log_call(GtkWidget *widget,
					   gpointer data);


#endif

